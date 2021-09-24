#include<iostream>

using namespace std;

int add(int a, int b)
{
  int r;
  r=a+b;
  return r;
}

void dulplicate (int &a, int &b)
{
  a*=2;
  b+=2;
}

void print()
{
  cout << "this is c++" << endl;
}

int prod (int a, int b=2)
{
  int r=a*b;
  return r;

}

int main()
{
  int z;
  z = add(5,3);
  cout << z << endl;
  
  print();
  
  int x(3), y(4);
  dulplicate(x,y);
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;

  cout << prod(x,y) << endl;
  return 0;  
}


