// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//      int n;
//      cout<<"Enter the number "<<endl;
//      cin>>n;
//      int arr[n];
//      for (int i = 0; i < n; i++)
//      {
//           cout<<"Enter the value inside Array "<<endl;
//           cin>>arr[i];
//      }
     
//      int hash[13]={0};
//      for (int i = 0; i < n; i++)
//      {
//          hash[arr[i]]+=1;
//      }
//      int q;
//      cout<<"Enter the queries "<<endl;
//      cin>>q;
//      while (q--)
//      {
//           int number;
//           cout<<"Enter the number: "<<endl;
//           cin>>number;
//           cout<<hash[number]<<"-";
//      }
//      return 0;
// }


#include<iostream>
using namespace std;
#include<map>
int main(int argc, char const *argv[])
{
     int n;
     cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin>>arr[i];
     }
     map<int,int>mpp;
     for (int i = 0; i < n; i++)
     {
          mpp[arr[i]]++;
     }
     for(auto it:mpp){
          if (it.second>it.first)
          {
               cout<<"hight is: "<<it.second<<endl;
          }
          cout<<it.first<<"-"<<it.second<<endl;
          
     }
     int q;
     cin>>q;
     while (q--)
     {
          int number;
          cin>>number;
          cout<<mpp[number]<<endl;
     }
     return 0;
}
