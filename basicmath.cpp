#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    // int n ;
    // cin>>n;
    // int count =0;
    // while (n!=0)
    // {
    //     n = n/10;
    //     count++;
        
    // }
    // cout<<count;

    // int n;
    // cin>>n;
    // int og = n;
    // int rev=0;
    // while (n!=0)
    // {
    //     int lg=n%10;
    //     cout<<"lg "<<lg<<endl;
    //     n = n/10;
    //     cout<<"number "<<n<<endl;
    //     rev = (rev*10)+lg;
    // }
    // cout<<rev<<endl;
    // if (og==rev)
    // {
    //     cout<<"p";
    // }else{
    //     cout<<"N";
    // }
    
    // int n ;
    // cin>>n;
    // int og =n;
    // int sum =0;
    // while (n!=0)
    // {
    //     int lg = n%10;
    //     sum = sum+ (lg*lg*lg);
    //     n=n/10;
    // }
    // if (sum==og)
    // {
    //     cout<<"A";
    // }else{
    //     cout<<"N";
    // }
    
    // int n;
    // cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         cout<<i<<endl;
    //     }
        
    // }
    
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            cout<<"N"<<endl;
        }else{
            cout<<"P"<<endl;
        }
        
    }
    
    
    return 0;
}
