#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int og = n;
    int rev = 0;
    while (n!=0)
    {
        int lg = n%10;
        n = n/10;
        rev=(rev*10)+lg;
    }
    cout<<rev;
    if (rev==og)
    {
        cout<<"p";
    }else{
        cout<<"N";
    }
    
    return 0;
}
