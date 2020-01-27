#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct stack
{
int data;
struct stack* next;

}st;

void push(st** top, int data)
{
    st* new = (st*)malloc(sizeof(st));

    new->data = data;
    new->next = *top;
    *top = new;

}

int peek(st* top)
{
    return top->data;
}

int empty(st* top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
void pop(st** top)
{

        st* temp=*top;
        *top=(*top)->next;
        free(temp);
        temp=NULL;
}

int getMaxArea(int* hist, int n)
{
    //complete this function
        st* a=(st*)malloc(sizeof(st));
    long long int area,max;
    max=0;
    int x,i,dis;
    while(i<n)
    {
        if(empty(a)||hist[i]>=hist[peek(a)])
        {
            push(&a,i++);
        }
        else
        {
            x=hist[peek(a)];
            pop(&a);
            if(empty(a)==true)
            {
                dis=i;
            }
            else
            {
                dis=(i-peek(a)-1);
            }
            area=x*dis;
            if(max<area)
            {
                max=area;
            }
        }
    }
    while(empty(a)==false)
    {
        x=hist[peek(a)];
            pop(&a);
            if(empty(a)==true)
            {
                dis=i;
            }
            else
            {
                dis=(i-peek(a)-1);
            }
            area=x*dis;
            if(max<area)
            {
                max=area;
            }
    }
    return max;


}


int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);

    }

    int r = getMaxArea(arr, n);
    printf("%d", r);
    return 0;
}

