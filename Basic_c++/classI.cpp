#include <iostream>
#include <string>

using namespace std;

class fruit   // class is similar to struc. If private part is top in the class, then can be neglected.  
{                  // note that double discout(0.7) here will not be valid. It is a question.
  private:	
    double discount=0.7;
  public:
    string name="banana";
    double price=5.0;
    void print1()
    {cout << "What a good fruit!" << endl;}
    void print2();
    
    fruit(){}
    fruit(const double &a):discount(a){}
};

void fruit::print2()
{cout << "the cheap price of "<< name << " is: " << price*discount << endl;}

class food
{
  private:
    fruit fr3;  // fruit fr3() will not be valid

  public:
    void foodprint()
    {cout << "today our food is: " << fr3.name << endl;}
};

int main()
{
  fruit fr1;

  fr1.name = "apple";     //members in class private part can not be get by .xx out of class, 
  fr1.price = 3.12;      // and only be used in class

  fr1.print1();
  fr1.print2();
  
  cout << "please enter the discount you want:" <<endl;
  double discount;
  cin >> discount;
  fruit fr2(discount);

  fr2.name ="apple";
  fr2.price=3.12;
  fr2.print1();
  fr2.print2();
  
  food fd1;
  fd1.foodprint();
  
  fruit *p1,*p2;
  p1=&fr1;
  p2= new fruit [2] {(0.1),(0.2)};

  p1->name="pear";
  p1->price =2.5;
  p1->print1(); p1->print2();

  p2[0].name="orange"; p2[0].print1(); p2[0].print2();
  p2[1].price = 4.2; p2[1].print1(); p2[1].print2();

  delete [] p2;
  return 0;
}
