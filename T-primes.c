#include <stdio.h>
#include <math.h>

#define MAX 1000000

char is_prime[MAX + 1];

void sieve() {
    for (int i = 0; i <= MAX; i++) is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                is_prime[j] = 0;
        }
    }
}

int main() {
    sieve();

    int n;
    scanf("%d", &n);
    long long d;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &d);
        long long x = (long long)sqrt(d);

        if (x * x == d && is_prime[x])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
