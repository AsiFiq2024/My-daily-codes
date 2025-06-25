#include <stdio.h>
#include <math.h>

int main(){
    int num;
    scanf("%d",&num);
    int temp = num;
    int count = 0;
    while(temp > 0){
        temp /= 10;
        count++;
    }
    int sum = 0;
    int digit;
    for(int i = 0; i < count;i++){
        digit = num % 10;
        num /= 10;
        if(digit%2 == 0){
            sum = sum + (digit+1)*pow(10,i);
        }
        else{
            i--;
            count--;
        }
    }
    printf("%d",sum);
    return 0;
}
