#include <stdio.h>

/*
參考資料 : 
[T11] 【C 編程】 Arithmetic 算術運算符、Type Casting 數據類型轉換、Assignment 賦值 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=t6vKUl5__3Y
*/

void main(){
    int a=20;
    int b=60;
    float c=20.0;
    float d=60.0;

    printf("a:%d,b:%d,c:%f,d:%f \n",a,b,c,d);
    // Assignment 賦值
    b=a+20;
    printf("a:%d,b:%d,c:%f,d:%f \n",a,b,c,d);

    b=a-20;
    printf("a:%d,b:%d,c:%f,d:%f \n",a,b,c,d);

    b=a*20;
    printf("a:%d,b:%d,c:%f,d:%f \n",a,b,c,d);

    b=a/20;
    printf("a:%d,b:%d,c:%f,d:%f \n",a,b,c,d);
    //餘數
    b=a%11;
    printf("a:%d,b:%d,c:%f,d:%f \n",a,b,c,d);



    // Shorthand/Compound Assignment Operators
    // += , -= , *= ,/= , %=
    b +=5 ;
    printf("a:%d,b:%d,c:%f,d:%f \n",a,b,c,d);

    //相同的資料型態才能做運算
    //雖然不會有錯誤訊息，但會算出錯的答案
    //錯誤的用法
    printf("(Wrong)a+c=%d \n",a+c);
    //正確；轉換資料型態後運算 Type Casting/Type Conversion
    printf("(Right)a+c=%d \n",a+(int) c);
    printf("(Right)a+c=%f \n",(float) a+c);





}