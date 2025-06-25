#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int temp = n;
    int count = 0;
    while(n>0){
        if(!(n % 10 == 4 || n % 10 == 7)){
            count++;
            break;
        }
        n /= 10;
    }
    if(count == 0)
        printf("YES\n");
    else{

        if(temp % 4 == 0 || temp % 7 == 0)
            printf("YES\n");
        else if(temp%47==0||temp%477==0||temp%74==0||temp%474==0||temp%447==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
