#include<iostream>
using namespace std;
// int cnt;
// void func(){
//     if (cnt==3)
//     {
//         return;
//     }
    
//     cout<<cnt;
//     cnt++;
//     func();
// }
void func1(int i,int n){
    if (i>n)
    {
        return;
    }
    cout<<"DEepak"<<endl;
    func1(i+1,n);
}

void func2(int i, int n){
    if (i>n)
    {
        return;
    }
    cout<<i<<" ";
    func2(i+1,n);
    
}
void func3(int i, int n){
    if (i<1)
    {
        return;
    }
    cout<<i<<" ";
    func3(i-1,n);
    
}
void func4(int i,int sum){
        if (i<1)
        {
            cout<<sum;
            return;
        }
        func4(i-1,sum+i);     
}
int func5(int i){
    if (i==1)
    {
        return 1;
    }
    
    return i*func5(i-1);
}
void func6(int arr[],int l, int r){
    if (l>=r)
    {
        return;
    }
    swap(arr[l],arr[r]);
    func6(arr, l+1,r-1);
}
void func7(string n , int i){
   if (i<0)
   {
    return;
   }
   cout<<n[i];
   func7(n,i-1);
}
int func8(int n){
    if (n==1)
    {
        return 1;
    }
    if (n==0)
    {
        return 0;
    }
    return (func8(n-1)+ func8(n-2));
    
    
}
int main(int argc, char const *argv[])
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        cout<<func8(i);
    }
    
//    string n="Deepak";
//    func7(n, n.size()-1);
    // int arr[]={1,2,3,4,5};
    // int n=5;
    // func6(arr, 0,n-1);
   
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // func1(1,n);
    // int d = ;
    // cout<<func5(n);
    // func4(n,0);
    // func3(n,n);
    // func2(1,n);
    return 0;
}
