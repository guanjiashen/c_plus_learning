#include<iostream>

using namespace std;

int main()
{
  int a(3);

  if (a>0)
  {cout << "a is positive." <<endl;}

  int n=5;

  while(n>10)
  {
  cout << n << ",";
  --n;
  }
  cout << endl;
  for (int i=5; i>0; i--)
  {cout << i << endl;}

  string str {"hello!"};
  for (char c: str)
  {cout << '[' << c <<']';}
  cout << endl;

  return 0;
}
