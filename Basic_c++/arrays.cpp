#include <iostream>

#define width 5
#define height 3


using namespace std;

int add1(int arg[], int length)
{ 
  int sum{0};
  for (int i=0; i<length; i++)
  {sum +=arg[i];}

  return sum;

}

int add2(int arg[height][width])   //2d array as an parameters should be defined the number of elements
{
  int sum =0;
  for (int i=0; i<height; i++)
    for (int j=0; j<width; j++)
    {sum +=arg[i][j];}

  return sum;

}

int main()
{
  int foo[] = {1,2,3,4,5};
  int n, result(0);

  for (n=0; n<5; n++)
  {
    result += foo[n];
  } 

  cout << result << endl;

  int jim[height][width];
  for (n=0; n<height; n++)
    for (int m=0; m<width; m++)
      {jim[n][m]=(n+1)*(m+1);} 
   
  cout << add1(foo,5) << endl;

  cout << add2(jim) <<endl;

  return 0;
}
