#include<iostream>
using namespace std;
void printStart(int n){
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        cout<<" ";
      }
      for (int k = 0; k < 2*n -(2*i+1); k++)
      {
        cout<<"*";
      }
      for (int j = 0; j <i; j++)
      {
        cout<<" ";
      }
      cout<<endl;
        
    }
    
}
void printStart1(int n){
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n-i-1; j++)
      {
        cout<<" ";
      }
      for (int k = 0; k < 2*i+1; k++)
      {
        cout<<"*";
      }
      for (int j = 0; j < n-i-1; j++)
      {
        cout<<" ";
      }
      cout<<endl;
        
    }
    
}
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
    printStart(n);
    return 0;
}
