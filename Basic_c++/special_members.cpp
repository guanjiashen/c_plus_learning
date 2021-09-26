#include <iostream>
#include <string>

using namespace std;

class ex
{
  private:
    string* ptr;
    string str1 ="bad test!";
  public:
    ex():ptr(new string){}
    /*ex()
    {ptr=&str1;}*/
    ex(string str):ptr(new string(str)){}
    /*ex(string str)
    {ptr= &str;}*/
    ~ex(){delete ptr;}          

    ex (ex& nex):ptr(new string(nex.content())){}    //depp copy constructor aim to copy the member function.

    void print()
    {cout << *ptr << endl;}

    string& content()
    {return *ptr;}

};

int main()
{
  ex ex2("good test!");

  ex2.print();
  
  ex2.content()="excellent";

  cout<< ex2.content() << endl;

  ex ex3(ex2);
  ex3.print();
  cout << ex3.content() << endl;
  
  return 0;
}	
