//Clone a linked list with next and random pointer



class Solution {
  private:
    void insertAtTail(Node* &head,Node* &tail,int d)
    {
        Node* newNode = new Node(d);
        
        if(head == NULL)
        {
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    
  public:
    Node *copyList(Node *head) {
        // Write your code here
        
        //step 1 : Create Clone LL
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL)
        {
            insertAtTail(cloneHead, cloneTail,temp->data);
            temp = temp->next;
        }
        
        //step 2 : Connect OriginalNode and Clone Node in ZigZag Way
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL  && cloneNode != NULL)
        {
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
        
        //step 3 : copy the random pointer
        
        temp = head;
        
        while(temp != NULL)
        {
            if( temp->next != NULL &&  temp->random != NULL)
            {
                temp->next->random = temp->random->next;
               
            }
            
             temp = temp->next->next;
        }
        
        //step 4 : Revert all that zigzag moves 
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL)
        {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            
            if(originalNode != NULL)
            {
                cloneNode->next = originalNode->next;
            }
            
            cloneNode = cloneNode->next;
        }
        
        return cloneHead;
    }
};