#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i = 0; i < n-1; i++){
        int min = a[i];
        int idx = i;
        for(int j = i+1; j < n; j++){
            if(min > a[j]){
                min = a[j];
                idx = j;
            }
        }
        temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
    }
    printf("[");
    for(int i = 0; i < n-2; i++){
        if(i > 0 && a[i] == a[i-1])
            continue;
        for(int j = i+1; j < n-1; j++){
            if(j > i+1 && a[j] == a[j-1])
                continue;
            for(int k = j+1; k < n; k++){
                if(k > j+1 && a[k] == a[k-1])
                    continue;
                if(a[i]+a[j]+a[k] == 0){
                    printf("[%d,%d,%d] ",a[i],a[j],a[k]);
                }
            }
        }
    }
    printf("]");
}
