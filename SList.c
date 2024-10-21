#include "SList.h"

//��ӡ����
int SListPrint( SLNode* pSLNHead, int n)
{
	if (pSLNHead == NULL)
	{
		return 0;
	}
	SLNode* cur = pSLNHead;
	while (cur != NULL && n--)
	{
		printf("%d   ", cur->num);
		cur = cur->nextnode;
	}
	return 1;
}

//������ݣ�β�壩
int SListPushBack(SLNode** pSLNHead, SLTDatetype num)
{
	if (*pSLNHead == NULL)
	{
		*pSLNHead = (SLNode*)malloc(sizeof(SLNode));
		(*pSLNHead)->num = num;
		(*pSLNHead)->nextnode = NULL;
		return 0;
	}
	SLNode* cur = (*pSLNHead);
	while (cur->nextnode != NULL)
	{
		cur = cur->nextnode;
	}
	cur->nextnode = (SLNode*)malloc(sizeof(SLNode));
	cur = cur->nextnode;
	cur->num = num;
	cur->nextnode = NULL;
	return 1;
}

//ͷ��
int SListPushHead(SLNode** pSLNHead, SLTDatetype num)
{
	if (pSLNHead == NULL)
	{
		return 0;
	}
	else
	{
		SLNode* ptr = *pSLNHead;
		*pSLNHead = (SLNode*)malloc(sizeof(SLNode));
		(*pSLNHead)->num = num;
		(*pSLNHead)->nextnode = ptr;
		return 1;
	}
}

//��λ���
int SListAddPrice(SLNode** pSLNHead, int n, int num)
{
	if ((*pSLNHead) == NULL)
	{
		return 0;
	}
	else
	{
		if (n == 0)
		{
			SLNode* temp = *pSLNHead;
			(*pSLNHead) = (SLNode*)malloc(sizeof(SLNode));
			(*pSLNHead)->num = num;
			(*pSLNHead)->nextnode = temp;
		}
		else
		{
			SLNode* cur = *pSLNHead;
			for (int i = 0; i < (n - 1); i++)
			{
				cur = cur->nextnode;
			}
			if (cur->nextnode != NULL)
			{
				SLNode* temp = cur->nextnode;
				cur->nextnode = (SLNode*)malloc(sizeof(SLNode));
				cur = cur->nextnode;
				cur->nextnode = temp;
				cur->num = num;
			}
			else
			{
				cur->nextnode = (SLNode*)malloc(sizeof(SLNode));
				cur = cur->nextnode;
				cur->nextnode = NULL;
				cur->num = num;
			}
			return 1;
		}
	}
}

//��λɾ��
int SListDeletPrice(SLNode** pSLNHead, int n)
{
	assert(*pSLNHead != NULL);
	if (n == 0)
	{
		SLNode* cur = *pSLNHead;
		*pSLNHead = (*pSLNHead)->nextnode;
		free(cur);
		return 0;
	}
	else
	{
		SLNode* cur = *pSLNHead;
		for (int i = 0; i < (n - 1); i++)
		{
			if (cur->nextnode != NULL)
			{
				cur = cur->nextnode;
			}
			else
			{
				return 0;
			}
		}
		SLNode* temp = cur->nextnode;
		if ((cur->nextnode)->nextnode == NULL)
		{
			free(temp);
		}
		else
		{
			(cur->nextnode) = (cur->nextnode)->nextnode;
			free(temp);
		}
	}
}