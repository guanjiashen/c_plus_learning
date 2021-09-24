#include<iostream>
#include<string>

using namespace std;

int main()
{
  char str1[]="Good test!";
  string str2="Good test!";

  int count=0;

  for (char c1:str1)
  {count++;}
  cout << "the lenght of str1:" << count << endl;

  count=0;
  for (char c2:str2)
  {count++;}
  cout << "the lenght of str2:" << count << endl;

  return 0;
}
