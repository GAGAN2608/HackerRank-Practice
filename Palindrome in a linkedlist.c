#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

typedef struct ListNode listnode;

listnode* listnode_new(int val) {
	listnode* node = (listnode *) malloc(sizeof(listnode));
	node->val = val;
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

/*
 * Complete the function below.
 */
int isPalin(listnode* A){

listnode* curr=A;
int j=0;
while(curr)
{
    j++;
    curr=curr->next;
}
//printf("%d",j);
int a[j/2];
curr=A;
int i=0;
while(curr&&i<j/2)
{
    a[i++]=curr->val;
    curr=curr->next;
}
/*for(i=0;i<j/2;i++)
{
    printf("%d ",a[i]);
}*/
//printf("\n%d",curr->val);

int k=i;
i=0;
if(j%2==0)
{
    while(curr)
    {
        if(a[--k]==curr->val)
        {
            i++;
        }
        curr=curr->next;
    }
}
else
{
    curr=curr->next;
    while(curr)
    {
        if(a[--k]==curr->val)
        {
            i++;
        }
        curr=curr->next;
    }
}
if(i==j/2)
{
    return 1;
}
else
return 0;
}
int main(){
	int count = 0;
	int i;
	int v;
	scanf("%d",&count);
	scanf("%d",&v);
	listnode* A = listnode_new(v);
	for(i=0;i<count-1;i++){
		scanf("%d",&v);
		addNode(A,v);
	}
	if(isPalin(A) == 1) printf("true");
	else printf("false");
}
