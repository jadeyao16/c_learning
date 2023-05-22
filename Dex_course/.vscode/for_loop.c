#include <stdio.h>
/*
for (initialization;iteration condition;increment)
for (初始化;迭代條件;增量)
*/
void main () {
    // Nested For Loop 9*9乘法表
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10 ; j+=1){
            printf("%4d",i*j); //%4d寬度為4
        }
        printf("\n");
    }

    //break + continute
    for (int i=1; i<=20; i+=1) {
        printf("Floor:%2d\n", i); //現在樓層
        if ( i%5==1 ) continue; //4+1樓跳過
        if ( i==9 ) break; //到9樓跳出迴圈
        printf("OK:%5d\n", i);
    }
    printf("\n");

    
    // 這一段寫法有意思，因為i%4==1的條件剛好符合第二條件i==9
    // 所以至始至終都沒用到第二條件，迴圈就一直跑到底
    for (int i=1; i<=20; i+=1) {
        printf("Floor:%2d\n", i); //現在樓層
        if ( i%4==1 ) continue; //4+1樓跳過
        if ( i==9 ) break; //到9樓跳出迴圈
        printf("OK:%5d\n", i);
    }
    
}