#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number ";
    cin>>number;
    int i =0;
    while (i<number)
    {
        int j =0;
        while (j<number)
        {
        char ch ='A' + i + j;
        cout<<ch;
        j=j+1;
       }
       cout<<endl;
       i=i+1;
    }
    
    return 0;
}
