#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <assert.h>

typedef int SLTDatetype;

//�ڵ�����
typedef struct SListNode
{
	SLTDatetype num;
	struct SListNode* nextnode;
}SLNode;

/*���ݲ���*/
//��ӡ����___��ʼλ������ָ�롪��ӡ���ݸ���
int SListPrint(SLNode*, int);
//������ݣ�β��___����ָ���ַ+����������
int SListPushBack(SLNode**, SLTDatetype);
//ͷ��
int SListPushHead(SLNode** pSLNHead, SLTDatetype num);
//��λ���
int SListAddPrice(SLNode** pSLNHead, int n, int num);
//��λɾ��
int SListDeletPrice(SLNode** pSLNHead, int n);