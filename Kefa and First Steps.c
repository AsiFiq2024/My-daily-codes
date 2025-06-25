#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int count = 1;
    int max_count = 1;
    for(int i = 0; i < n-1; i++){
        if(a[i] <= a[i+1])
            count++;
        else
            count = 1;
        if(max_count < count)
            max_count = count;
    }
    printf("%d",max_count);
}
