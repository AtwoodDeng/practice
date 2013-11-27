#include "List.h"

ListNode* getKToTail(ListNode* pListHead, unsigned int k)
{
	ListNode* kHead = pListHead; //be setted at the k-th node
	//set kHead to the k-th node
	int iKHead = 0;//record the position of kHead
	while( iKHead < k && kHead != null ) {
		kHead = kHead->next;
		++iKHead;
	}
	// test if error
	if ( kHead == null ) {
		return null;
	}
	ListNode* resHead = pListHead;
	//push the kHead
	while ( kHead != null ) {
		kHead = kHead->next;
		resHead = resHead->next;
	}
	// test if error
	if ( kHead == null ){
		return null;
	}
	//output result
	return resHead;
}


int main() {

	return 0;
}