#include<iostream>
#include<string>

using namespace std;

class cvector
{
  public:
    int x,y;
    cvector(){};
    cvector(const int &a, const int &b):x(a),y(b){}
    cvector operator + (const cvector&);
    void operator = (const cvector& v)
    {
      x= v.x; y =v.y;
    }
    
    void print()const
    {cout << "the vector is: " << x << ' ' << y << endl;}
    int& get()   //  return the address of x, thus the value of x can be edited by .get()
    {return x;}
      
    const int& doublevalue()const  // new variables in const member can be changed.
    {int a(0); a *=2;
      return x;}

    //only four matches: 1.fun()const 2.int& fun() 3.const int& fun() 4. const int& fun()const
};

cvector cvector::operator + (const cvector& v)
{
  cvector r;
  r.x= x+v.x; r.y=y+v.y;
  return r;
}

cvector operator - (const cvector& leftv, const cvector& rightv)
{ 
  cvector r;
  r.x=leftv.x-rightv.x; r.y =leftv.y-rightv.y;
  return r;
}

template <class T>
class mypair
{
  T a,b;
  public:
    mypair(T first, T second)
    {a=first; b=second;}
    T getmax();
};

template <class T>
T mypair<T>::getmax()
{
  T retval;
  retval =a >b ? a:b;
  return retval;
}

template <>    // template specialization
class mypair<string>
{
  string a;
  public:
    mypair(const string& str):a(str){}
    void print()
    {cout << a << endl;}
};


int main()
{
  cvector cv1(1,2);
  cvector cv2(2,3);
  cvector cv3;
  cvector cv4;   

  cvector *p;
  p = new cvector [2];
  p[0] = cv1; p[1] = cv2;

  cv3=p[1] - p[0];
  cv3=operator-(p[1],p[0]);  //identical to p[1]-p[0]
  cv4=cv1 + cv2;

  cout << "the cv2-cv1: " <<cv3.x << ' ' << cv3.y << endl;  
  cout << "the cv1+cv2: " <<cv4.x << ' ' <<  cv4.y << endl;
  
  cout << "p[0] is:" << p[0].x << ' ' << p[0].y << endl;

  cvector cv5(3,4);
  cv5.print();
  cout << "the x part of cv5 is: "<< cv5.get() << endl;

  const cvector cv6(1,1);
  cout << "the x part of cv6 is: "<< cv6.doublevalue() << endl;

  mypair <int> myobject(100,75);
  cout << myobject.getmax() << endl;

  string str1("Good test!");
  mypair<string> myobject2(str1);
  myobject2.print();

  delete [] p;
  return 0;
}
