#include<iostream>
using namespace std;
void printStart(int n){
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        cout<<"*";
      }
        cout<<endl;
    }
    
}
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
    printStart(n);
    return 0;
}
