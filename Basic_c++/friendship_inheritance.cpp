#include <iostream>

#define pi 3.1415

using namespace std;

class rt;
class circle;
class rt1;

class rt
{
  private:
    int width,height;
  public:
    rt(){};
    rt(int x, int y):width(x),height(y){}

    int area(){return width*height;}

    friend rt dulplicate(const rt& nrt);
 
  friend class circle;
};

rt dulplicate(const rt& nrt)
{
  rt res;
  res.width= nrt.width*2;
  res.height= nrt.height*2;

  return res;
}

class circle
{
  private:
    int r;
  public:
    circle(){};
    int area(const rt& nrt)
    {r=0.5*(nrt.width+nrt.height);
    return r*r*pi;}
};

class polygon
{
  protected:
    int width, height;
  public:
    void set(int a,int b)
    {width=a, height=b;}
};

class tri: public polygon    //if multiple inheritance, use the , to seperate the base class.
{
	public:                    // a public derived class inherits acess base class members except:
    double area()                  // constructors, operato, friends, private
    {return width*height/2.0;}
};


int main()
{
  rt foo; 
  rt bar(2,3);
  foo= dulplicate(bar);

  cout << "the area of foo is: "<< foo.area() << endl;
  
  circle c1;
  cout<< "the area of cirlce is: " << c1.area(bar) << endl;

  tri tri1;
  tri1.set(1.0,1.0);

  cout<< "the area of a triangle is: " << tri1.area() << endl;


  return 0;
}
