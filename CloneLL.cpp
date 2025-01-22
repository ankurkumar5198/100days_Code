Node* cloneLinkedList(Node *head) {
        // Write your code here
        Node* ansHead=NULL;
        Node* backHand=NULL;
    
        Node* th=head;
        unordered_map<Node* ,Node*> nodeRand;
        unordered_map<Node* ,Node*> cloneNode;
        
        while(th){
            nodeRand[th]=th->random;//
            
            int data=th->data;
            Node* temp=new Node(data);
            if(ansHead == NULL){
                ansHead=temp;
                backHand=ansHead;
            }
            else{
                backHand->next =temp;
                backHand=backHand->next;
            }
            
            cloneNode[th] = temp;//
            th=th->next;
        }
        
        
        for(auto ele : nodeRand){
            cloneNode[ele.first]->random = cloneNode[ele.second];
            
        }
        
        
        
        return ansHead;
        
        
        
    }
