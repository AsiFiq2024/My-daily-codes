#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    scanf("%s",a);
    int count = 0;
    int n = strlen(a);
    for(int i = 0; i < n ; i++){
        if(count == 0 && a[i] == 'h')
            count=1;
        else if(count == 1 && a[i] == 'e')
            count=2;
        else if(count == 2 && a[i] == 'l')
            count=3;
        else if(count == 3 && a[i] == 'l')
            count=4;
        else if(count == 4 && a[i] == 'o')
            count=5;
    }
    if(count == 5)
        printf("YES");
    else
        printf("NO");
}
