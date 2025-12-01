#include<iostream>
#include<map>
using namespace std;
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
        mpp[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<mpp[number];
    }
    
    

    
    
    
    
    return 0;
}
