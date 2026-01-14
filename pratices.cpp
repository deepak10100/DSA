#include<iostream>
using namespace std;
// union employee
// {
//   int num;
//   char ch;
//   float salary;
// };
// void swap(int *a, int *b){
//   int temp =*a;
//   *b = *a;
//   *b=temp;
// }
// void swap(int &a, int &b){
//   int temp = a;
//   a = b;
//   b=temp;
// }
// int sum(int a, int b=7){
//   return a+b;
// }
int fac(int n){
  if (n<2)
  {
    return 1;
  }
  return fac(n-2)+fac(n-1);
}
int main(int argc, char const *argv[])
{
  cout<<fac(5);
  // cout<<sum(8);
  // int x =4;
  // int y=7;
  // swap(x,y);
  // cout<<x<<" "<<y;
  // union employee deep;
  // deep.num=12;
  // deep.ch=34;
  // deep.salary=45;
  // cout<<deep.salary;
  // cout<<deep.ch;

//   int marks[] = {23, 45, 56, 89};
//   int *ptr = marks;
//  cout<<*(ptr+2);
  // int a = 5;
  // int *ptr = &a;
  // cout<<*ptr;
  // int a=5;
  // int b =7;
  // cout<<++a;
  // cout<<--a;
  // cout<<a++;
  // cout<<a--;
  // cout<<a;
  // int a=123;
  // int sum =0;
  // while (a>0)
  // {
  //   sum = sum+a%10;
  //   a=a/10;
  // }
  // cout<<sum;
  
//   int rev=0;
// //  int cnt=0;
//  while (a>0)
//  {
//   rev = rev*10+a%10;
//   a=a/10;
//   // cnt=cnt+1;
//  }
//  cout<<rev;
  
  return 0;
}
