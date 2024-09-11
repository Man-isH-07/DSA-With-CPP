/******************************************************************************

Linked List ( Dynamic Data Structure )
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
        
        //Constructor called when obect is created .
        
        Node (int d)
        {
            this -> data = d;
            this -> next = NULL;
        }
        
        //destructor
        
        ~Node()
        {
            int value = this->data;
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
            
            cout<<endl<<"the Value "<<value<<" is Deleted.";
        }
};

// Insert At Beginning

void insertAtBeg(Node* &head, int d)
{
    Node* newNode = new Node(d);
    
    newNode -> next = head;
    head = newNode;
}

//Insert At End

void insertAtEnd(Node* &tail,int d)
{
    Node* newNode = new Node(d);
    tail -> next = newNode;
    tail = tail->next;
}

//Insert At Position

void insertAtPosition(Node* &tail,Node* &head,int d,int position)
{
    //If ( position == 1 ) 
    
    if(position == 1)
    {
        insertAtBeg(head,d);
        return;
    }
    
    Node* temp = head;
    int count  = 1;
    
    while(count < (position - 1))
    {
        temp = temp->next;
        count++;
    }
    
    //If node is adding at  the last position then we need to update tail too.
    
    if(temp->next == NULL)
    {
        insertAtEnd(tail,d);
        return;
    }
    
    Node* newNode = new Node(d);
    
    newNode->next = temp->next;
    temp->next = newNode;
    
}

//Deletion of Node

void deleteNode(int position,Node* &head)
{
    //If(position==1)
    
    if(position == 1)
    {
        Node* temp = head;
        head = head -> next;
        
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* pre = NULL;
        
        int count = 1;
        while(count < position)
        {
            pre = curr;
            curr = curr -> next;
            
            count++;
        }
        
        pre -> next = curr-> next;
        curr->next = NULL;
        
        delete curr;
    }
}


//Print / Traverse the Linked List

void print(Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}

int main()
{
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    
    Node* head = node1;
    Node* tail = node1;
    
    insertAtEnd(tail,30);
    insertAtEnd(tail,40);
    print(head);
    
    cout<<endl;
    
    insertAtPosition(tail,head,20,2);
    print(head);
    
    deleteNode(2,head);
    cout<<endl;
    print(head);

    return 0;
}