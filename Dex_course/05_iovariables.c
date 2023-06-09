#include <stdio.h>
#include <stdbool.h>

/*
參考資料 :
[T11] 【C 編程】 Input Output (scanf, printf), Variables, Data Types, 輸出輸入 變量 數據類型 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=m0IYyYmgZds
[T11] C 語言的宣告、定義、儲存類型 (storage class) 與連結性 (linkage)
https://dev.to/codemee/c-yu-yan-de-xuan-gao-ding-yi-chu-cun-lei-xing-storage-class-yu-lian-jie-xing-linkage-4p1d
*/

//float 表現實數的近似數值 (無法精確表示)

/*
15:08有討論到 stdin buffer輸入緩衝區的概念，
呈現的東西會跟輸入的值不同可參考此段
fflush 可以洗去前stdin buffer裡的值
*/



void main(void) {

    // integer
    int a; //Declaration 宣告
    a=0; //Initialize 初始化；初值設定
    // 以上兩行，宣告+初值設定 = Definition(定義)
    // 變數能多次宣告，但只能定義一次
    int b=1; //兩步合為一步
    printf("The value of a is %d. \n",a); // %d 整數

    // Float 浮點數
    float c =12.3 ;
    printf("The value of c is %f. \n",c);

    // Character 字符
    char d= 'D';
    printf("The value of d is %c. \n",d); 
    //單引號單個字元；雙引號釋放字串(多個字元)

    // Bool 布林
    bool e = 1;
    //布林沒有格式規格語法，免強能用%d替代
    printf("The value of d is %d. \n",e); 

    // input
    int f = 123;
    printf("The value of f is %d. \n",f);
    printf("Enter a new value for f. \n");
    scanf("%d", &f);
    printf("The value of f is %d. \n",f);

}



