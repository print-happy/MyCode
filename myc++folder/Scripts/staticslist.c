#include<stdio.h>
#define MAXSIZE 100

typedef struct
{
    int data;
    int cursor;
}Component,StaticLinkedList[MAXSIZE];

void InitList(StaticLinkedList space)
{
    for(int i=0;i<MAXSIZE-1;i++)
    {
        space[i].cursor=i+1;
    }
    
}

int main()
{

}