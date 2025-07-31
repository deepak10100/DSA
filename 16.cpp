#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number ";
    cin>>number;
    int i =1;
    char ch = 'A';
    while (i<=number)
    {
        int j =1;
        while (j<=number)
       {
        cout<<ch;
        ch++;
        j=j+1;
       }
       cout<<endl;
       i=i+1;
    }
    
    return 0;
}
