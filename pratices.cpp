// #include<iostream>
// #include<vector>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   vector<int>list={34, 15, 88, 2};
//   int smallNum=list[0];
  
  
//   for (int i = 1; i < list.size(); i++)
//   {
//     if (smallNum>list[i])
//     {
//         smallNum=list[i];
//     }
    
//   }
//   cout<<smallNum;
  
  
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int num;
//   cin>>num;
//   int sum=0;
//   for (int i = 1; i <= num; i++)
//   {
//     sum=sum+i;
//   }
//   cout<<sum;
  
//   return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   vector<int> newArray;
//  for (int i = n; i >= 1; i--)
//  {
//     newArray.push_back(i);
//  }

//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n,m;
//   cin>>n;
//   cin>>m;
//   if (n<0)
//   {
//     n=0;
//   }
//   if (m<0)
//   {
//     m=0;
//   }
//   cout<<m*n;
  
  
//   return 0;
// }

#include<iostream>
using namespace std;
#include<typeinfo>
int main(int argc, char const *argv[])
{
  int num=765;
  // int digit;
  string res="";
  while (num!=0)
  {
    int digit=num%10;
    int square=digit*digit;
    num=num/10;
   res= to_string(square)+res;
    
  }
  cout<<stoi(res);
  // cout<<(type) num;
  // int n=typeid(res);
  // cout<<num;
  // cout<<(int)res;
  cout<< typeid(res).name();
  
  // int petrolDistance= 50;
  // int onegallon = 25;
  // int dis = 2*onegallon;
  // if (dis>=petrolDistance)
  // {
  //   cout<<"true";
  // }else
  // {
  //   cout<<"false";
  // }
  
  
  // bool employed=true;
  // bool vacation = false;
  // if (employed==true && vacation==false)
  // {
  //   cout<< "true";
  // }
  // else
  // {
  //   cout<<"false";
  // }
  
// int bmi,weight,height;
// weight=4;
// height=2;
// bmi = weight/height*height;
// if (bmi<=18.5)
// {
//   return "Underweight";
// }else if (bmi<=25.0)
// {
//   return "Normal";
// }else if (bmi<=30.0)
// {
//   return"OverWeight";
// }else
// {
//   return"Obese";
// }




  
  
  return 0;
}
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n=-5;
//   if (n<0)
//   {
//     return n;
//   }else{
//     return -n ;
//   }
  
  
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   cin>>n;
//   string result;
//   for (int i = 1; i < n; i++)
//   {
//     result= result+ to_string(i)+" Sheep...";
//   }
//   return result;
  
//   return 0;
// }
