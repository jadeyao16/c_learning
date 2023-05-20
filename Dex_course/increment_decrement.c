#include <stdio.h>

void main () {
    int a = 1;
    a++;
    printf("a:%d \n",a);
    a--;
    printf("a:%d \n",a);
    //放前後有差，討論先取值還是先加減
    printf("a:%d \n",a++);//Post Increment(後綴增量) : 打印出a後才+1
    printf("a:%d \n",a);
    printf("a:%d \n",++a);//Pre Increment : 先+1後打印a
}