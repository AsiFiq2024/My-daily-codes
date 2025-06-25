#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char a[101];
    for(int i = 0; i < n; i++){
        fgets(a,sizeof(a),stdin);
        a[strcspn(a,"\n")] = '\0';
        int len = strlen(a);
        for(int j = 0; j < len; j++){
            if(j == 0)
                printf("%c",a[j]);
            else{
                if(a[j-1] == ' ')
                    printf("%c",a[j]);
            }
        }
        printf("\n");
    }
}
