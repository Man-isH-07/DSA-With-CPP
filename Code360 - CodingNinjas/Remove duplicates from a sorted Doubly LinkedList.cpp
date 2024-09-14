// Remove duplicates from a sorted Doubly Linked List


/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here

    if(head==NULL)
    {
        return NULL;
    }

    Node* curr = head;

    while(curr != NULL && (curr->next != NULL))
    {
        if( (curr->next != NULL) && (curr->data == curr->next->data) )
        {
            Node* next_next = curr->next->next;
            Node* deleteNode = curr->next;
            delete(deleteNode);
            curr->next = next_next;

            if (next_next != NULL) {
                next_next->prev = curr;
            }
            
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}
