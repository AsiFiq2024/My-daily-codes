#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int a1,b1,a2,b2,a3,b3;
    for(int i = 0; i < t; i++){
        scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
        if(a1 == a2 && a2 == a3 && b1+b2+b3 == a1)
            printf("yes\n");
        else if(b1 == b2 && b2 == b3 && a1+a2+a3 == b1)
            printf("yes\n");
        else if(b1 == b2 + b3 && a1 + a2 == b1)
            printf("yes\n");
        else if(b2 == b1 + b3 && a2 + a1 == b2)
            printf("yes\n");
        else if(b3 == b1 + b2 && a3 + a1 == b3)
            printf("yes\n");
        else if(a1 == a2 + a3 && b1 + b2 == a1)
            printf("yes\n");
        else if(a2 == a1 + a3 && b2 + b1 == a2)
            printf("yes\n");
        else if(a3 == a1 + a2 && b3 + b1 == a3)
            printf("yes\n");
        else
            printf("no\n");
    }
}
