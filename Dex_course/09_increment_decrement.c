#include <stdio.h>

/*
參考資料 :
[T11] 【C 編程】 不能搞錯前後綴！增減量運算符 Increment Decrement 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=PgJDMR6-AZ0
*/

void main () {
    int a = 1;
    a++;
    printf("a:%d \n",a);
    a--;
    printf("a:%d \n",a);
    //放前後有差，討論先取值還是先加減
    printf("a:%d \n",a++);//Post Increment(後綴增量) : 打印出a後才+1
    printf("a:%d \n",a);
    printf("a:%d \n",++a);//Pre Increment : 先+1後打印a
}