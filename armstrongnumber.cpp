#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int og=n;
    int tem=og;
    int count=0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    int sum =0;
    // cout<<count;
    while (og!=0)
    {
        int lg = og%10;
        og=og/10;
        sum =sum+ pow(lg,count);
    }
    cout<<sum<<endl;
    if (tem==sum)
    {
        cout<<'A';
    }else{
        cout<<"N";
    }
    
    
    return 0;
}
