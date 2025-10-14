#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int og =n;
    int rev=0;
    int count=0;
    while (n!=0)
    {
        int lg = n%10;
        n=n/10;
        rev = (rev*10)+lg;
        count++;
    }
    cout<<rev<<endl;
    if (rev==og)
    {
        cout<<"pr";
    }else{
        cout<<"Not pr";
    }
    

    // int n;
    // cin>>n;
    // int count=0;
    // while (n!=0)
    // {
    //     n=n/10;
    //     count++;
    // }
    // cout<<count;
    return 0;
}
