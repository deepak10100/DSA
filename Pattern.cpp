#include <iostream>
using namespace std;
void printStar1(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void printStar2(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void printStar3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}
void printStar4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
}
void printStar5(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void printStar6(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}
void printStar7(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << " ";
    }
    for (int s = 1; s <= 2 * i - 1; s++)
    {
      cout << "*";
    }

    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void printStar8(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << " ";
    }
    for (int s = 1; s <= 2 * n - (2 * i - 1); s++)
    {
      cout << "*";
    }

    for (int j = 1; j <= i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void printStar10(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void printStar11(int n)
{
  int start = 1;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      start = 0;
    }
    else
    {
      start = 1;
    }

    for (int j = 1; j <= i; j++)
    {

      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}
void printStar12(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= i; k++)
    {
      cout << k;
    }
    for (int s = 1; s <= 2 * (n - i); s++)
    {
      cout << "-";
    }
    for (int k = i; k >= 1; k--)
    {
      cout << k;
    }

    cout << endl;
  }
}
void printStar13(int n)
{
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= i; k++)
    {
      cout << count;
      count++;
    }

    cout << endl;
  }
}
void printStar14(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char ch = 'A';
    for (int k = 1; k <= i; k++)
    {
      cout << ch;
      ch++;
    }
    cout << endl;
  }
}
void printStar15(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + (n - i); ch++)
    {
      cout << ch;
    }

    cout << endl;
  }
}
void printStar16(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char ch = 'A' + i - 1;
    for (int j = 1; j <= i; j++)
    {
      cout << ch;
    }
    cout << endl;
  }
}
void printStar17(int n)
{
  for (int i = 1; i <= n; i++)
  {
    // 1. Left spaces
    for (int s = 1; s <= n - i; s++)
    {
      cout << " ";
    }

    // 2. Forward letters (A to A+i-1)
    for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
    {
      cout << ch;
    }

    // 3. Backward letters (A+i-2 to A)
    for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
    {
      cout << ch;
    }

    cout << endl;
  }
}
void printStar18(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char ch = 'E' - i + 1;
    for (int j = 1; j <= i; j++)
    {
      cout << ch;
      ch++;
    }
    cout << endl;
  }
}
void printStar19(int n)
{
  for (int i = 1; i <=n; i++)
  {
   for (int k = 1; k <= i; k++)
   {
    cout<<k;
   }
   
   for (int s = 1; s <= 2*(n-i); s++)
   {
    cout<<"-";
   }
   
    for (int j = i; j >= 1; j--)
    {
     cout<<j;
    }
    cout<<endl;
    
  } 
  
}

int main(int argc, char const *argv[])
{
  int n;
  cout << "Enter the number " << endl;
  cin >> n;
  printStar19(n);
  return 0;
}
