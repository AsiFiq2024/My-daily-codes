#include <stdio.h>
#include <math.h>

int dig_count(int a){
    int count = 0;
    while(a>0){
        a = a/10;
        count ++;
    }
    return count;
}

int main(){
    int m,n;
    int found = 0;
    scanf("%d",&m);
    scanf("%d",&n);
    int smallest = 0;
    int largest = 0;
    for(int num = m;num <= n; num++){
        int temp = num;
        int digits = dig_count(num);
        int sum = 0;
        for(int i = 0;i < digits;i++){
            while(temp > 0){
                int digit = temp%10;
                sum = sum + pow(digit,digits);
                temp = temp / 10;
            }
        }

        if(sum == num && found == 0){
            smallest = sum;
            found = 1;
        }
        else if(sum == num && found == 1){
            largest = sum;
            found = 1;
        }
    }
    if(smallest == 0 && largest == 0){
        printf("-1");
    }
    printf("%d %d",smallest,largest);
    return 0;
}
