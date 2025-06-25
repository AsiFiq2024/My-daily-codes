#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    int n,s;
    int dx,dy,x,y;
    int count;
    for(int i = 0; i < t; i++){
        scanf("%d%d",&n,&s);
        count = 0;
        for(int j = 0; j < n; j++){
            scanf("%d%d%d%d",&dx,&dy,&x,&y);
            if((dx == 1 && dy == 1 && x == y) ||
                (dx == -1 && dy == -1 && x == y) ||
                (dx == -1 && dy == 1 && x + y == s) ||
                (dx == 1 && dy == -1 && x + y == s))
                    count++;
        }
        printf("%d\n",count);
    }
}
