/******************************************************************************

Implementation of Stack by array

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Stack
{
    public:
        int top;
        int *arr;
        int size;
    
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int data)
    {
        if( (size - top) > 1 )
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout<<"Stack is full , can not insert\n";
        }
    }
    
    void pop()
    {
        if(top!=-1)
        {
            top--;
        }
        else
        {
            cout<<"stack is empty\n";
        }
    }
    
    int getTop()
    {
        if(top!=-1)
        {
            return arr[top];
        }
        else
        {
            cout<<"stack is empty\n";   
        }
        return -1;
    }
    
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
};

int main()
{
    Stack abc(5);
    
    abc.push(10);
    abc.push(20);
    abc.push(30);
    
    cout<<abc.getTop()<<endl;
    
    abc.pop();
    
    cout<<abc.getTop()<<endl;
    
    if(abc.isEmpty())
    {
        cout<<"Stack is empty\n";
    }
    else{cout<<"Stack is not empty\n";}

    return 0;
}