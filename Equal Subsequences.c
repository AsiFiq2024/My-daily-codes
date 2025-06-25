#include <stdio.h>

void subseq_bit(int n,int k){
    int ones = 0,zeros = 0;
    for(int i = 0; i < k/2; i++){
        printf("1");
    }
    for(int i = 0; i < n-k; i++){
        printf("0");
    }
    for(int i = 0; i <k-k/2; i++){
        printf("1");
    }
    printf("\n");
}
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        scanf("%d%d",&n,&k);
        subseq_bit(n,k);
    }
}
