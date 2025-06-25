#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int min = a[0];
    int min_idx;
    for(int i = 1; i < n; i++){
        if(min > a[i]){
            min = a[i];
            min_idx = i;
        }
    }
    int max = a[min_idx];
    for(int i = min_idx; i < n; i++){
        if(max < a[i])
            max = a[i];
    }
    int prof = max - min;
    printf("%d",prof);
}
