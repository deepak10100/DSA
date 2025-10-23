#include <iostream>
using namespace std;
void f(int arr[], int l, int r){
    if (l>=r)
    {
        return;
    }
    swap(arr[l],arr[r]);
    f(arr, l+1, r-1);
    
}
int main(int argc, char const *argv[])
{
    int n=5;
    int arr[n]={1,2,3,4,5};

    f(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    

    return 0;
}
