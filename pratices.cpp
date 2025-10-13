#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch ='E'-i+1;
        for (int j = 1; j <= i; j++)
        {
        cout<<ch;
        ch++;
       }
       
       
        cout << endl;
    }

    return 0;
}
