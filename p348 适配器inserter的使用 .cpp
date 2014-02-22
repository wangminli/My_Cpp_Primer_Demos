//p348 适配器inserter的使用 
#include <iostream>
#include <vector>
#include <list> 
#include <iterator>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	list<int> ilist;
	ilist.push_back(1);
	ilist.push_back(42);
	ilist.push_back(47);
	
	vector<int> ivec;
	for (vector<int>::size_type ix = 0; ix != 50; ix++)	
		ivec.push_back(ix);
	
	list<int>::iterator it = find(ilist.begin(), ilist.end(), 42);
	replace_copy(ivec.begin(), ivec.end(), inserter(ilist, it), 33, 0);

	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
		cout << *iter <<"  ";
	cout << endl;	 
	return 0;
}
/*
1  0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20  21
 22  23  24  25  26  27  28  29  30  31  32  0  34  35  36  37  38  39  40  41
42  43  44  45  46  47  48  49  42  47
请按任意键继续. . .

(说明：在ilist序列（1,42,47）的42前面插入vec的所有数值，并将值为33的位置赋值为0)
*/

/*
replace_copy原型 

template<class InputIterator, class OutputIterator, class Type>
   OutputIterator replace_copy(
      InputIterator _First, 
      InputIterator _Last, 
      OutputIterator _Result,
      const Type& _OldVal, 
      const Type& _NewVal
   );
说明：在 _Result处插入某容器范围[_First，_Last）内的内容，并将其内容为_OldVal的值修改为_NewVal
*/ 