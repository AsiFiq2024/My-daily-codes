#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[100];
    scanf("%100s",&a);
    int k =  strlen(a);
    int temp;
    for(int n = 0; n < k; n = n +2){
        for(int j = n + 2; j < k ; j = j + 2){
            if(a[n] > a[j]){
                temp = a[n];
                a[n] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int l = 0; l < k; l++){
        printf("%c",a[l]);
    }
    return 0;
}
