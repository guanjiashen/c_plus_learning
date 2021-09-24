#include <iostream>
using namespace std;

int main ()
{
  int a, b = 3;
  a = b;
  a += 2; a++;
  cout << a << endl;

  int c;
  c = ( a!=b ) ? a : b;

  cout << c << endl;
  cout << "the float of c is: " << float(c) << endl;

  return 0;
}
