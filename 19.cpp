#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout<<"Enter the number ";
    cin>>number;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            cout<<char('A'+i+j);
        }
        cout<<endl;
    }
    
    return 0;
}
