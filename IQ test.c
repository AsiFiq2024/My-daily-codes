#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int even_count = 0;
    int odd_count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        if(a[i]%2 == 0)
            even_count++;
        else
            odd_count++;
    }
    for(int i = 0; i < n; i++){
        if(even_count > odd_count && a[i]%2 != 0){
            printf("%d",i+1);
            break;
        }
        else if(odd_count > even_count && a[i]%2 == 0){
            printf("%d",i+1);
            break;
        }
    }
}
