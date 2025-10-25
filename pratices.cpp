#include<iostream>
using namespace std;
#include<vector>
int main(int argc, char const *argv[])
{
    vector<int>v(5,7);
    v.resize(8);
    // v.assign(7,7);
    // v.insert(v.begin(),9);

for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

    // int n;
    // int sum =0;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>n;
    // v.push_back(n);
    //     sum = sum+n;
    // }
    // cout<<sum;
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    // for (auto i = v.begin(); i != v.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    
    // vector<int>v={1,2,3,4,5};
    // v.push_back(7);
    // v.pop_back();
    // v.clear();
    // cout<<v.clear<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.size()<<endl;
    // v.erase(v.begin()+3);
    // v.assign(5,7);
    // cout<<v.max_size();
    // cout<<*v.data()<<endl;
    // v.insert(v.begin()+3,99);
    // for(int n:v){
    //     cout<<n<<" ";
    // }
    return 0;
}
