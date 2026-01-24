#include <iostream>
#include<string>
using namespace std;
#include<vector>
// void cal(char op, int num1, int num2){
//     switch (op)
//     {
//     case '+':
//       cout<<num1+num2;
//       break;
//     case '-':
//       cout<<num1-num2;
//       break;
//     case '/':
//       cout<<num1/num2;
//       break;
//     case '*':
//       cout<<num1*num2;
//       break;
    
//     default:
//       cout<<'Invalide';
//       break;
//     }
// }
// string greet(){
//   return "hello world";
// }
int main(int argc, char const *argv[])
{


  string p1;
  cin>>p1;
  string p2;
  cin>>p2;
  if (p1==p2)
  {
    cout<<"draw";
  }
  
  if ((p1=="rock" && p1=="scissors")|| (p1=="rock" && p1=="paper") ||(p1=="paper" && p1=="scissors") )
  
  {
    cout<<"player 1";
  }else 
  {
    cout<<"player 2";
  }
  
 
  
  
  // greet();

  // int arrr[7]={'hay', 'junk', 'hay', 'hay', 'moreJunk', 'needle', 'randomJunk'};
  
  // vector<int>arr = {1, 2, -3, 4, 5};
  // vector<int>res;
  // for (int i = 0; i < arr.size(); i++)
  // {
  //  arr[i] *= -1;
  // //  arr[i]=arr[i]*-1;
  //       // -3   = -3 * -1;=+3
  // }
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cout<<arr[i]<<" ";
  // }
  
  
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   if (arr[i]=="needle")
  //   {
  //     return "found the needle at position " + to_string(i);
  //   }
  //   return "";
  // }
  
  
    
  
  // cout<<arr[0];
  
  // vector<int>vc={'hay', 'junk', 'hay', 'hay', 'moreJunk', 'needle', 'randomJunk'};
  // ['hay', 'junk', 'hay', 'hay', 'moreJunk', 'needle', 'randomJunk'] --> 'found the needle at position 5' 
    //  int haystack[8]={'hay', 'junk', 'hay', 'hay', 'moreJunk', 'needle', 'randomJunk'};
  // bool a = false;
  // if (a)
  // {
  //   cout<<'Yes';
  // }else
  // {
  //   cout<<'No'; 
  // }
  
  
  // cal('+',1,3);
  // string named= 'Sam Harris';
  // char first=toupper(named.at(0));
  // char second =named.at(named.find(' '));
  // cout<<first<<'.' <<second;
  return 0;
}
