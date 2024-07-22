/******************************************************************************

Character Array

*******************************************************************************/

#include <iostream>
using namespace std;
int getLength(char c[])
{
    int count = 0;
    for(int i=0;c[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[15];
    cout<<"Enter String : ";
    cin>>ch;
    
    cout<<"Your String Is : "<<ch;
    
    cout<<"\nLength Of Your String Is : "<<getLength(ch);
    return 0;
}