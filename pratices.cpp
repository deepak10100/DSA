#include<iostream>
using namespace std;
void print1(int n){
    int count=1;
    for (int i = 1; i <= n; i++)
    {
        char ch='A'+i-1;
        for (int j = 1; j <= i; j++)
        {
        cout<<ch;
       }
       
       
        
        cout<<endl;
    }
    
    
}



int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    print1(n);
    return 0;
}
