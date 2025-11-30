#include<iostream>
#include<vector>
using namespace std;
int fun(int n){
    if (n<=1)
    {
    
        return n;
    }
    
    
    return fun(n-1)+fun(n-2);
}
int main(int argc, char const *argv[])
{
  int n;
  cin>>n; 
  int m =fun(n);
  cout<<m;
    return 0;
}
