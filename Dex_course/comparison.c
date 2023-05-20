#include <stdio.h>

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