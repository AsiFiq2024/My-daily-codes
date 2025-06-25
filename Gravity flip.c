#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int min,idx,temp;
    for(int i = 0; i < n-1; i++){
        min = a[i];
        idx = i;
        for(int j = i+1; j < n; j++){
            if(min > a[j]){
                min = a[j];
                idx = j;
            }
        }
        temp = a[idx];
        a[idx] = a[i];
        a[i] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
