#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
 vector<int>x;
 vector<int>y;
 vector<int>result;
//  int z;
  for (int i = 1; i <= 5; i++)
  {

    result.push_back(i*x);
  } 
  return result;
  
  // string str = "This is an example!";
  // string word="";
  // string res="";
  // reverse(word.begin(),word.end());
  // res+=word;
  // cout<<word;

  
  
  // string num="123";
  // cout<<stoi(num);
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

// string nameds="ooxx";
// int arr[]={1,2,3,4,5,6,7,8,9,10,-11,-12,-13,-14,-15};
// int count=0;
// int sumneg=0;
// for (int i = 0; i < 15; i++)
// {
//   if (input[i]>0)
//   {
//     count++;
//   }else if(input[i]<0)
//   {
//     sumneg+=input[i];
//   }
  
  
// }
// cout<<"cout "<<count<<endl;
// cout<<"sum "<<sumneg<<endl;

// int counto=0;
// for (int i = 0; i < nameds.length(); i++)
// {
//   if (nameds[i]=='x')
//   {
//     countx++;
//   }else if (nameds[i]=='o')
//   {
//     counto++;
//   }
   
// }
// if (counto==countx)
// {
//   return true;
// }else
// {
//   return false;
// }

// string nameed="d  ee p a k";
// string res="";
// for (int i = 0; i < nameed.length(); i++)
// {
//   if (nameed[i]!=' ')
//   {
//     res+=nameed[i];
//   }
  
// }
// cout<<res;

// string named="ATTGC";
// string res="";
// int flower1=2;
// int flower2 = 4;
// if (flower1%2 == 0 && flower2%2 ==0)
// {
//   cout<<"false" <<flower1 <<flower2;
// }else{
//   cout<<"true";
// }

// for (int i = 0; i < named.length(); i++)
// {
//   // cout<<named[i]<<" ";
//   if (named[i]=='A')
//   {
//      res+='T';
//   }else if (named[i]=='G')
//   {
//     res+='C';
//   } else if (named[i]=='T')
//   {
//     res+='A';
//   }else if (named[i]=='C')
//   {
//     res+='G';
//   }

// }
// return res;

  return 0;
}
