#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int>v={1,2,3,10,4,9,5,6};
    list<string>cars={"Car1","cAr2","Car3"};
    stack<int>s;
    queue<int>q;
    deque<int>dq={5,6,7,8,8,9,10};
    set<int>st={1,2,3,4,5};
    map<int,string>mp={{1,"Deepak"},{2,"Aman"},{3,"Prachi"}};
    
    // sort(v.begin()+3,v.end());
// auto it = find(v.begin(),v.end(),6);
// if (it!=v.end())
// {
//     cout<<"found";
// }else{
//     cout<<"Not";
// }

    // sort(v.begin(),v.end());
    // sort(v.rbegin(),v.rend());
    // for(auto it:v){
    //     cout<<it<<endl;
    // }
    // mp.insert({4,"deep"});
    // auto it = v.begin()+2;
    // cout<<*it;
    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    
    // st.insert(8);
    // st.erase(2);
//    for (auto i = st.begin(); i != st.end(); i++)
//    {
//     cout<<*i;
//    }   
    // for(auto it : st){
    //     cout<<it;
    // }
    // dq.push_back(12);
    // dq.push_front(22);
    // for(auto it:dq){
    //     cout<<it;
    // }
//    for (auto i = dq.begin(); i != dq.end(); i++)
//    {
//     cout<<*i;
//    }
        // for (int i = 0; i < dq.size(); i++)
        // {
        //     cout<<dq[i];
        // }
        
   
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // cout<<q.size();
    
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
   
    // s.pop();
    // cout<<s.top();
    // cout<<"size: "<<s.size();
    
    

    // ls.push_back(3);
    // ls.push_front(4);
    // ls.pop_back();
    // ls.pop_front();
    // cout<<ls.empty();
    // for (int i = 0; i < cars.size(); i++)
    // {
    //     cout<<cars[i]<<endl;
    // }
    
    // cout<<ls.size();
    // for(auto it:ls){
    //     cout<<it;
    // }
    // for (auto i = ls.begin(); i != ls.end(); i++)
    // {
    //     cout<<*i;
    // }
    // cout<<v[3];
    // cout<<ls.back();
    // cout<<ls.front();
    
    // v.at(2)=8;
    // v.push_back(8);
    // v.push_back(110);
    // v.push_back(112);
    // v.pop_back();
    // cout<<v.empty();
    // cout<<v.size();
    
    // cout<<v.back();
    // cout<<v.front();
    // for(int it: v){
    //     cout<<it<<endl;
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i];
    // }
    // for (auto i = v.begin(); i < v.end(); i++)
    // {
    //     cout<<*i;
    // }
    
    // map<int,string>mp={{1,"Deepak"},{2,"deep"},{3,"dpk"}};
    // cout<<mp[2];
    // auto it = mp.find(6);
    // if (it != mp.end())
    // {
    //     cout<<"found";
    // }else{
    //     cout<<"not found";
    // }
    
    // mp.insert({4,"Deepk"});
    // mp.erase(3);
    // for(auto p:mp){
    //     cout<<p.first<<"=>"<<p.second<<endl;
    // }
    // vector<int>v={1,2,3,4};
    // v.erase(v.begin()+2);
    // cout<<v.size();
    // v.capacity();
    // v.pop_back();
    // vector<int>v(10,7);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // cout<<v.size()<<endl;
    // cout<<v.clear();
    // cout<<v.empty();
    // v.insert(v.begin(),5);
    // cout<<v.at(0);
    // cout<<v.back();
    // cout<<v.front();
//    for (auto i = 0; i < v.size(); i++)
//    {
//     cout<<v[i]<<endl;
//    }
//    for(auto i:v){
//     cout<<i<<endl;  
//    }
// for (auto i = v.begin(); i != v.end(); i++)
// {
//     cout<<*i;
// }
// vector<int>marks;
// int n,mark;
// cout<<"Enter the number " <<endl;
// cin>>n;
// for (int i = 1; i <=n; i++)
// {
//    cout<<"Enter the Marks: "<<endl;
//    cin>>mark;
//    marks.push_back(mark);
// }

// cout<<"Your Marks: "<<endl;
// for(auto m:marks){
//     cout<<m<<" ";
// }

// cout<<"Highest marks: "<<*max_element(marks.begin(),marks.end());

// map<int,int>marks;
// int n,mark,roll;
// cout<<"Enter the number ";
// cin>>n;
// for (int i = 1; i <=n; i++)
// {
//     cout<<"Enter the Roll No and Marks ";
//     cin>>mark>>roll;
//     marks.insert({roll,mark});
// }

// for(auto it:marks){
//     cout<<"Roll: "<<it.first<<"=>"<<it.second<<endl;
// }
// cout<<"Enter the roll Number ";
// cin>>roll;
// auto it = marks.find(roll);
// if (it != marks.end())
// {
//     cout<<"Found "<<it->second;
// }else{
//     cout<<"Not found";
// }

// vector<int>v={1,4,3,2,5};
// int key = 8;
// auto it = find(v.begin(),v.end(),key);
// int it =count(v.begin(),v.end(),2);
// reverse(v.begin(),v.end());
// for(auto it :v){
//     cout<<it;
// }
// if (it != v.end())
// {
//     cout<<"found";
// }else{
//     cout<<"Not found";
// }

// sort(v.rbegin(),v.rend());
// for(auto it:v){
//     cout<<it;
// }
// for (auto it = v.rbegin(); it != v.rend(); it++)
// {
//     cout<<*it<<endl;
// }

// for(auto it:v){
//     cout<<it;
// }

    return 0;
}
