#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();


// Complete the braces function below.

// Please store the size of the string array to be returned in result_count pointer. For example,
// char a[2][6] = {"hello", "world"};
//
// *result_count = 2;
//
// return a;
//
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

char** braces(int values_count, char** values, int* result_count) {

    st* a=(st*)malloc(sizeof(st));
    char** b=(char**)malloc(sizeof(char*)*values_count);
    int i,j,l;
    for(i=0;i<values_count;i++)
    {
        l=0;
        j=-1;
        char* s=(values[i]);
        int k=strlen(s);
        int c=0;
        while(l<k)
        {

        if(s[l]=='['||s[l]=='{'||s[l]=='(')
        {
            push(&a,s[l]);
            c++;
        }
        else
        {
            if((s[l]=='}'&&peek(a)=='{')||(s[l]==']'&&peek(a)=='[')||(s[l]==')'&&peek(a)=='('))
            {
                pop(&a);
                c--;
            }
            else
            {
                j=0;
            }
        }
        l++;
        }
        if(j==0||c!=0)
        {
            b[i]="NO";
        }
        else
        {
            b[i]="YES";
        }
    }
    *result_count=values_count;
    return b;


}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* values_count_endptr;
    char* values_count_str = readline();
    int values_count = strtol(values_count_str, &values_count_endptr, 10);

    if (values_count_endptr == values_count_str || *values_count_endptr != '\0') { exit(EXIT_FAILURE); }

    char** values = malloc(values_count * sizeof(char*));

    for (int i = 0; i < values_count; i++) {
        char* values_item = readline();

        *(values + i) = values_item;
    }

    int res_count;
    char** res = braces(values_count, values, &res_count);

    for (int i = 0; i < res_count; i++) {
        fprintf(fptr, "%s", *(res + i));

        if (i != res_count - 1) {
            fprintf(fptr, "\n");
        }
    }

    fprintf(fptr, "\n");

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
