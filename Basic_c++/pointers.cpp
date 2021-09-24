#include<iostream>
#include<string>

using namespace std;

void Aa( char *po )        //translation between low case letter and large case letter
{
  for(int i=0; i< sizeof(po) ; i++)
  { 
    if (*(po+i)>='A' && *(po+i)<= 'Z')
    { *(po+i)=char(*(po+i)+32);}
    else if (*(po+i)>='a' && *(po+i)<= 'z')
    { *(po+i)=char(*(po+i)-32);}
  }  
}


int main()
{
  int a(3);
  
  int *p1=&a;

  cout << a << endl;

  *p1=5;

  cout << a << endl;

  char str[]="Good test!";
  char *p=str;

  cout << sizeof(str) << endl;

  for(int i=0; i<sizeof(str); i++)
  {cout << *(p+i) << " ";}
  
  cout << endl;

  Aa(str);
  for(int i=0; i<sizeof(str); i++)
  {cout << *(p+i) << " ";}

  cout << endl;

  return 0;

}
