#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
  string food = "Pizza";
  string *meat = &food;
  *meat="Number";
  // meat = "Burger";
  cout<<*meat;
  // cout<<meat;
  // string letter[2][4]={
  //   {"A","B","c","D"},
  //   {"E","F","G","H"}
  // };
  // for (int i = 0; i < 2; i++)
  // {
  //   for (int j = 0; j < 4; j++)
  //   {
  //     cout<<letter[i][j]<<endl;
  //   }
    
  // }
  
  // vector<string>st;
  // st.push_back("Deep");
  // st.push_back("Deep1");
  // cout<<st.size();
//  string cars[4]={"De","D","m","y"};
//  for(auto in:st){
//   cout<<in<<" ";
//  }
//  for (int i = 0; i < 4; i++)
//  {
//   cout<<cars[i]<<" ";
//  }
 

  
  return 0;
}
