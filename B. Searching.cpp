#include <iostream>
using namespace std;

int main (){
int count,num;
bool bo = false;
cin>>count;
int array[count];
for (int i = 0; i < count; i++)
{
cin>>array[i];
}
cin>>num;
int f;
for (int i = 0; i < count; i++)
{
    if (array[i] == num)
    {
        bo = true;
        f =i;
        break;
        
    }
    
   
    }

    if (bo == true)
    {
        cout<<f<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    
}



