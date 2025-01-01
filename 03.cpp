#include <iostream>
using namespace std;

int main() {
  // Pattern -1
  
  // int n ;
  // cin>>n;
  // int i = 1;
  // while(i<=n){
  //   int j =1;
  //   while(j<=n){
  //     cout<<n-j+1;
  //     j = j+1;
  //   }
  //   i = i+1;
  //   cout<<endl;
  // }

  // Pattern -2

  // int n;
  // cin>>n;
  // int count =1;
  // int i =1 ;
  // while(i<=n){
  //   int j =1;
  //   while(j<=n){
  //     cout<<count;
  //     count = count +1;
  //     j = j+1;
  //   }
  //   cout<<endl;
  //   i = i+1;
  // }

  //Pattern -3

  // int n;
  // cin>>n;
  // int r = 1;
  // while(r<=n){
  //   int c =1;
  //   while(c<=r){
  //     cout<<r;
  //     c = c +1;
  //   }
  //   cout<<endl;
  //   r =r+1;
  // }

  //Pattern -4
  // int n;
  // cin>>n;
  // int i =1;
  // while(i<=n){
  //   int j =1;
  //   int value =i;
  //   while(j<=i){
  //     cout<<value;
  //     value = value +1;
  //     j = j+1;
  //   }
  //   cout<<endl;
  //   i = i+1;
  // }

  // int n;
  // cin>>n;

  // int i = 1;

  // while(i<=n){
  //   int j = 1;
  //   while(j<=i){
  //     cout<<i-j+1;
  //     j = j+1;
  //   }
  //   cout<<endl;
  //   i = i+1;
  // }

  // int n;
  // cin>>n;

  // int i =1;
  // while(i<=n){
  //   char ch = 'A' + i-1;
  //   int j = 1;
  //   while(j<=i){
  //     cout<<ch;
  //     j = j+1;
      
  //   }
  //   cout<<endl;
  //   i = i+1;
  // }

  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    int j =1;
    while(j<=i){
    char ch = ('A' +i+j -2);
      cout<<ch;
      j = j+1;
    }
    cout<<endl;
    i = i+1;
  }
}