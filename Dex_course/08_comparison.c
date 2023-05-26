#include <stdio.h>

/*
參考資料 :
[T11] 【C 編程】 比較運算符 Comparison Operators (關聯式 Relational 、等式 Equality) 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=lqfF44WVBWA
*/

void main(){
    int a=20;
    int b=60;
    float c=20.0;
    float d=60.0;

    printf("%d",a<10);
    printf("%d",a<20);
    printf("%d",a<=20);
    printf("%d",a!=20); //不等於
    printf("%d",a==20);
    printf("%d",a==c);
    printf("%d",a<30);
    //允許int與float比較，但會有精確值的問題，不建議
}