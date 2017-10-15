// Reverse a linked list from position m to n in O(n) time and O(1) space


 ListNode* reverseList(ListNode* A,ListNode* b) {
    ListNode *iterator = A;
    ListNode *temp = b;
    ListNode *prev = temp;
    while(iterator !=  b){
        prev = iterator;
        iterator = iterator->next;
        prev->next = temp;
        temp = prev;
    }
    return prev;
}
ListNode* reverseBetween(ListNode* A, int m, int n) {

    if(A->next == NULL) return A;
    
    ListNode* temp = A;
    ListNode* prev = A;
    ListNode* iterator = A;
    ListNode* temp1;
    int j = 0;
    for(int i=0;i<n;i++){
        temp = temp->next;
    }
    ListNode* head = temp; 
    for(int i=0;i<n-1;i++){
        prev = prev->next;
    }
    if(m == 1) return reverseList(A,temp);
    for(int i=0;i<m-2;i++){
        iterator = iterator->next;
    }
    while(iterator != head){
        temp1 = iterator;
        iterator = iterator->next;
        temp1->next = prev;
        if(j == 0) {prev = temp;j = 2;}
        else prev = temp1;
    }
    return A;
    
}

