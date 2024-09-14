//Middle Of The Linked List

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/


/*
int getLength(Node* &head)
{

    if(head == NULL)
    {
        return 0;
    }
    if(head->next == NULL)
    {
        return 1;
    }
    if(head->next->next == NULL)
    {
        return 2;
    }
    
    int count =0;
    
    while(head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;

}
*/



Node *findMiddle(Node *head) {
    // Write your code here

    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    if(head->next->next == NULL)
    {
        return head->next;
    }

    Node* fast = head->next;
    Node* slow = head;

    while(fast!=NULL)
    {
        fast = fast->next;

        if(fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    return slow;

/*
    int length = getLength(head);
    int mid = (length/2);
    int count=0;
    Node* temp = head;
    while(count < mid)
    {
        temp = temp->next;
        count+1;
    }

    return temp;
*/

}


