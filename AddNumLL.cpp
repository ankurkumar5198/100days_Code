Node* reverse(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        Node* Next=NULL;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        if(!num1) return num2;
        if(!num2) return num1;
        Node* l1=reverse(num1);
        Node* l2=reverse(num2);
        Node* temp=NULL;
        Node* tHead=NULL;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int sum=carry;
            if(l1!=NULL){
                sum+=l1->data;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->data;
                l2=l2->next;
            }
            carry=sum/10;
            sum=sum%10;
            Node* NewNode= new Node(sum);
            if(temp==NULL){
                temp=NewNode;
                tHead=temp;
                
            }
            else{
                temp->next=NewNode;
                temp=temp->next;
            }
        }
        Node* ans=reverse(tHead);
        while(ans->data==0){
            Node* last=ans;
            ans=ans->next;
            last->next=NULL;
            free(last);
        }
        return ans;
    }
