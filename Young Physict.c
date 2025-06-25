#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;
    int x,y,z;
    for(int i = 0; i < n; i++){
        scanf("%d%d%d",&x,&y,&z);
        sum_x = sum_x + x;
        sum_y = sum_y + y;
        sum_z = sum_z + z;
    }
    if(sum_x == 0 && sum_y == 0 && sum_z == 0)
        printf("YES");
    else
        printf("NO");
}
