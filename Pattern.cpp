#include<iostream>
using namespace std;
// void printStart(int n){
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < i; j++)
//       {
//         cout<<" ";
//       }
//       for (int k = 0; k < 2*n -(2*i+1); k++)
//       {
//         cout<<"*";
//       }
//       for (int j = 0; j <i; j++)
//       {
//         cout<<" ";
//       }
//       cout<<endl;
        
//     }
    
// }
// void printStart1(int n){
//   int count=1;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout<<count;
//       count++;
//     }
//     cout<<endl;
//   }
  
   
// }
// void printStart1(int n){
//   char count='A';
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout<<count;
//       count++;
//     }
//     cout<<endl;
//   }
// }
void printStart1(int n){
  for (int i = 0; i <= n; i++)
  {
    char count='A' +i;
    for (int j = 0; j <= i; j++)
    {
      cout<<count;
      // count++;
    }
    cout<<endl;
  }
  
}
// void printStart1(int n){
//   for (int i = 1; i <= n; i++)
//   {
//     char count='A';
//     for (int j = 1; j <= n-i+1; j++)
//     {
//       cout<<count;
//       count++;
//     }
//     cout<<endl;
//   }
  
// }
// void printStart1(int n){
//   for (int i = 1; i <= n; i++)
//   {
//     char count='A';
//     for (int j = 1; j <= i; j++)
//     {
//       cout<<count;
//       count++;
//     }
//     cout<<endl;
//   }
  
   
// }
// void printStart1(int n){
//   int space = 2*(n-1);
//   for (int i = 1; i <=n; i++)
//   {
//     for (int j = 1; j <=i; j++)
//     {
//       cout<<j;
//     }
//     for (int j = 1; j <= space; j++)
//     {
//       cout<<" ";
//     }
//     for (int j = i; j >=1; j--)
//     {
//       cout<<j;
//     }
//     cout<<endl;
//     space -=2;
    
    
    
//   }
  
    
   
// }
// void printStart1(int n){
//    int sart =1;
//    for (int i = 0; i < n; i++)
//    {
//     if (i%2 ==0)
//     {
//       sart =1;
//     }
//     else{
//       sart=0;
//     }
//     for (int j = 0; j <=i; j++)
//     {
//       cout<<sart;
//       sart=1-sart;
//     }
//     cout<<endl;
    
//    } 
// }
// void printStart(int n){
//     for (int i = 1; i <= n; i++)
//     {
//       for (int j = 1; j <= n-i+1; j++)
//       {
//         cout<<j;
//       }
//         cout<<endl;
//     }
    
// }
// void printStart(int n){
//     for (int i = 1; i <= n; i++)
//     {
//       for (int j = 1; j <= n-i+1; j++)
//       {
//         cout<<"*";
//       }
//         cout<<endl;
//     }
    
// }
// void printStart(int n){
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < i; j++)
//       {
//         cout<<"*";
//       }
//         cout<<endl;
//     }
    
// }
// void printStart(int n){
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < n; j++)
//       {
//         cout<<"*";
//       }
//         cout<<endl;
//     }
    
// }
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    printStart1(n);
    // printStart(n);
    return 0;
}
