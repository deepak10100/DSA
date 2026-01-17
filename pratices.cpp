#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  string str;
  
  cout<<"Enter the str ";
    cin>>str;
  for (int i = 0; i < str.length(); i++)
  {
     if (str[i]<'5')
  {
    str[i]='0';
  }else
  {
    str[i]='1';
  }
}
cout<<str;
  
  
  return 0;
}
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int sum =0;
//   int strs[3]={1,2,2};
//   for (int i = 0; i < 3; i++)
//   {
//     sum=sum + strs[i]*strs[i];
//   }
//   cout<<sum;
//   return 0;
// }
