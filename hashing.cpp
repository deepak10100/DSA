#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter the N: ";
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
        cin>>arr[i];
   }
   int hash[13]={0};
   for (int i = 0; i < n; i++)
   {
        hash[arr[i]];
   }
   int q;
   cout<<"Enter the Q: ";
   cin>>q;
   while (q--)
   {
    int number;
    cout<<"Enter the number "<<endl;
    cin>>number;
    cout<<"number is "<<hash[number];
   }
   
   
   
   
    return 0;
}
