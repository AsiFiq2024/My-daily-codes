#include <stdio.h>
#include <string.h>

int main(){
    char a[101],b[101];
    scanf("%s",a);
    scanf("%s",b);
    int checker = 0;
    for(int i=0; i < strlen(a); i++){
        if(a[i] != b[strlen(b)-1-i]){
            checker++;
            break;
        }
    }
    if(strlen(a) != strlen(b))
        printf("NO");
    else if(checker == 0)
        printf("YES");
    else
        printf("NO");
}
