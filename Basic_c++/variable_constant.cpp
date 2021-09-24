// initialization of variables

#include <iostream>
#include <string>
using namespace std;

#define pi 3.11415926

int main()
{
  int a = 5; 
  int b (3);
  int c {2};
  bool flag (true);
  cout << a << ',' << b <<',' << c << '\n';

  string mystring;

  if ( flag )
  {
    mystring = "Good test!";

    cout << mystring << endl;
  }

  int area = 2 * pi * 1;

  cout << "the area is: " << area << endl;

  return 0;
}

