#include <stdio.h>

int main(){
    int n = 4;
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                count++;
                for(int l = j; l < n-1; l++){
                    a[l] = a[l+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("%d",count);
}
