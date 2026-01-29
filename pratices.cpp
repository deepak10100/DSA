#include<iostream>
#include<vector>

using namespace std;
int main(int argc, char const *argv[])
{
  // vector<string>str="Deepakmalakar";
  // string str="Deepak malakar";
  // vector<string>res;
  // string word ="";
  // for (int i = 0; i < str.size(); i++)
  // {
  //   if (str[i]==' ')
  //   {
  //     res.push_back(word);
  //     word="";
  //   }
  //   else
  //   {
  //     word=word+str[i];
  //   } 
  // }

  // res.push_back(word);
  // for (int i = 0; i < res.size(); i++)
  // {
  //   cout<<res[i]<<endl;
  // }
  
  // string str ="Hello World!";

  // string res="";
  // for (int i = 0; i < str.size(); i++)
  // {
  //   if (str[i]!='!')
  //   {
  //      res+=str[i];
  //   }
  
  //   // cout<<str[i]<<" ";
  // }
  // cout<<res;
  
  
  
  // vector<pair<int, int>> data={{18, 20},{45, 2},{61, 12},{37, 6},{21, 21},{78, 9}};
  // vector<string>res;
  // for (int i = 0; i < data.size(); i++)
  // {
  //   int age =data[i].first;
  //   int handicap =data[i].second;
  //   if (age >=55 && handicap >7)
  //   {
  //     res.push_back("Senior");
  //   }else{
  //     res.push_back("Open");
  //   }
  // }
  // return res;
  

  // int number=4;
  // if (number%2==0)
  // {
  //   return number*8;
  // }
  // else{
  //   return number*9;
  // }
  // int repeat=5;
  // string str;
  // string res="";
  // for (int i = 0; i < repeat; i++)
  // {
  //   res+= str;
  // }
  // return res;
  
  // int num=-1;
  // if (num)
  // {
  //   cout<<-num;
  // }
  // else
  // {
  //   cout<<num;
  // }
  
  
  // string str ="deepak";
  // cout<<str.substr(1,str.length()-1);
  // vector<int>arr={0, 4,4,5};
  // // int arr[3]={1,3,4};
  // int sum=0;
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   sum=sum+arr[i];
  // }
  
  // return sum;
  // if (sum%2==0)
  // {
  //   return "even";
  // }else{
  //   return "odd";
  // }
  
  
// int num_vowels=0;
// string inputStr="deepeek";
// for (int i = 0; i < inputStr.size(); i++)
// {
//   if (inputStr[i]=='a' || inputStr[i]=='e' || inputStr[i]=='i' || inputStr[i]=='o' ||inputStr[i]=='u')
//   {
//       num_vowels++;
//   }
  
// }
// return num_vowels;

string nameds="ooxx";
int countx=0;
int counto=0;
for (int i = 0; i < nameds.length(); i++)
{
  if (nameds[i]=='x')
  {
    countx++;
  }else if (nameds[i]=='o')
  {
    counto++;
  }
   
}
if (counto==countx)
{
  return true;
}else
{
  return false;
}



  return 0;
}
