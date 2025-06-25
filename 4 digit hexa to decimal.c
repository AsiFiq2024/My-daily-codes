#include <stdio.h>
#include <math.h>

int main(){
    char hex_dec[5];
    for(int i = 0; i < 4; i++){
        scanf("%c",&hex_dec[i]);
    }
    int dec_num = 0;
    for(int j = 0; j < 4; j++){
        if(hex_dec[j] >= 65){
            dec_num =  dec_num + (hex_dec[j]-55)*pow(16,3-j);
        }
        else{
            dec_num = dec_num + (hex_dec[j]-48)*pow(16,3-j);
        }
    }
    printf("The decimal value: %d",dec_num);
    return 0;
}
