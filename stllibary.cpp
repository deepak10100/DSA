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
//     map<string,int>personal={{"Deepak",12},{"aman",15},{"deep",23}};
//    for(auto str:personal){
//     cout<<str.first <<" "<<str.second<<" ";

//    }

vector<int>cars={1,2,10,3,4,7,6};
// sort(cars.begin(),cars.end());
auto it = find(cars.begin(), cars.end(),3);

if (it!=cars.end())
{
    cout<<"found";
}else{
    cout<<"not found";
}

   
//    set<string> cars ={"Lambo","Bmw","RR","Porche"} ;
// set<int>number={1,2,3,4,5,6,7};
// number.clear();
//    car.push_back("Deepak");
//    car.push_back("Deepak");
//    car.push_back("Deepak");
//    car.push_back("Deepak");
   
//    car.back()="Deepak";
//    car.push_back("Depl");
//    car.push_front("De");  
//    car.pop_back();
//    cout<<car.size()<<endl;
//    for(string str:car){
//     cout<<str<<endl;
//    }
    
    
    return 0;
}
