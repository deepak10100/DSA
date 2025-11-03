#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int mark;
    cin>>mark;
    if (mark>=25 && mark<=44)
    {
        cout<<"Grade E";
    }else if (mark>=45 && mark<=49)
    {
        cout<<"Grade D";
    }else if (mark>=50 && mark<=59)
    {
        cout<<"Grade C";
    }
    else if (mark>=60 && mark<=69)
    {
        cout<<"Grader B";
    }else if (mark>=70 && mark<=100)
    {
        cout<<"Grade A";
    }else{
        cout<<"Fail";
    }
    
    
    
    
    
    
    return 0;
}
