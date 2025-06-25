#include <stdio.h>

int pal_check(int a[],int start,int end){
    while(start < end){
        if(a[start] != a[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int max_len = 1;
    int start_idx = 0;
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            if(pal_check(a,start,end)){
                int len = end - start + 1;
                if(len > max_len){
                    max_len = len;
                    start_idx = start;
                }
            }
        }
    }
    printf("[");
    for(int i = start_idx; i < start_idx+max_len; i++){
        printf("%d",a[i]);
        if(i != start_idx + max_len - 1){
            printf(",");
        }
    }
    printf("]");
}
