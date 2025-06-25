#include <stdio.h>

int main(){
    int dec_num;
    char hex_num[100];
    int k;
    int ran = 1;
    printf("Enter a decimal number: ");
    scanf("%d",&dec_num);
    for(int i = 0; dec_num > 0; i++){
        k = dec_num % 16;
        if(k < 10){
            hex_num[i] = k + 48;
        }
        else{
            hex_num[i] = (k%10) + 65;
        }
        dec_num = dec_num / 16;
        ran++;
    }
    printf("The Hexadecimal value is: ");
    for(int j = ran; j >= 0 ; j--){
        printf("%c",hex_num[j]);
    }
    return 0;
}
