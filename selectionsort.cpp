#include<bits/stdc++.h>
using namespace std;
void section_sort(int arr[], int n){
    for (int i = 0; i <= n-2; i++)
    {
        int mm=i;
        for (int j = i; j <= n-1; j++)
        {
            if (arr[j]<arr[mm])
            {
                mm=j;
            }
        }
        int temp = arr[mm];
        arr[mm]=arr[i];
        arr[i]=temp;
        
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    section_sort(arr,n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
