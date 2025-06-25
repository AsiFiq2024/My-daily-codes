#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    double sum = 0;
    int o;
    for(int i = 0; i < n; i++){
        scanf("%d",&o);
        sum = sum + o;
    }
    double percent = sum / n;
    printf("%f",percent);
}
