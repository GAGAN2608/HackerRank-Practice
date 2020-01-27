#include<iostream>
using namespace std;
struct node
{
int info;
node *link;
};
int main()
{
int i,k,key1,key2,item;
struct node *start,*n,*ptr,*loc1,*loc2,*loc1p,*loc2p;
cin>>item;
int c=0;
struct node *head , *first = NULL , *temp = NULL;
for(i=0;i<item;i++)
{
   head = (struct node *)malloc(sizeof(struct node));
   cin >> k;
   head->info = k;
   if(first==NULL)
   {
       first = head;
       temp = head;
   }
   else
   {
       temp->link = head;
       temp = head;
   }
}
temp->link = NULL;
struct node *prev = NULL , *curr = first , *next=first;
while(curr!=NULL){
    next = curr->link;
    curr->link=prev;
    prev=curr;
    curr=next;
//curr=curr->link;
}
first=prev;
cin>>key1>>key2;
ptr=first;
while(ptr!=NULL)
{
    cout << ptr->info << " ";
    ptr=ptr->link;
}

struct node *currkey1=first,*currkey2=first,*prevkey1=NULL,*prevkey2=NULL;
while(currkey1!=NULL&&currkey1->info!=key1)
{
    prevkey1=currkey1;
    currkey1=currkey1->link;
}

while(currkey2!=NULL&&currkey2->info!=key2)
{
    prevkey2=currkey2;
    currkey2=currkey2->link;
}

if(prevkey1!=NULL)
{
    prevkey1->link=currkey2;
}
else
{
    first=currkey2;
}

if(prevkey2!=NULL)
{
    prevkey2->link=currkey1;
}
else
{
    first=currkey1;
}

loc1=currkey2->link;
currkey2->link=currkey1->link;
currkey1->link=loc1;

cout << endl;
while(first!=NULL)
{
    cout << first->info << " ";
    first=first->link;
}

return 0;