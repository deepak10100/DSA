#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout<<"Enter the number ";
    cin>>number;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch='A'+i+j-2;
            cout<<ch;
        }
        cout<<endl;
    }
    
    return 0;
}
