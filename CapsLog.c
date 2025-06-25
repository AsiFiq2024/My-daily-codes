#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    scanf("%s",a);
    int n = strlen(a);
    for(int i = 1; i < n; i++){
        if('a' <= a[i] && a[i] <= 'z'){
            printf("%s",a);
            return 0;
        }
    }
    if('a' <= a[0] && a[0] <= 'z')
        a[0] = a[0] - ('a' - 'A');
    else{
        a[0] = a[0] + ('a' - 'A');
    }
    for(int i = 1; i < n; i++){
        if('A' <= a[i] && a[i] <= 'Z')
            a[i] = a[i] + ('a' - 'A');
    }
    printf("%s",a);
}
