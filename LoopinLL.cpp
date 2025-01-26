void removeLoop(Node* head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(fast==NULL|| fast->next==NULL) return;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        Node* nxtNode=slow; 
        while(fast->next!=nxtNode){
            fast=fast->next;
        }
        
        fast->next=NULL;
    }
