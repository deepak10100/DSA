#include <iostream>
using namespace std;

int main() {
// int n;
// cin>>n;
//   cout<<"value is n: "<<n<<endl;

//   if(n>0){
//     cout<<"N is Positive";
//   }else{
//     cout<<"N is Negative";
//   }

  // int a;
  // int b;
  // cout<<"Enter the Value a: "<<endl;
  // cin>>a;
  // cout<<"Enter the Value b: "<<endl;
  // cin>>b;
  // if(a>b){
  //   cout<<"A is Greather ";
  // }
  // if(b>a){
  //   cout<<"B is Greather ";
  // }

  // int a ;
  // cin>>a;
  // if(a>0){
  //   cout<<"Positive";
  // }else if(a<0){
  //   cout<<"Negative";
  // }else{
  //   cout<<"A is Zero";
  // }

  // Step -2
  // int n;
  // cin>>n;
  // int i =0;
  // while(i<n){
  //   int j =0;
  //   while(j<n){
  //     cout<<"X";
  //     j = j+1;
  //   }
  //   cout<<endl;
  //   i = i+1;
  // }
  // Step -3

  // int n;
  // cin>>n;
  // int i =0;
  // while(i<n){
  //   int j =0;
  //   while(j<n){
  //     cout<<i;
  //     j = j+1;
  //   }
  //   cout<<endl;
  //   i = i+1;
  // }
  // Step -4

  // int n;
  // cin>>n;
  // int i =2;
  // while(i<n){
  //   if(n%i==0){
  //     cout<<"not prime"<< i<<endl;
  //   }else{
  //     cout<<"prime"<<i<<endl;
  //   }
  //   i = i+1;
  // }
  // Step -4
  int n ;
  cin>>n;
  int s = 0;
  int i =1;
  while(i<=n){
    s = s+i;
    i = i+1;
  }
  cout<<s<<endl;
  
}