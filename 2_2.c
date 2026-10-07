#include <stdio.h>
#include <stdbool.h>
int main(void){
    int a,b;
    bool x,y;
    printf("Введите 2 числа:");
    scanf("%d %d",&a,&b);
    x = a;
    y = b;
    int sum;
    sum = x+y;
    printf("\nMODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %d\nFLAGS_SUM: %d\n",x,y,sizeof(bool),sum);
    return 0;
}