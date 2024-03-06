#include<stdio.h>
#include<stdlib.h>

typedef char ElemType;

typedef struct CirList
{
    ElemType data;
    struct CirList *prior;
    struct CirList *next;
}CirNode;

CirNode* CreateNode(ElemType data)
{
    CirNode *head;
    head=(CirNode*)malloc(sizeof(CirNode));
    if(!head)
    return NULL;
    head->data=data;
    head->next=NULL;
    head->prior=NULL;
    return head;
}

void AssertNode(CirNode *head,ElemType data)
{
    CirNode *p=head->next;
    CirNode *node=(CirNode*)malloc(sizeof(CirNode));
    if(!node)
    return;
    head->next->prior=node;
    node->next=head->next;
    head->next=node;
    node->prior=head;
}

int CloseCircular(CirNode *head)
{
    CirNode *p=head;
    int i=0;
    while(p->next)
    {
        p=p->next;
        i++;
    }
    head->prior=p;
    p->next=head;
    return i;
}

ElemType FindNode(CirNode *head,int n)
{
    for(int i=0;i<n;i++,head=head->next);
    return head->data;
}

void MoveList(CirNode *head,int n)
{
    if(n>0)
    for(int i=0;i<n;i++,head=head->next);
    else if(n<0)
    for(int i=0;i<(-n);i++,head=head->prior);
}

void PrintList(CirNode *head)
{
    CirNode *p=head;
    while(p->next!=head)
    {
        printf("%c",p->data);
        p=p->next;
    }
    printf("%c",p->data);
}

void FreeList(CirNode *head)
{
    CirNode *p=head,*q=head;
    while(p->next!=head)
    {
        q=p;
        p=p->next;
        free(q);
    }
    free(p);
}

