// #include<iostream>
// using namespace std;
// class Shop{
//     int itemid[100];
//     int price[100];
//     int counter;
//   public:
//     void initCounter(){
//       counter=0;
//     }
//     void setItem();
//     void displayItems();

// };
// void Shop::setItem(){
//   cout<<"Enter the Id ";
//   cin>>itemid[counter];
//   cout<<"Enter the Price ";
//   cin>>price[counter];
//   counter++;

// }
// void Shop::displayItems(){
//   for (int i = 0; i < counter; i++)
//   {
//     cout<<"Your Product Id: "<<itemid[i]<<" Your Product Price "<<price[i]<<endl;
//   }

// }
// int main(int argc, char const *argv[])
// {
//   Shop dukkan;
//   dukkan.initCounter();
//   dukkan.setItem();
//   dukkan.setItem();
//   dukkan.setItem();
//   dukkan.displayItems();
//   return 0;
// }

#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;
  public : 
    void setId()
      {
        cout << "Enter the Id ";
        cin >> id;
      }
    void printData(){
      cout<<"Id is "<<id;
    }
};
int main(int argc, char const *argv[])
{
  Employee fb[4];
  for (int i = 0; i < 4; i++)
  {
    fb[i].setId();
    fb[i].printData();
  }
  
  return 0;
}
