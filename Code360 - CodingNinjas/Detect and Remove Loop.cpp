// Detect and Remove Loop

/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

Node* floydDetectLoop(Node* &head)
{

    if(head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL) {
        return head; // No loop detected
    }

    Node* slow =head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {

        fast = fast->next;

        if(fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast)
        {
            return slow;
        }

    }

    return NULL;

}

Node* getStartingNode(Node* &head)
{
    
    if(head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL || head == NULL) {
        return head; // No loop detected
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(intersection!=slow)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
    

}

Node* removeLoop(Node* &head) {

    int VAL;
    cin>>VAL;

    if(VAL == 0)
    {
        return head;
    }
    
    if (head == NULL) {
        return NULL;
    }

    Node* startNodeOfLoop = getStartingNode(head);
    if (startNodeOfLoop == NULL) {
        return head; // No loop detected
    }

    Node* temp = startNodeOfLoop;
    while (temp->next != startNodeOfLoop) {
        temp = temp->next;
    }

    temp->next = NULL;

    return head;
}