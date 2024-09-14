// Remove Duplicates From an Unsorted Linked List

#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/



Node *removeDuplicates(Node *head)
{
    // Write your code here
   
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    unordered_set<int> seen;

    Node* current = head;
    seen.insert(head->data);

    while(current->next != NULL)
    {
        if(seen.count(current->next->data))
        {
            Node* temp = current->next;
            current->next = current->next->next;
            delete(temp);
        }
        else
        {
            seen.insert(current->next->data);
            current = current->next;
        }
    }



    return head;


    


}