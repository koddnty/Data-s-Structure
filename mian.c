//不包含头结点的单链表

#pragma once

#include "SList.h"

int main(void)
{
	//SLNode a1 = { 233, NULL };
	//SLNode *head = &a1;
	SLNode* a1 = NULL;
	for (int i = 0; i < 10; i++)
	{
		SListPushBack(&a1, i);
	}
	SListPrint(a1, 100);
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		SListPushHead(&a1, i);
	}
	SListPrint(a1, 100);
	printf("\n");
	for (int i = 1; i <= 18; i++)
	{
		SListDeletPrice(&a1, 1);
	}
	for (int i = 1; i < 18; i++)
	{
		SListAddPrice(&a1, 1, i);
	}
	SListAddPrice(&a1, 0, 33);
	SListAddPrice(&a1, 19, 33);
	SListPrint(a1, 100);
	printf("\n");
	return 0;
}
