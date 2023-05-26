#include <stdio.h>

/*
參考資料 :
[T11] 【C 編程】WHILE/ DO WHILE Loop 指定條件重複動作 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=347Dz4_1zOs
*/

int main (){
    
    // while(condition) - pre-test loop前測循環
    //先檢查條件，若為true在執行循環
    //無限循環 : while(1)
    int count = 0;
    int value = 0;
    while (value<=100) {
        count ++;
        value +=10;
        printf("count:%d\n",count);
        printf("value:%d\n",value);
    }

    //do .. while(condition) - post-test loop 後測循環
    //先進入迴圈一次，再判定條件
    int hour = 0 ;
    int min = 0;
    do{
        hour += 1;
        min += 60;
        printf("Hour:%d,Minute:%d\n",hour,min);
    }
    while (hour<1);

    //9*9乘法表
    int i=1;
    while ( i<10 ){
        int j=1;
        while ( j<10 ){
            printf("%4d",i*j);
            j+=1;
        }
        printf("\n");
        i+=1;
    }
}