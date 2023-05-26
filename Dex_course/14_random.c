#include <stdio.h>
#include <stdlib.h> // for srand() , rand()
#include <time.h> // for time()

/*
參考資料 :
[T11] 【C 編程】隨機數也有假？Random Number 產生隨機數 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=LC1eDnTBL-8
[T11] C/C++ 使用 rand 函數產生隨機亂數教學與範例程式碼
https://blog.gtwang.org/programming/c-cpp-rand-random-number-generation-tutorial-examples/
*/

/*
電腦並不能真的直接生成亂數
解決辦法是
預設了許多的亂數序列，
我們給定一個種子(Seed Random)，電腦會給我們一個亂數序列使用
固定的種子號碼，生成固定的亂數序列
而製造隨機的感覺就是
將種子設為現在時間
因為每次執行的時間不一樣
所以產生了生成亂數的感覺
也稱為偽隨機性 Pseudo-randomness
*/

void main () {
    srand(time(NULL));
    //srand() Seed Random 亂數種子
    //沒指定亂樹種子的話，會預設使用srand(1)
    printf("RAND_MAX=%d\n",RAND_MAX); // 呼叫亂數的最大值 RAND_MAX
    for (int i=1; i<=3; i++)
        printf("%8d\n",rand()); 

    //Modulus(%) 特定範圍整數亂數
    //用除數餘數控制隨機數範圍
    //這樣會將 rand 產生出來的整數轉換為 [min , max] 的整數亂數（也就是 min <= x <= max）
    //rand%10會得出0~9之間的整數
    //rand%20+1會得出1~21之間的整數
    //rand()%(最大值-最小值+1)+最小值 (參考理解方式,產生餘數+最小值)
    //但感覺直接理解比較快
    int int_min = 4;
    int int_max =20;
    for (int i=1; i<=3; i++)
        printf("%8d\n",rand()%(int_max-int_min+1)+int_min); //10~59之間的隨機數

    //特定範圍福點數亂數
    //可產生 [min , max) 之間的浮點數亂數
    double double_min = 3.6;
    double double_max = 7.8;
    double double_ran = (double_max-double_min)/(RAND_MAX+1.0) + double_min;
    printf("double_ran = %f\n", double_ran);
    //Q : 為何要加1，不懂


    //一萬次測試，是否真隨機
    //建立一個陣列，每次隨機選一個位置+1
    //完成後查看9個位置的值是否差不多
    int result[10];
    //初始化陣列數值
    for (int i=0; i<=9; i++)
        result[i] = 0;
    //陣列0~9隨機位置的值+1
    for (int i=1; i<=10000; i++)
        result[rand()%10]+=1; 
    for (int i=0; i<=9; i++)
        printf("result[%d] is %d.\n", i, result[i]);

    
    

}