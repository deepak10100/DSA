#include<iostream>
using namespace std;
class Binary{
  private:
    string s;
  public:
    void read();
    void checkbin();
    void onecom();
    void display();
};
void Binary::read(){
    cout<<"Enter the binary"<<endl;
    cin>>s;
}
void Binary:: checkbin(){
    for (int i = 0; i < s.length(); i++)
    {
      if (s.at(i)!='0' && s.at(i)!= '1')
      {
        cout<<"Incorrect Binary Number";
        exit(0);
      }
      
    }
    
}
void Binary::onecom(){
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i)=='0')
    {
      s.at(i)='1';
    }else{
      s.at(i)='0';
    }
    
  }
  
}
void Binary::display(){
  for (int i = 0; i < s.length(); i++)
  {
    cout<<s[i];
  }
  cout<<endl;
}
int main(int argc, char const *argv[])
{
  Binary b;
  b.read();
  b.checkbin();
  b.display();
  b.onecom();
  b.display();
  return 0;
}
