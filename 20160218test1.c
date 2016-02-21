#include"stdio.h"
#include"strings.h"
#include"stdlib.h"

struct node
{
    int data;
    struct node *pNext;

};
int main(void)
{
    struct node *pHeader = NULL;

    struct node *p = (struct node *)malloc(sizeof(struct node));
    if(NULL == p)
    {
        printf("malloc error!");
        return(-1);
    }
    /*�������뵽�Ķ��ڴ�*/
    memset(p,0,sizeof(struct node));
    p->data = 1;
    p->pNext = NULL;
    pHeader = p;
    /******************************/

    struct node *p1 = (struct node *)malloc(sizeof(struct node));
    if(NULL == p1)
    {
        printf("malloc error!");
        return(-1);
    }
    /*�������뵽�Ķ��ڴ�*/
    memset(p1,0,sizeof(struct node));
    p1->data = 2;
    p1->pNext = NULL;

    p->pNext = p1;

    /******************************************/
    struct node *p2 = (struct node *)malloc(sizeof(struct node));
    if(NULL == p2)
    {
        printf("malloc error!");
        return(-1);
    }
    /*�������뵽�Ķ��ڴ�*/
    memset(p2,0,sizeof(struct node));
    p2->data = 3;
    p2->pNext = NULL;
    p1->pNext = p2;

    printf("node1 data: %d\n",pHeader->data);
    printf("p->data: %d\n",p->data);

    printf("node2 data: %d\n",pHeader->pNext->data);
    printf("p1->data: %d\n",p1->data);

    printf("node3 data: %d\n",pHeader->pNext->pNext->data);
    printf("p2->data: %d\n",p2->data);


    return(0);
}
