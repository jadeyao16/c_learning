#include <stdio.h>

/*
參考資料 :
[T11] 【C 編程】 需要放 break 嗎? switch case 陳述式 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=5SUt4dWYnqw
*/

void main () {
    int floor = 0 ;
    printf("Enter a floor (1-5) :");
    scanf("%d", &floor);

    //沒用break 會從上到下
    //default是超出預設以外的輸出值
    switch (floor) {
        case 1 : printf("這裡是1樓\n");
        case 2 : printf("這裡是2樓\n");
        case 3 : printf("這裡是3樓\n");
        case 4 : printf("這裡是4樓\n");
        case 5 : printf("這裡是5樓\n");
        default : printf("到頂樓了\n");

    //用break，就不會在往下走
    //換行是為了方便閱讀
    switch (floor) {
        case 1 : 
            printf("這裡是1樓\n");
        case 2 : 
            printf("這裡是2樓\n");
            break ;
        case 3 : 
            printf("這裡是3樓\n");
        case 4 : 
            printf("這裡是4樓\n");
            break;
        case 5 : 
            printf("這裡是5樓\n");
        default : printf("到頂樓了");

    }



    }
}