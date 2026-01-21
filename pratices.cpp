#include <iostream>
using namespace std;
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
//       cout<<"Invalide";
//       break;
//     }
// }
int main(int argc, char const *argv[])
{
  // cal('+',1,3);
  string named= "Sam Harris";
  char first=toupper(named.at(0));
  char second =named.at(named.find(" "));
  cout<<first<<"." <<second;
  return 0;
}
