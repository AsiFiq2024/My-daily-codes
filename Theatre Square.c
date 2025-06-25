#include <stdio.h>
#include <math.h>

int main(){
    long long n,m,a;
    scanf("%lld%lld%lld",&n,&m,&a);
    long long width = (n+a-1)/a;
    long long length = (m+a-1)/a;
    long long total = width*length;
    printf("%lld",total);
}
