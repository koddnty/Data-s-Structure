#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <assert.h>

typedef int SLTDatetype;

//节点数据
typedef struct SListNode
{
	SLTDatetype num;
	struct SListNode* nextnode;
}SLNode;

/*数据操作*/
//打印链表___起始位置数据指针—打印数据个数
int SListPrint(SLNode*, int);
//添加数据（尾）___链表指针地址+待存入数据
int SListPushBack(SLNode**, SLTDatetype);
//头插
int SListPushHead(SLNode** pSLNHead, SLTDatetype num);
//按位添加
int SListAddPrice(SLNode** pSLNHead, int n, int num);
//按位删除
int SListDeletPrice(SLNode** pSLNHead, int n);