#include<iostream>

using namespace std;

/*   overload function   */
int operate(const int &a, const int &b )
{
  return a+b;
}

double operate(const double &a, const double &b)
{
  return a*b;
}

/*    template   */
template < class T>
T operate(const T &a, const T &b)
{
  return a*b;
}


int main()
{
  int x(5), y(2);

  double n=5.0, m=2.0;

  cout << operate(x,y) << endl;
  cout << operate(m,n) << endl;
  cout << operate<int>(x,y) << endl;

  return 0;

}

