struct Node* findPivot(struct Node* head){
        if(!head->next){
            return head;
        }
        int p=head->data;
        struct Node* j=head->next;
        struct Node* i=head;
        int temp;
        while(j){
            if(j->data<p){
                i=i->next;
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
            j=j->next;
        }
        temp=head->data;
        head->data=i->data;
        i->data=temp;
        return i;
    }
    void sortQ(struct Node* head){
        if(!head){
            return;
        }
        struct Node* pivot=findPivot(head);
        struct Node* pre=nullptr;
        struct Node* curr=head;
        while(curr!=pivot){
            pre=curr;
            curr=curr->next;
        }
        if(pre){
            pre->next=nullptr;
            sortQ(head);
            pre->next=pivot;
        }
        
        sortQ(pivot->next);
    }
    struct Node* quickSort(struct Node* head) {
        // code here
        sortQ(head);
        return head;
    }
