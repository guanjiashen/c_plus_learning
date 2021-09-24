#include<iostream>

using namespace std;

int main()
{
  int i,n;

  cout<< "enter the number:" << endl;
  cin >> i;
  
  int *p;
  p = new int [i];

  for (int n=0; n<i; n++)
  { 
    cout << "enter the element: " << endl;
    cin >> p[n];    // p can be regarded as a array name. *(p+n) is also valid.
  }

  cout << "the elements in p are: " << endl;
  for ( n=0; n<i; n++)
  { 
    cout << p[n] << ' ';
  }
  cout << endl;
  
  delete[] p;

  return 0;
}
