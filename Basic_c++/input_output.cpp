#include<iostream>
#include<string>
#include<sstream>  //make the string be treated as a stream.

using namespace std;

int main()
{
  string mystr1, mystr2;
  cout << "what's is your name?" << endl;
  //cin >> mystr1;   //meet space wii stop
  //cout << "please try again" <<endl;
  getline(cin, mystr2);
  cout << "your name is: " << mystr2 << endl;  
  
  string mystr;
  float price=0;

  cout << "enter new price: " << endl;
  getline(cin, mystr);
  stringstream(mystr) >> price;
  cout << "the price is: " << price << endl;

  return 0;
}
