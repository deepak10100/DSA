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

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
   
    
    // func1(1,n);
    // int d = ;
    cout<<func5(n);
    // func4(n,0);
    // func3(n,n);
    // func2(1,n);
    return 0;
}
