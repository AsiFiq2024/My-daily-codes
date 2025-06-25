#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);
    int ant = 0;
    int dan = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 'A')
            ant++;
        else
            dan++;
    }
    if(ant > dan)
        printf("Anton\n");
    else if(ant < dan)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}
