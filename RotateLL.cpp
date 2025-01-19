class Solution{
            public:
            Node* findNthNode(Node* temp,int k){
                        int cnt = 1;
                        while(temp!=NULL){
                                    if(cnt == k) return temp;
                                    cnt++;
                                    temp = temp->next;
                        }
                        return temp;
            }

            Node *rotate(Node* head,int k){
                        if(head == NULL || k==0) return head;
                        Node* tail = head;
                        int len = 1;
                        while(tail->next!=NULL){
                                    len++;
                                    tail = tail->next;
                        }
                        if(k%len==0) return head;
                        k = k%len;
                        tail->next = head;// no longer tail
                        newLastNode = findNthNode(head,len-k);// new tail
                        newLastNode->next = NULL;
            }
};
