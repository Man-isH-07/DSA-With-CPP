//Add Number Linked Lists


class Solution {
  private:
    Node* reverse(Node* &num1)
    {
        Node* curr = num1;
        Node* prev = NULL;
        Node* nextNode = NULL;
        
        while(curr != NULL)
        {
            nextNode = curr->next; 
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
    
    void insertAtTail(Node* &head,Node* &tail,int data)
    {
        
        Node* temp = new Node(data);
        
        if(head == NULL)
        {
            head = temp;
            tail=temp;
            
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    
    Node* add(Node* &num1, Node* &num2)
    {
        Node* head1 = NULL;
        Node* tail1 = NULL;
        int carry =0;
        
        while(num1 != NULL || num2 != NULL || carry != 0)
        {
            int val1=0,val2=0;
            
            if(num1 != NULL)
            {
                val1 = num1->data;
            }
            if(num2 != NULL)
            {
                val2 = num2->data;
            }
            
            int sum = carry + val1 + val2;
            int digit = sum%10;
            
            insertAtTail(head1,tail1,digit);
            
            carry = sum/10;
            if(num1 != NULL)
                num1 = num1->next;
            
            if(num2 != NULL)
                num2 = num2->next;
        }
        
        return head1;
    }
    
  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        Node* ans = add(num1,num2);
        
        ans = reverse(ans);
        
        return ans;
    }
};
