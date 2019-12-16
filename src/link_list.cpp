#include<iostream>
#include"../include/link_list.h"

using namespace std;

LinkList creatLinkListAuto(int len){
    LinkList L = (LinkList)malloc(sizeof(LinkList));
    L->next = nullptr;
    LinkList tempL = L;
    for(int i = 0; i < len; i++){
        LinkList p = (LinkList)malloc(sizeof(LinkList));
        p->data = i;
        tempL->next = p;
        tempL = p;
    }
    tempL->next = nullptr;
    return L;
}

void insertNode(LinkList L, int position, int data){
    LinkList tempL = L;
    LinkList p = (LinkList)malloc(sizeof(LinkList));
    p->data = data;
    int j=0;
    while(tempL && position > j){
        j++;
        tempL = tempL->next;
    }
    if(!tempL){
        cout<<"The position is beyong the lenght of link list!!!";
    }
    p->next = tempL->next;
    tempL->next = p;
}

void deleteNode(LinkList L, int position){
    LinkList tempL = L;
    int j=1;
    while(tempL && position > j){
        j++;
        tempL = tempL->next;
    }
    if(!tempL){
        cout<<"The position is beyong the lenght of link list!!!";
    }
    LinkList p = tempL->next;
    tempL->next = tempL->next->next;
    free(p);
}

void printLinkList(LinkList L){
    LinkList tempL = L->next;
    cout<<"print link list:"<<endl;
    while (tempL)
    {
        cout<<tempL->data<<endl;
        tempL = tempL->next;
    }
}