/******************************************************************************

Doubly Linked List ( Dynamic Data Structure )
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
    Node* previous;
    
    Node(int d)
    {
        this->data =d;
        this->next=NULL;
        this->previous=NULL;
    }
    
    ~Node()
    {
        int value = this->data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        
        cout<<"the Value "<<value<<" is deleted.\n";
    }
};

void insertAtHead(Node* &head,Node*tail, int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
    Node* temp = new Node(d);
    temp->next = head;
    head->previous = temp;
    head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->previous = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int d,int Position)
{
    if(Position == 1)
    {
        insertAtHead(head,tail,d);
        return;
    }
    
    Node* temp = head;
    int count =1;
    
    while(count < Position-1)
    {
        temp=temp->next;
        count++;
    }
    
    if(temp->next==NULL)
    {
        insertAtTail(tail,head,d);
        return;
    }
    
    Node* newNode = new Node(d);
    
    newNode->next = temp->next;
    temp->next->previous = newNode;
    temp->next = newNode;
    newNode->previous = temp;
    
}

void  deleteNode(int Position,Node* &head)
{
    if(Position == 1)
    {
        Node* temp = head;
        head = temp->next;
        temp->next->previous = NULL;
        temp->next = NULL;
        
        delete temp;
        
    }
    else
    {
        Node* curr = head;
        Node* pre = NULL;
        
        int count = 1;
        while(count < Position)
        {
            pre = curr;
            curr = curr->next;
            count++;
        }
        
        curr->previous = NULL;
        pre->next = curr->next;
        curr->next = NULL;
        
        delete curr;
    }
    
    
}

void print(Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    
    cout<<"\n";
}

int len(Node* &head)
{
    Node* temp = head;
    int count=0;
    while(temp != NULL)
    {
        temp = temp->next;
        count=count+1;
    }
    
    cout<<"\n"<<count<<"\n";
    return 0;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    len(head);
    print(head);
    
    insertAtTail(tail,head,20);
    
    insertAtTail(tail,head,30);
    
    
    insertAtPosition(head,tail,99,4);
    
    insertAtPosition(head,tail,45,3);
    
    insertAtPosition(head,tail,67,2);
    
    insertAtPosition(head,tail,1,4);
    
    print(head);
    
    deleteNode(2,head);
    print(head);
    
    deleteNode(1,head);
    print(head);

    return 0;
}