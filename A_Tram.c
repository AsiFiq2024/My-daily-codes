#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int max = 0;
    int enter,exit;
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d %d",&exit,&enter);
        sum = sum + enter - exit;
        if(max < sum)
            max = sum;
    }
    printf("%d",max);
}
