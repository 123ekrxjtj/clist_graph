#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void displayLinkedList(LinkedList* pList) {
	int i = 0;
	if (pList != NULL) {
		printf("���� ���� ���� : %d\n", pList->currentElementCount);

		for (i = 0; i < pList->currentElementCount; i++) {
			printf("[%d], %d\n", i, getLLElement(pList, i)->data);
		}
	}
	else {
		printf("���Ұ� ����\n");
	}
}

int main() {

	return 0;
}