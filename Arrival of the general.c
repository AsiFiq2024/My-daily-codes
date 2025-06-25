#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int min = a[0];
    int max = a[0];
    int idx_min = 0;
    int idx_max = 0;
    for(int i = 1; i < n; i++){
        if(min >= a[i]){
            min = a[i];
            idx_min = i;
        }
        if(max < a[i]){
            max = a[i];
            idx_max = i;
        }
    }
    int time;
    if(idx_max > idx_min)
        time = (n-1-idx_min)+idx_max-1;
    else
        time = (n-1-idx_min)+idx_max;
    printf("%d",time);
}
