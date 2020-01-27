#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *res=NULL;

typedef struct node listnode;

listnode* listnode_new(int val) {
    listnode* node = (listnode *) malloc(sizeof(listnode));
    node->data = val;
    node->next = NULL;
    return node;
}

void addNode(listnode* A, int i){
    listnode* temp = listnode_new(i);
    listnode* t = A;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = temp;
}


struct node* attach(struct node * A,struct node * B)
{
    struct node *curr;
    struct node *curr1;
    if(A==NULL&&B==NULL) return NULL;
    while(A!=NULL&&B!=NULL)
    {
        if(A->data<=B->data)
        {
            curr=A->next;
            A->next=res;
            res=A;
            A=curr;
        }
        else
        {
            curr=B->next;
            B->next=res;
            res=B;
            B=curr;
        }
    }
    while(A!=NULL)
    {
        curr=A->next;
        A->next=res;
        res=A;
        A=curr;
    }
    while(B!=NULL)
    {
        curr=B->next;
        B->next=res;
        res=B;
        B=curr;
    }
    return res;
}
void print(listnode * head)
{
    struct node *curr;
    curr=head;
    while(curr->data!=0)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
}

int main()
{
    int n,i,v,a,b;
    listnode* A = listnode_new(v);
    listnode* B = listnode_new(v);
    for(i=0;i<3;i++){
        scanf("%d",&v);
        addNode(A,v);
    }
    for(i=0;i<3;i++){
        scanf("%d",&v);
        addNode(B,v);
    }
   // A=sort(A->next);
   // B=sort(B->next);
   // A=reverse(A->next);
    //B=reverse(B->next);
    res=attach(A,B);
    print(res);
    printf("\n");
//    print(B);
    return 0;
}

