#include <stdio.h>

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