#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    int i = 1;
    while (i<=number)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<i+j-1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    
    return 0;
}
