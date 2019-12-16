#include<iostream>
#include"../include/link_list.h"

using namespace std;

int main(){

    LinkList list = creatLinkListAuto(7);
    printLinkList(list);

    insertNode(list,3,777);
    printLinkList(list);

    deleteNode(list,5);
    printLinkList(list);

    return 0;
}