#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long k = n / 2;
    long long sum_e = k*(k+1);
    long long sum_odd = (n-k)*(n-k);
    printf("%lld",sum_e - sum_odd);
}
