#include <stdio.h>

int main(){
    int t1,t2,t3;
    printf("Enter t1,t2 and t3: ");
    scanf("%d%d%d",&t1,&t2,&t3);
    t1 = (t1 % 6 + 6) % 6;
    t2 = (t2 % 6 + 6) % 6;
    t3 = (t3 % 6 + 6) % 6;
    int temp;
    if(t1>t2){
        temp = t1;
        t1 = t2;
        t2 = temp;
    }
    if(t2>t3){
        temp = t2;
        t2 = t3;
        t3 = temp;
    }
    if(t1>t3){
        temp = t1;
        t1 = t3;
        t3 = temp;
    }
    int u = 1;
    int f = 2;
    int s1,s2,s3,v1,v2,v3;
    switch(t1){
        case 0: v1 = u + f*0;
                s1 = u*0 + (f*0*0)/2;
                break;
        case 1: v1 = u + f*1;
                s1 = u*1 + (f*1*1)/2;
                break;
        case 2: v1 = u + f*2;
                s1 = u*2 + (f*2*2)/2;
                break;
        case 3: v1 = u + f*3;
                s1 = u*3 + (f*3*3)/2;
                break;
        case 4: v1 = u + f*4;
                s1 = u*4 + (f*4*4)/2;
                break;
        case 5: v1 = u + f*5;
                s1 = u*5 + (f*5*5)/2;
                break;
    }
    switch(t2){
        case 0: v2 = u + f*0;
                s2 = u*0 + (f*0*0)/2;
                break;
        case 1: v2 = u + f*1;
                s2 = u*1 + (f*1*1)/2;
                break;
        case 2: v2 = u + f*2;
                s2 = u*2 + (f*2*2)/2;
                break;
        case 3: v2 = u + f*3;
                s2 = u*3 + (f*3*3)/2;
                break;
        case 4: v2 = u + f*4;
                s2 = u*4 + (f*4*4)/2;
                break;
        case 5: v2 = u + f*5;
                s2 = u*5 + (f*5*5)/2;
                break;
    }
    switch(t3){
        case 0: v3 = u + f*0;
                s3 = u*0 + (f*0*0)/2;
                break;
        case 1: v3 = u + f*1;
                s3 = u*1 + (f*1*1)/2;
                break;
        case 2: v3 = u + f*2;
                s3 = u*2 + (f*2*2)/2;
                break;
        case 3: v3 = u + f*3;
                s3 = u*3 + (f*3*3)/2;
                break;
        case 4: v3 = u + f*4;
                s3 = u*4 + (f*4*4)/2;
                break;
        case 5: v3 = u + f*5;
                s3 = u*5 + (f*5*5)/2;
                break;
    }
    printf("Bar for velocity:\n");
    switch(v1){
        case 0: printf("v1: \n");
                break;
        case 1: printf("v1:*\n");
                break;
        case 2: printf("v1:**\n");
                break;
        case 3: printf("v1:***\n");
                break;
        case 4: printf("v1:****\n");
                break;
        case 5: printf("v1:*****\n");
    }
    switch(v2){
        case 0: printf("v2: \n");
                break;
        case 1: printf("v2:*\n");
                break;
        case 2: printf("v2:**\n");
                break;
        case 3: printf("v2:***\n");
                break;
        case 4: printf("v2:****\n");
                break;
        case 5: printf("v2:*****\n");
                break;
    }
    switch(v3){
        case 0: printf("v3: \n");
                break;
        case 1: printf("v3:*\n");
                break;
        case 2: printf("v3:**\n");
                break;
        case 3: printf("v3:***\n");
                break;
        case 4: printf("v3:****\n");
                break;
        case 5: printf("v3:*****\n");
                break;
    }
    printf("Bar for distance:\n");
    switch(s1){
        case 0: printf("s1: \n");
                break;
        case 1: printf("s1:*\n");
                break;
        case 2: printf("s1:**\n");
                break;
        case 3: printf("s1:***\n");
                break;
        case 4: printf("s1:****\n");
                break;
        case 5: printf("s1:*****\n");
                break;
    }
    switch(s2){
        case 0: printf("s2: \n");
                break;
        case 1: printf("s2:*\n");
                break;
        case 2: printf("s2:**\n");
                break;
        case 3: printf("s2:***\n");
                break;
        case 4: printf("s2:****\n");
                break;
        case 5: printf("s2:*****\n");
    }
    switch(s3){
        case 0: printf("s3: \n");
                break;
        case 1: printf("s3:*\n");
                break;
        case 2: printf("s3:**\n");
                break;
        case 3: printf("s3:***\n");
                break;
        case 4: printf("s3:****\n");
                break;
        case 5: printf("s3:*****\n");
    }

}
