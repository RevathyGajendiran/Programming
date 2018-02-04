#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, k, i, j;   
    scanf("%d %d", &n, &k);
    int *a = malloc(sizeof(int) * n);  
    for(i = 0; i < n; i++){
       scanf("%d",&a[(n-k+i)%n]);
    }
    for (j = 0; j < n; j++) {
       printf("%d ", a[j]);
    }
    return 0;
}