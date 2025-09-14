#include <iostream>
using namespace std;

// int add(int a, int b)
// {
//     return a+b;
// }
// void printname(string name){
//     cout<<"my name is "<<name;
// }
class bankAccount
    {        
    public:
        string name;
        int balance;
        
        void deposit(int amount) {
            balance += amount;
            cout<<"desposit "<<amount;
        }

        void showbalance(){
            cout<<"balance is "<<balance;
        }
       
    };
int main(int argc, char const *argv[])
{
    bankAccount bcc;
    bcc.name="deepak";
    bcc.balance=100;
    bcc.deposit(500);
    bcc.showbalance();
    // printname("deepak");
    // cout<<add(1,6);
    // cout<<"hello world";
    // string name;
    // int age;
    // cout<<"Enter the name: ";
    // cin>>name;
    // cout<<"Enter the age :";
    // cin>>age;
    // cout<<"hello, "<<name<<" you are "<<age<<" year old"<<endl;
    // string name;
    // string city;
    // int age;
    // cout<<"Enter the name "<<endl;
    // cin>>name;
    // cout<<"Enter the age "<<endl;
    // cin>>age;
    // cout<<"Enter the city "<<endl;
    // cin>>city;
    // cout<<"My name is "<<name<<endl;
    // cout<<"I live in "<<city<<endl;
    // cout<<"I am "<<age<<" year old"<<endl;
    // int a =2;
    // int b =3;
    // cout<<(a!=b);
    // return 0;
    // int age=10;
    // if (age>18)
    // {
    //     cout<<"You are eligible to vote.";
    // }else{
    //     cout<<"Not";
    // }
    
    // int mark = 55;
    // if (mark>=90)
    // {
    //     cout<<"A";
    // }else if (mark>=70)
    // {
    //     cout<<"B";
    // }else if (mark>=60)
    // {
    //     cout<<"C";
    // }else if (mark>=50)
    // {
    //     cout<<"D";
    // }else{
    //     cout<<"F";
    // }
    
    // int day =7;
    // switch (day)
    // {
    // case 1:
    //     cout<<"sunday";
    //     break;
    // case 2:
    //     cout<<"monday";
    //     break;
    // case 3:
    //     cout<<"tuesday";
    //     break;
    // case 4:
    //     cout<<"wednesday";
    //     break;
    // case 5:
    //     cout<<"thursday";
    //     break;
    // case 6:
    //     cout<<"friday";
    //     break;
    // case 7:
    //     cout<<"saturday";
    //     break;
    
    // default:
    //     cout<<"invalid input";
    //     break;
    // }

    // int age=59;
    // if (age>=60)
    // {
    //     cout<<"Sinor";
    // }
    // else if (age>=20 && age<=59)
    // {
    //     cout<<"Teenager";
    // }else if (age>=13 && age<=19)
    // {
    //     cout<<"Adult";
    // }else{
    //     cout<<"Child";
    // }
    
    // int arr[5]={1,2,3,4,5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // char name[10]="Deepak";
    // cout<<name;
    
    // string name ;
    // cout<<"Enter the name ";
    // cin>>name;
    // cout<<"my name is "<<name;

    

    
    

}

