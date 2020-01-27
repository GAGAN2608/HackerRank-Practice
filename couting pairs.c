#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);


/*
 * Complete the 'countPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY numbers
 *  2. INTEGER k
 */
 void mergesort(int arr[],int l,int r,int mid)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++)
    {
        R[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;

    }
}
void divide(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        divide(arr,l,mid);
        divide(arr,mid+1,r);
        mergesort(arr,l,r,mid);
    }
}
/*
bool search(int l,int a[],int n,int b)
{
    int mid,r=n;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==b)
        {
            return true;
        }
        else if(a[mid]>b)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    return false;
}*/
int countPairs(int numbers_count, int* numbers, int k) {
    divide(numbers,0,numbers_count-1);
    int a[numbers_count];
    int i=0,j=0,l=0,r=0,count=0;
    a[j]=numbers[i];
    j++;
    for(i=1;i<numbers_count;i++)
    {
        if(numbers[i]!=numbers[i-1])
        {
            //j++;
            a[j]=numbers[i];
            j++;
        }
    }

    while(l<j && r<j)
    {
        if(a[l]-a[r]==k)
        {
            l++;
            r++;
            count++;
        }
        else if(a[l]-a[r]>k)
        {
            r++;
        }
        else if(a[l]-a[r]<k)
        {
            l++;
        }

    }
       // for(i=0;i<j;i++)
    //{
      //  printf("%d ",a[i]);
    //}
    return count;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int numbers_count = parse_int(ltrim(rtrim(readline())));

    int* numbers = malloc(numbers_count * sizeof(int));

    for (int i = 0; i < numbers_count; i++) {
        int numbers_item = parse_int(ltrim(rtrim(readline())));

        *(numbers + i) = numbers_item;
    }

    int k = parse_int(ltrim(rtrim(readline())));

    int result = countPairs(numbers_count, numbers, k);

    fprintf(fptr, "%d\n", result);

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

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
