#include<iostream>
#include<vector>
using namespace std;
class Employee{
private:
  string name;
  float salary;
public:
  Employee(string name, float salary){
    this->name=name;
    this->salary=salary;
  }
  string getName(){return name;}
  float getSalary(){return salary;}

  void setName(string name){this->name=name;}
  void setSalary(float salary){this->salary=salary;}

  void displayDetails(){
    cout<<"Employee "<<name<<endl;
    cout<<"Salary "<<salary<<endl;
  }

};
// void hello(){
//   cout<<"Deepak";
// }
// int square(int x){
//   return x*x;
// }
// int add(int a, int b){
//   return a+b;
// }
int main(int argc, char const *argv[])
{
  Employee emp("Geek",100.0f);
  emp.displayDetails();
//  int x =10;
//  int &add=x;
//  cout<<"the value : "<<&x<<endl;
//  cout<<"add : "<<&add<<endl;
//  cout<<"value: "<<add<<endl;

  // int arr[4]={1,2,3,4};
  // cout<<arr[3];
  // for (int i = 0; i < 4; i++)
  // {
  //   cout<<arr[i]<<endl;
  // }
  
  // int result = add(1,2);
// hello();
// int result = square(5);
// cout<<result;
  // string food = "Pizza";
  // string *meat = &food;
  // *meat="Number";
  // meat = "Burger";
  // cout<<*meat;
  // cout<<meat;
  // string letter[2][4]={
  //   {"A","B","c","D"},
  //   {"E","F","G","H"}
  // };
  // for (int i = 0; i < 2; i++)
  // {
  //   for (int j = 0; j < 4; j++)
  //   {
  //     cout<<letter[i][j]<<endl;
  //   }
    
  // }
  
  // vector<string>st;
  // st.push_back("Deep");
  // st.push_back("Deep1");
  // cout<<st.size();
//  string cars[4]={"De","D","m","y"};
//  for(auto in:st){
//   cout<<in<<" ";
//  }
//  for (int i = 0; i < 4; i++)
//  {
//   cout<<cars[i]<<" ";
//  }
 
// cout<<"Deepak";
// int num=1;
// int num2=23;
// // cout<<"Enter the number ";
// swap(num,num2);
// cout<<"Enter number is num2 " <<num <<endl;

// cout<<"You Entered number is "<<num;
  return 0;
}
