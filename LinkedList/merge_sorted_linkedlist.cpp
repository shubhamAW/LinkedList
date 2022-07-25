class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* dummy =new ListNode(); 
        ListNode* temp = dummy;
        // they given us a sorted linked list 
        // and we have to add the nodes in such a maner that they are in sorted postion. 
        while( list1 && list2 ){
            if(list1 ->val < list2->val){
                temp->next=list1;
                temp=temp->next;
                list1=list1->next;
            }else{
                temp->next=list2;
                temp=temp->next;
                list2=list2->next;
            }
        }
        
        if(list1){
            temp->next=list1;
        }else{
            temp->next=list2;
        }
      
    
        return dummy->next;
    }
};
