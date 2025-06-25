#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long k;
    scanf("%lld",&k);
    long long odd_count = (n+1)/2;
    if(k <= odd_count){
        printf("%lld",2*k-1);
    }
    else
        printf("%lld",2*(k-odd_count));
}
