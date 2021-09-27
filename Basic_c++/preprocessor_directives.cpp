#include <iostream>
#include <string>

#define getmax(a,b) ((a)>(b)?(a):(b))
#define str(x) #x

using namespace std;

int main()
{
  int x(5), y;
  int a[]={1,2};

  y=getmax(x,2);
  y=getmax(a[0],a[1]);

  cout << "y: "<< y << endl;
  cout << str(good) << endl;

  int a;
  return 0;
}
