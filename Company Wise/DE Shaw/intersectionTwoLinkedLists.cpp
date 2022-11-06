#include<bits/stdc++.h>

class ListNode {
public:
	int data;
	ListNode* next;

	ListNode(int data) {
		this->data = data;
		this->next = NULL;
	}
};

ListNode* getIntersectionNode(ListNode *A, ListNode *B) {
	map<ListNode*, bool>M;
	ListNode* tempA = A;
	while(tempA!=NULL) {
		M[tempA] = true;
		tempA = tempA->next;
	}
	ListNode* tempB = B;
	while(tempB!=NULL) {
		if(M[tempB])
			return tempB;
		tempB = tempB->next;	
	}
	return NULL;
}