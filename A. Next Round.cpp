#include <iostream>
using namespace std;

int main (){

    int co,test,count = 0;
    cin>>co>>test;

    int array [co];

    for (int index = 0; index < co; index++)
    {
       cin>>array[index];
    }


    for (int i = 0; i < co; i++)
    {
        if ((array[i] >=array[test] ) && array[i] > 0)
        {
           count++;
        }
        
    }

    cout<<count;

    
    

}