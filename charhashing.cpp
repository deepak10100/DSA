#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string n;
    cin>>n;
    int hash[256]={0};
    for (int i = 0; i < n.size(); i++)
    {
        hash[n[i]]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        cout<<hash[c];
    }
    
    
    return 0;
}
