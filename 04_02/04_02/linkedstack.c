#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedstack.h"

LinkedStack* createLinkedStack() {
	LinkedStack* pReturn = NULL;
	int i = 0;
	pReturn = (LinkedStack*)malloc(sizeof(LinkedStack));
	if (pReturn != NULL) {
		memset(pReturn, 0, sizeof(LinkedStack));
	}
	else {
		printf("오루 : 메모리 할당");
		return NULL;
	}
	return pReturn;
}

int pushLS(LinkedStack* pStack, StackNode element) {
	int ret = FALSE;
	StackNode* pNode = NULL;
	if (pStack != NULL) {
		pNode = (StackNode*)malloc(sizeof(StackNode));
		if (pNode != NULL) {
			memset(pNode, 0, sizeof(StackNode));
			*pNode = element;
			pNode->pLink = pStack->pTopElement;

			pStack->pTopElement = pNode;

			pStack->currentElementCount++;
			ret = TRUE;
		}
		else {
			printf("오류 : 메모리 할당");
		}
	}
	return ret;
}

StackNode* popLS(LinkedStack* pStack) {
	StackNode* pReturn = NULL;
	if (pStack != NULL) {
		if (isLinkedStackEmpty(pStack) == FALSE) {
			pReturn = pStack->pTopElement;
			pStack->pTopElement = pReturn->pLink;

			pReturn->pLink = NULL;
			pStack->currentElementCount--;
		}
	}
	return pReturn;
}

StackNode* peekLS(LinkedStack* pStack) {
	StackNode* pReturn = NULL;
	if (pReturn != NULL) {
		if (isLinkedStackEmpty(pStack) == FALSE) {
			pReturn = pStack->pTopElement;
		}
	}
	return pReturn;
}
void deleteLinkedStack(LinkedStack* pStack);
int isLinkedStackFull(LinkedStack* pStack);
int isLinkedStackEmpty(LinkedStack* pStack);

int main() {

	return 0;
}