#include <iostream>

using namespace std;

class polygon          // polygon is a abstract class because of pure vitrual=0; thus polygon polygon1 will not be
{                     //valid,except a pointer and can obly be inheritated. 
  protected:
    int width, height;
  public:
    void set(int a, int b)
    {width=a, height=b;}
    virtual int area()=0;   //the print function can be redifined in derived class, 
                            //and can be assess form pointer
    void print()
    {cout << "the area is: "<< this -> area() << endl;}
};

class rect:public polygon
{
  public: 
    int area()
    {return width*height;}
    void print2()
    {cout << "this is only function of rect" << endl;}
};

int main()
{
  rect rect1;
  polygon *p ;

  p=&rect1;
  p->set(1,2);   
  rect1.print2();        // p->print2() will not be valid
  p->print();            // bcause p is type of polygon, function area is only difiend in rect.
					 
  return 0;
}
