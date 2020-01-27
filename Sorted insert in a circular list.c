#include<stdio.h>
#include<stdlib.h>

/* structure for a node */
struct node
{
  int data;
  struct node *next;
};

void sortedInsert(struct node** head_ref, struct node* new_node)
{
    //complete the code
   struct node *c=*head_ref;
    if(c==NULL)
    {
        new_node->next=new_node;
        *head_ref=new_node;
    }
    else if(c->data >= new_node->data)
    {
        while(c->next != *head_ref)
        c = c->next;
        c->next = new_node;
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else {
        while (c->next!= *head_ref &&
        c->next->data < new_node->data)
        c = c->next;
        new_node->next = c->next;
        c->next = new_node;
    }

}

void printList(struct node *start)
{
  struct node *temp;

  if(start != NULL)
  {
    temp = start;

    do {
      printf("%d\n", temp->data);
      temp = temp->next;
    } while(temp != start);
  }
}

/* Driver program to test above functions */
int main()
{
  int arr; //= {12, 56, 2, 11, 1, 90};
  int list_size, i;

  /* start with empty linked list */
  struct node *start = NULL;
  struct node *temp;

  int n;
  scanf("%d",&n);

  /* Create linked list from the array arr[].
    Created linked list will be 1->2->11->56->12 */
  for(i = 0; i< n; i++)
  {
    temp = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&arr);
    temp->data = arr;
    sortedInsert(&start, temp);
  }

  printList(start);
  //getchar();
  return 0;
}
