#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void displayLinkedList(LinkedList* pList) {
	int i = 0;
	if (pList != NULL) {
		printf("현재 원소 개수 : %d\n", pList->currentElementCount);

		for (i = 0; i < pList->currentElementCount; i++) {
			printf("[%d], %d\n", i, getLLElement(pList, i)->data);
		}
	}
	else {
		printf("원소가 없음\n");
	}
}

int main() {

	return 0;
}