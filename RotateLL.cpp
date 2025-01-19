if(k==0 ||!head ||!head->next)
            return head;
        Node* tail=head;
        int c=1;
        while(tail->next!=NULL)
        {
            tail=tail->next;
            c++;//count of nodes
        }
        k=k%c; //if k>=c
        if(k==0)    return head;
        
        tail->next=head; //make it a circular LL

        Node* temp=head;
        for(int i=1;i<k;i++)
        {
            temp=temp->next;
        }
        Node* newHead=temp->next;
        temp->next=NULL;
        
        return newHead;
