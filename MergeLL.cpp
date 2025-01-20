class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node *start=NULL; //start of resultant linked list
         Node *tail=NULL;  //tail of resultant linked list
         if(head1->data<=head2->data){
             start=head1;
             head1=head1->next;
         }
         else{
             start=head2;
             head2=head2->next;
         }
         tail=start;
         while(head1 && head2){     //comparing the data parts of node
             if(head1->data<=head2->data){
                 tail->next=head1;
                 head1=head1->next;
                 
             }
             else{
                 tail->next=head2;
                 head2=head2->next;
             }
             tail=tail->next;
         }
         
         
         if(head1){
             tail->next=head1;
         }
         else{
             tail->next=head2;
         }
         return start;
    }
};
