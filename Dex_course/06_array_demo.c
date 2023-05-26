#include <stdio.h>
/*
參考資料 : 
[T11] 【C 編程】 Array 陣列 與 Strings 字串 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=w3aQ2DzmbOU
*/

/* Array 
1.連貫的記憶位置(contiguous memory locations)
2.相同的元素(element)組成的數據結構(data structure)
*/

int main(void) {
    int int_array[6] = {10,20,30,40,50,60};
    printf("intarray[0]:%d \n",int_array[0]);
    int_array[0] = 100;
    printf("intarray[0]:%d \n",int_array[0]);

    char char_array[6] = "Hello";
    printf("chararray[0]:%c \n",char_array[0]);
    printf("chararray[5]:%c \n",char_array[5]);
    /*
    每一個String都要預留多一個Index給Null
    C語言在字串的結束碼，會自動在結尾加上，常用跳脫序列\0表示
    Char array要預留空間給null character
    否則會出現逾越邊界的情況
    */
    char str_array[6] = {'h','e','l','l','o','\0'};
    printf("strarray[0]:%s \n",str_array);
    
}