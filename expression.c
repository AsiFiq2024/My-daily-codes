#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int r1 = a+b*c;
    int r2 = a*(b+c);
    int r3 = a*b*c;
    int r4 = (a+b)*c;
    int r5 = a*b+c;
    int r6 = a+b+c;
    if(r1>=r2 && r1>=r3 && r1>=r4 && r1>=r5 && r1>=r6)
        printf("%d",r1);
    else if(r2>=r1 && r2>=r3 && r2>=r4 && r2>=r5 && r2>=r6)
        printf("%d",r2);
    else if(r3>=r1 && r3>=r2 && r3>=r4 && r3>=r5 && r3>=r6)
        printf("%d",r3);
    else if(r4>=r2 && r4>=r3 && r4>=r1 && r4>=r5 && r4>=r6)
        printf("%d",r4);
    else if(r5>=r2 && r5>=r3 && r5>=r1 && r5>=r4 && r5>=r6)
        printf("%d",r5);
    else
        printf("%d",r6);
}
