#include<iostream>
using namespace std;
#include<string>
int main()
{

  string s ;
  getline(cin,s);

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '\\')
    {
        for (int j = 0; j < i; j++)
        {
            cout<<s[j];
        }
        
    }
    
  }
  
}