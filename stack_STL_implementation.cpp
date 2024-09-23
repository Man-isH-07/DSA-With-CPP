/******************************************************************************

Implementation of Stack by STL

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T>

void print(stack<T> a)
{
    while(!a.empty())
    {
        cout<<a.top()<<" ";
        a.pop();
    }
    
    cout<<endl;
}

int main()
{
    stack<int> a;
    stack<int> b;
    
    a.push(1);  b.push(10);
    a.push(2);  b.push(20); 
    a.push(3);  b.push(30);
    
    cout<<"Before Swap : \n";
    print(a);
    print(b);
    
    cout<<"After Swap : \n";
    
    b.swap(a);
    
    print(a);
    print(b);
    
    
    // cout<<"Top : "<<ex.top()<<endl;
    
    // a.pop();
    // a.pop();
    
    // cout<<"Top : "<<a.top()<<endl;
    
    // cout<<"Stack is empty or not : "<<a.empty();
    

    return 0;
}