#include <stdio.h>
#include <limits.h>
int main(void){
    printf("INT_MIN:%d\nINT_MAX:%d\nUINT_MAX:%u\n",INT_MIN,INT_MAX,UINT_MAX);
    int RANGE_OK = ((unsigned int)INT_MAX * 2u + 1u == UINT_MAX);
    printf("RANGE_OK:%d\n",RANGE_OK);
    return 0;
}