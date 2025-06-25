#include <stdio.h>
#include <string.h>

int main(){
    char a[101],b[101];
    scanf("%s",a);
    scanf("%s",b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len;
    if(len_a > len_b)
        len = len_a;
    else
        len = len_b;
    for(int i = 0; i < len; i++){
        if(a[i] == b[i])
            printf("0");
        else
            printf("1");
    }
}
