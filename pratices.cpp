#include <iostream>
#include<math.h>
using namespace std;
void print1(int n)
{
    int orgn=n;
    int cnt = 0;
    while (n > 0)
    {
        n = n / 10;
        cnt++;
    }
    cout<<cnt;
    int num=0;
    while (orgn>0)
    {
        orgn=orgn%10;
         num += pow(cnt,orgn);
    }
    cout<<num;
}

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter the Number: ";
    cin >> n;
    print1(n);
    return 0;
}
