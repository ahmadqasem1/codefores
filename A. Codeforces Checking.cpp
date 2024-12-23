#include <iostream>
#include <string>

using namespace std;

int main (){

    int t;
    cin>>t;
    string s = "codeforces";
    char ch;
    
    while (t > 0)
    {
     cin>>ch;
    bool bo = false;

        for (int i = 0; i < s.size() ; i++)
        {
         if(ch == s[i]){
            bo = true;
            break;
         }

            
         }

         if (bo == true)
         {
           cout<<"YES\n";
         }
         else{
            cout<<"NO\n";
         }

         
         t--;
        }
        
   

        
    }
    

    

  
    
    

