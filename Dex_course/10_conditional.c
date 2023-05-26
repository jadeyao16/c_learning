#include <stdio.h>

/*
參考資料 :
[T11] 【C 編程】 {學生常犯錯誤 ?: } If-Else Conditionals 條件句 條件陳述式 Ternary Operators 三元條件運算符 教學 (中文字幕) (可調節速度)
https://www.youtube.com/watch?v=KbHug-GyUQA
*/

int main () {
    int score = 0;
    printf("Enter score: ");
    scanf("%d", &score);

    printf("Your score is : %d. ", score);

    if (score >= 50) {
        printf("PASS!");
    }

    else if (score>0) {
        printf("FAIL!");
    }

    else {
        printf("ZERO!");
    }
    
    /* 
    大括號內包含著一個獨立的代碼塊(Block)或者稱有效範圍(Scope)
    條件後面不用大括號也可，但只能寫一個動作
    */
    if (score>=50) printf("\nYa");
    else if (score>0) printf("\nOh~");
    else printf("\nNo");

    printf("\n");

    //三元條件運算 Ternary Operator (?:)
    //但一次只能寫一個動作，?:一定要一對出現
    //if else 示範
    score >= 50 ? printf("Pass!\n") : printf("FAIL!\n");
    // if elif else示範，可無限串
    score >= 50 ? printf("Pass!\n") : score>0 ? printf("FAIL\n") : printf("ZERO!\n");
    // 上句的另一種寫法
    printf (score > 50 ? "PASS!" : score > 0 ? "FAIL!" : "ZERO!");

}