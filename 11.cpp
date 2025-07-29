#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    int count=1;
    cout<<"Enter the number: ";
    cin>>number;
    int i = 1;
    while (i<=number)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<count;
            count++;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    
    return 0;
}
