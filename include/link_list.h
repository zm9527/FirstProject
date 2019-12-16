#ifndef __LINK_LIST__
#define __LINK_LIST__

typedef struct node
{
    int data;
    struct node *next;
}node,*LinkList;

LinkList creatLinkListAuto(int len);

void insertNode(LinkList L, int position, int data);

void deleteNode(LinkList L, int position);

void printLinkList(LinkList L);

#endif