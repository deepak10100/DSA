#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int a=123;
  int sum =0;
  while (a>0)
  {
    sum = sum+a%10;
    a=a/10;
  }
  cout<<sum;
  
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
