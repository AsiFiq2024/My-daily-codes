#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int c = 1;
    int N,temp;
    scanf("%d",&N);
    printf("%d %d %d",a,b,c);
    for(int i = 0; i < N - 3; i++){
        temp = a+b+c;
        printf(" %d",temp);
        a=b;
        b=c;
        c=temp;
    }
    return 0;
}
