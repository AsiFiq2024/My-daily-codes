#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b){
    return (*(int *)b - *(int *)a);
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    sum = sum / 2;
    qsort(a,n,sizeof(int),cmp);
    int my_sum = 0;
    for(int i = 1; i <= n; i++){
        my_sum = my_sum + a[i-1];
        if(sum < my_sum){
            printf("%d",i);
            return 0;
        }
    }
}
