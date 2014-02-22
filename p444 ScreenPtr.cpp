//
#include <cstddef>
using std::size_t;
//#include "screen5.h"
 
//private class for use by ScreenPtr only
class ScrPtr {
    friend class ScreenPtr;
    Screen *sp;
    size_t use;
    ScrPtr(Screen *p): sp(p), use(1) { }
    ~ScrPtr() { delete sp; }
};
 
class ScreenPtr {
public:
    // no default constructor: ScreenPtrs must be bound to an object
    ScreenPtr(Screen *p): ptr(new ScrPtr(p)) { }
 
    // copy members and increment the use count
    ScreenPtr(const ScreenPtr &orig):
       ptr(orig.ptr) { ++ptr->use; }
    ScreenPtr& operator=(const ScreenPtr&);
 
    // if use count goes to zero, delete the ScrPtr object
    ~ScreenPtr() { if (--ptr->use == 0) delete ptr; }
 
    // constructor and copy control members as before
    Screen &operator*() { return *ptr->sp; }
    Screen *operator->() { return ptr->sp; }
 
    const Screen &operator*() const { return *ptr->sp; }
    const Screen *operator->() const { return ptr->sp; }
private:
    ScrPtr *ptr;        // points to use-counted ScrPtr class
};
 
ScreenPtr& ScreenPtr::operator=(const ScreenPtr &rhs)
{
    ++rhs.ptr->use;     // increment use count on rhs first
    if (--ptr->use == 0)
         delete ptr;    // if use count goes to 0 on this object, delete it
    ptr = rhs.ptr;      // copy the ScrPtr object
    return *this;
}
 
 