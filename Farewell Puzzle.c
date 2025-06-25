#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m];
    for(int i = 0; i < m; i++){
        scanf("%d",&a[i]);
    }
    int idx,min;
    for(int i = 0; i < m-1; i++){
        min = a[i];
        idx = i;
        for(int j = i+1; j < m; j++){
            if(min > a[j]){
                min = a[j];
                idx = j;
            }
        }
        a[idx] = a[i];
        a[i] = min;
    }
    int min_p = a[n-1] - a[0];
    for(int i = 1; i < m-n+1; i++){
        if(min_p > a[i+n-1]-a[i])
            min_p = a[i+n-1] - a[i];
    }
    printf("%d",min_p);
}
