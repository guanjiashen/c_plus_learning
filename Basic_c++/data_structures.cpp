#include <iostream>
#include <string>

using namespace std;

struct fruit
{
  string name;

  double price;
};

void double_price (fruit* po)
{
  po->price=2 * (po->price);
}


int main()
{
  fruit fr1;
  fr1.name = "apple";
  fr1.price = 3.6;

  fruit *p = &fr1;
 
  cout << "the price of " << fr1.name << " is " << p->price << endl;

  double_price(&fr1);

  cout << "now the price of " << fr1.name << " is " << p->price << endl;

  return 0;
}
