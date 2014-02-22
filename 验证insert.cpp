#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <int> c1, c2;
   list <int>::iterator Iter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   
 

   cout << "c1 =";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout << " " << *Iter;
   cout << endl;

   Iter = c1.begin( );
   Iter++;
   c1.insert( Iter, 100 );
   cout << "c1 =";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout << " " << *Iter;
   cout << endl;
}