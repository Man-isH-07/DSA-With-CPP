/******************************************************************************

Reverse Character Array

*******************************************************************************/

#include <iostream>
using namespace std;

void reverse(char ch[],int n)
{
    int s = 0;
    int e = n-1;
    
    while(s<e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}

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
    
    int length = getLength(ch);
    
    cout<<"\nLength Of Your String Is : "<< length;
    
    reverse(ch,length);
    
    cout<<"\nReverse Of Your Name is : "<<ch;
    
    return 0;
}