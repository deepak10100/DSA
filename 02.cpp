#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int sum = 0;
    int i =1;
    while (i<=a)
    {
     sum = sum+i;
      i=i+1;
    }
    cout<<sum <<endl;
    
    return 0;
}
