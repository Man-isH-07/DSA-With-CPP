//Reverse Linked List 

#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{

    //Recursive approche

    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    LinkedListNode<int>* chotaHead = reverseLinkedList(head->next);

    head->next->next = head;
    head->next = NULL;

    return chotaHead;

/*
    // Iterative Approche

    LinkedListNode<int>* curr =head;
    LinkedListNode<int>* pre = NULL;
    LinkedListNode<int>* forward = NULL;

    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = pre;
        pre = curr;
        curr = forward;
    }

    return pre;

    */
}