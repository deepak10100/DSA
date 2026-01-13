#include<iostream>
using namespace std;
union employee
{
  int num;
  char ch;
  float salary;
};

int main(int argc, char const *argv[])
{
  union employee deep;
  deep.num=12;
  deep.ch=34;
  deep.salary=45;
  cout<<deep.salary;
  cout<<deep.ch;

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
