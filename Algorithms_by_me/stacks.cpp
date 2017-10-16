//full linked list implementation of stacks in c++

#include <iostream>
#include <climits>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
}*head;


void push(int x) {
    ListNode *temp = new ListNode();
    if(head == NULL){
        temp->val = x;
        temp->next = NULL;
        head = temp;
        return;
    }
    temp->val = x;
    temp->next = head;
    head = temp;
}

void pop() {
    ListNode *temp = head;
    if(head == NULL) return;
    head = head->next;
}

int top() {
    if(head == NULL) return -1;
    return head->val;
}

int getMin() {
    int m = INT_MAX;
    ListNode* temp = head;
    if(head == NULL) return -1;
    while(temp != NULL){
        m = min(m,temp->val);
        temp = temp->next;
    }
    return m;
}

int main() {
	// your code goes here
	push(2);
	push(1);
	push(3);
	push(5);
	pop();
	int n = top();
	int m = getMin();
	cout<<n<<endl<<m;;
	return 0;
}