/******************************************************************************

Circular Linked List CLL In Singly LL ( Dynamic Data Structure )
    Here We Don't Need head as much , need only tail.
    - Insertion
    
        ☺ At Beginning
        ☺ At Middle / Position
        ☺ At end
        
    - Deletion
    

*******************************************************************************/
#include <iostream>
using namespace std;


class Node
{
    public:
    
    int data;
    Node* next;
    
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        
        cout<<"The Value "<<value<<" is deleted.\n";
    }
    
    
    // public:
    
    // int data;
    // Node* next;
    // Node* previous;
    
    // Node(int d)
    // {
    //     this->data =d;
    //     this->next=NULL;
    //     this->previous=NULL;
    // }
    
    // ~Node()
    // {
    //     int value = this->data;
    //     if(next != NULL)
    //     {
    //         delete next;
    //         next = NULL;
    //     }
        
    //     cout<<"the Value "<<value<<" is deleted.\n";
    // }
    
};

void insertNode(Node* &tail,int element,int d)
{
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* curr = tail;
        int count =1;
        while(curr->data != element)
        {
            curr = curr->next;
            count++;
        }
        
        Node* newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
        
        
    }
}

void deleteNode(Node* &tail,int value)
{
    if(tail == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else
    {
        Node* pre = tail;
        Node* curr = pre->next;
        
        while(curr->data != value)
        {
            pre = curr;
            curr = curr->next;
        }
        
        pre->next = curr->next;
        
        if(curr == pre)
        {
            tail = NULL;
        }
        
        if(tail == curr)
        {
            tail = pre;
        }
        curr->next = NULL;
        
        delete curr;
    }
    
}

void print(Node* &tail)
{
    Node* temp = tail;
    
    if(tail == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}



int main()
{
    Node* tail = NULL;
    
    insertNode(tail,5,3);
    print(tail);
    
    insertNode(tail,3,5);
    print(tail);
    
    insertNode(tail,5,55);
    print(tail);
    
    insertNode(tail,3,15);
    print(tail);
    
    deleteNode(tail,55);
    print(tail);
    
    deleteNode(tail,15);
    print(tail);
    

    
    return 0;
}