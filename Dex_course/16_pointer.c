#include <stdio.h>
/*
參考資料 : 
[T11] 【C 編程】拒絕不求甚解的硬背🙅‍♀️🙅‍♂️ Pointer 指標 指針 二級指標 二級指針 重要但不難理解 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=2B5Z9UxH0o
*/
int main () {
    int int_1 = 100;
    int int_2 = 200;

    //type* 變數 : 建立指標 儲存另一個變量地址的變量
    //&變數 : 取記憶體地址
    int* pointer_1 = &int_1;
    
    //用%p是最標準的作法，但%d呈現比較清晰
    printf("int_1的記憶體地址 : %p\n",pointer_1);
    printf("int_1的記憶體地址 : %d\n",pointer_1);
    printf("pointer_1 : %d\n",pointer_1);
    //反參照
    printf("pointer_1儲存的地址指向的變數的值 : %d\n",*pointer_1);

    //通過指標修改值
    *pointer_1 = 300;
    printf("int_1修改後的值 : %d\n",int_1);

    //指標指到別的記憶體位置
    pointer_1 = &int_2;
    printf("int_2 : %d\n",*pointer_1);



    
    //指標的記憶體運用
    int arr_1[8] = {1,2,3,4,5,6,7,8};
    //指輸入陣列名稱不會打印陣列
    //會顯示出array第0個位置的記憶體地址
    printf("arr_1 : %d \n", arr_1); 
    printf("*arr_1 : %d \n", *arr_1); 
    //取出arr每一個地址，與反參照
    for (int i=1;i<=7;i++){
        printf("arr第%d個地址 : %d \n", i, &arr_1[i]); 
        printf("直接顯示arr_1第%d的值 : %d \n", i, *&arr_1[i]);
        printf("用反參照抓出arr_1第%d的值 : %d \n", i, *&arr_1[i]);
    }


    //二級指標 the pointer of pointer
    int a = 100 ;
    int* pointer_a = &a;
    int** pointer_pointer_a = &pointer_a;

    printf("**pointer_pointer_a:%d", **pointer_pointer_a);
    


    
}