#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number ";
    cin>>number;
    for (int j = 1; j <= number; j++)
    {
        char ch ='A'+j-1;
        for (int i = 1; i <= j; i++)
        {
        cout<<ch;
    }
    cout<<endl;
    }
    
    
   
    
    return 0;
}
