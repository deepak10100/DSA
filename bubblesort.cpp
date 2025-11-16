#include<iostream>
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
    for (int j = 1; j < n; j++)
    {
        for (int K = 0; K < n-j; K++)
        {
            if (arr[K]>arr[K+1])
            {
                swap(arr[K+1],arr[K]);
            }
            
        }
        
    }
    
    //print array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
