/* Palindrome Linked List

Difficulty: Medium	Accuracy: 41.48%	Submissions: 318K+	Points: 4

Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.

*/
class Solution {
  private:
    Node* getmid(Node* &head)
    {
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow= slow->next;
        }
        
        return slow;
    }
    
    Node* reverse(Node* &head)
    {
        Node* curr = head;
        Node* pre = NULL;
        Node* next = NULL;
        
        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        
        return pre;
    }
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        
        if(head == NULL || head->next == NULL)
        {
            return true;
        }
        
        Node* middleNode = getmid(head);
        
        Node* temp = middleNode->next;
        middleNode->next = reverse(temp);
        
        Node* head1 = head;
        Node* head2 = middleNode->next;
        
        while(head2 != NULL)
        {
            if(head1->data != head2->data)
            {
                return false;
            }
            else
            head1 = head1->next;
            head2 = head2->next;
        }
        
        
        return true;
        
    }
};