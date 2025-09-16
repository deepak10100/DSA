// #include<iostream>
// using namespace std;

// class Student
// {
// private:
    
// public:
//     string name;
//     int age;
//     string mark;
//    void printDetails(){
//         cout<<"my name is "<<name<<" my age is "<<age;
//     }
//     Student(string mark){
//         mark=mark;
//         cout<<"my mark "<<mark<<" Created"<<endl;
//     }
//     ~Student(){
      
//         cout<<"my mark "<<mark<<" Destroyed"<<endl;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     Student s1("22");
//     return 0;
// }

#include<iostream>
using namespace std;


class Animal
{
private:
    
public:
    void sound(){
        cout<<"the barking";
    }
};
class Dog : public Animal
{
private:
    /* data */
public:
   void bark(){
        cout<<"the barking dog";
    }
};



int main(int argc, char const *argv[])
{
    Dog d;
    d.sound();
    d.bark();
    return 0;
}
