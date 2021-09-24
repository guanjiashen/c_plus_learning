#include<iostream>

using namespace std;

namespace foo
{
  int values(){ return 5;}
}

namespace bar
{
  const double pi=3.1415;
  double values(){ return 2*pi; }
}

int main()
{
  int x(20), y{10};

  { 
    int x(5);

    cout << x <<endl;
    cout << y << endl;
  }
   cout << x <<endl;
   cout << y <<endl;

   cout << foo::values() << endl;
   cout << bar::values() << endl;

   using namespace bar;
   cout << values() << endl;

   return 0;
}
