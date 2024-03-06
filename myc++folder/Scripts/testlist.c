#include<stdio.h>
#include"Circular_Linked_List.c"
int main()
{
    CirNode *head=CreateNode('c');
    CloseCircular(head);
    PrintList(head);
    FreeList(head);
    return 0;

}