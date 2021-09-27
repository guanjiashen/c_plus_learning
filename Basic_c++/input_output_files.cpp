#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{ 
  string fname="examples";

  ofstream f1;       //similar to class
  f1.open(fname);
  f1 << "Good test.\n" ;
  f1.close();
  
  ofstream f2(fname,ios::out | ios::app);
  f2 << "continue\n";
  f2.close();

  ifstream f3(fname); 
  string line;
  if (f3.is_open())
    while(getline(f3,line))
    {cout << line << endl;}
  else
  {cout << "uable to open the "<< fname << " file" << endl;}
  f3.close();

  return 0;
}
