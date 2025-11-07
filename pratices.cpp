#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<unordered_map>
#include<algorithm>
// #include<queue>;
#include<map>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    bool bollen = true;
    if (n<=1)
    {
        bollen= false;
        return 0;
    }
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            bollen=false;
            break;
        }        
    }
    if (bollen)
    {
        cout<<"prime";
    }else{
        cout<<"Not prime";
    }
    
    
    
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         cout<<i<<" ";
    //     }
        
    // }
    
    // int og=n;
    // int cp=n;
    // int cnt=0;
    // while (n>0)
    // {
    //     n=n/10;
    //     cnt=cnt+1;
    // }
    
    // cout<<cnt<<endl;
    // int sum =0;
    // while (og>0)
    // {
    //     int lg=og%10;
    //     sum =sum+ round(pow(lg,cnt));
    //     og =og/10;
    // }
    // cout<<sum;
    // if (sum==cp)
    // {
    //     cout<<"arm";
    // }else{
    //     cout<<"Not";
    // }
    
    
    // int n=123;
    // int og = n;
    // int r=0;
    // while (n>0)
    // {
    //     int lg=n%10;
    //     n=n/10;
    //     r=(r*10)+lg;
    // }
    // // cout<<r;
    // if(og==r){
    //     cout<<"Palidrome";
    // }else{
    //     cout<<"Not palidrom";
    // }
    // cout<<r;
    
    // int vc=12345;
    // int count=0;
    // while (vc>0)
    // {
    //     vc = vc/10;
    //     count=count+1;
    // }
    // cout<<count;
    // int a = 10;
    // int b = 1;
    // int c = b/a;
    // cout<<c;
    
    // vector<int>vc={1,3,2,4};
    // sort(vc.begin(),vc.end());
    // cout<<count(vc.begin(),vc.end());
    // if (binary_search(vc.begin(),vc.end(),3))
    // {
    //     cout<<"found";
    // }
    
    // for(auto it:vc){
    //     cout<<it<<" ";
    // }
    // queue<int>q;
    
    // stack<int>st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // cout<<st.size();
    // deque<int>dq;
    // pair<int,pair<int,int>>p={2,{1,3}};
    // cout<<p.second.first;
    
    // list<int>ls;
    // ls.push_back(1);
    // ls.push_back(2);
    // ls.push_back(3);
    // ls.push_back(5);
    // ls.push_back(6);
    // ls.push_front(100);
    // ls.insert(ls.begin(),3);
    // ls.reverse();
    // for(int it:ls){
    //     cout<<it<<" ";
    // }
    // vector<int>vc;
    // vc.push_back(1);
    // vc.push_back(2);
    // vc.push_back(3);
    // vc.push_back(4);
    // vc.push_back(5);
    // vc.push_back(6);
    // vc.pop_back();
    // cout<<vc.at(2)<<endl;
    // vc.resize(12);
    // vc.assign(7,1);
    // vc.max_size();
    // vc.insert(vc.begin()+2,9);
//    for (auto i = vc.rbegin(); i != vc.rend(); i++)
//    {
//     cout<<*i<<" ";
//    }
//    for(auto it:vc)
//    {
//     cout<<it<<" ";
//    }

// vector<int>v;
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     int x;
//     cin>>x;
//    v.push_back(x); 
// }
// for(auto it:v){
//     cout<<it<<" ";
// }


    
    return 0;
}
