#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
 * Complete the function below.
 * Please store the size of the int array to be returned in result_size pointer. For example,
 * int a[3] = {1, 2, 3};
 * *result_size = 3;
 * return a;
 * 
 */
int lowerIndex(int arr[], int n, int x) 
{ 
    int l = 0, h = n - 1; 
    while (l <= h) { 
        int mid = (l + h) / 2; 
        if (arr[mid] >= x) 
            h = mid - 1; 
        else
            l = mid + 1; 
    } 
    return l; 
} 
  
// function to find last index <= y 
int upperIndex(int arr[], int n, int y) 
{ 
    int l = 0, h = n - 1; 
    while (l <= h) { 
        int mid = (l + h) / 2; 
        if (arr[mid] <= y) 
            l = mid + 1; 
        else
            h = mid - 1; 
    } 
    return h; 
} 
 int comparator(const void *p,const void *q)
{
    int l=*(const int*)p;
    int r=*(const int*)q;
    if(l>r)
    return 1;
    else if(l<r)
    return -1;
    else 
    return 0;
}

int* jobOffers(int scores_size, int* scores, int lowerLimits_size, int* lowerLimits, int upperLimits_size, int* upperLimits, int* result_size) 
{
    int *arr=(int *)malloc(lowerLimits_size*sizeof(int));

    qsort((int*) scores,scores_size,sizeof(scores[0]),comparator);

    int i=0;
    while(i<lowerLimits_size)
   {
     int l=lowerIndex(scores,scores_size,lowerLimits[i]);
     int u=upperIndex(scores,scores_size,upperLimits[i]);  
     arr[i]=u-l+1; 
    i++;
   }

  *result_size=lowerLimits_size;
  return arr;
}

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    int* res;
int res_size;
    int scores_size = 0;
    scanf("%d\n", &scores_size);

    int scores[scores_size];
    for(int i = 0; i < scores_size; i++) {
        int scores_item;
        scanf("%d", &scores_item);
        scores[i] = scores_item;
    }

    int lowerLimits_size = 0;
    scanf("%d\n", &lowerLimits_size);

    int lowerLimits[lowerLimits_size];
    for(int i = 0; i < lowerLimits_size; i++) {
        int lowerLimits_item;
        scanf("%d", &lowerLimits_item);
        lowerLimits[i] = lowerLimits_item;
    }

    int upperLimits_size = 0;
    scanf("%d\n", &upperLimits_size);

    int upperLimits[upperLimits_size];
    for(int i = 0; i < upperLimits_size; i++) {
        int upperLimits_item;
        scanf("%d", &upperLimits_item);
        upperLimits[i] = upperLimits_item;
    }

    res = jobOffers(scores_size, scores, lowerLimits_size, lowerLimits, upperLimits_size, upperLimits, &res_size);
    for (int res_i = 0; res_i < res_size; res_i++) {

        fprintf(f, "%d\n", res[res_i]);

    }


    fclose(f);
    return 0;
}
