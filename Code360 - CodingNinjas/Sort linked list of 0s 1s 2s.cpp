//Sort linked list of 0s 1s 2s

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

Node* sortList(Node *head){
    // Write your code here.

    int count_1 =0;
    int count_2 =0;
    int count_0 =0;

    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == 0)
        {
            count_0++;
        }
        else if(temp->data == 1)
        {
            count_1++;
        }
        else if (temp->data == 2)
        {
            count_2++;
        }

        temp = temp->next;
    }

    Node* curr = head;

    while(curr!=NULL)
    {
        if(count_0!=0)
        {
            curr->data = 0;
            count_0--;
        }
        else if(count_1!=0)
        {
            curr->data = 1;
            count_1--;
        }
        else if(count_2!=0)
        {
            curr->data = 2;
            count_2--;
        }

        curr = curr->next;
    }


    return head;

}