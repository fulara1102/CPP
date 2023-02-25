/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

#include <iostream>

using namespace std;

int main()
{
  int quantity,price;
  float q;
  cout<<"Enter the quantity"<<endl;
  cin>>quantity;
  price = 100*quantity;


  if (price>1000)
  {
  cout<<"Total price is :"<<price<<endl;
  q = (price*.1);
  cout<<"Discount is :"<<q<<endl;
  cout<<"Overall price is :"<<price-(price*.1)<<endl;
  }

  else
  cout<<"Total price is :"<<price<<endl;

  return 0;
}
