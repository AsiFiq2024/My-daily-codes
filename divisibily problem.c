#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long a,b;
    long long count;
    for(long long i = 0; i < n; i++){
        scanf("%lld%lld",&a,&b);
        if(a%b == 0)
            count = 0;
        else
            count = b - (a%b);
        printf("%lld\n",count);
    }
}
