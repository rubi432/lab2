#include <stdio.h>
#include <stdbool.h>
int main(void){
    int a = 10;
    int b = 010;
    int c = 0x10;
    printf("DEC_10:%d\nOCT_10:%d\nHEX_10:%d\n",a,b,c);
    printf("INT_SUFFIX: %d %d %d %d\n",sizeof(10),sizeof(10u),sizeof(10LL),sizeof(10ULL));
    printf("FLOAT_SUFFIX: %d %d %d\n",sizeof(0.1f),sizeof(0.1),sizeof(0.1L));
    printf("FLOAT_EQ: %d\n",0.1f==0.1);
    char x = 'A';
    char y = '\x41';
    char z = '\101';
    printf("CHAR_FORMS: %d %d %d\n",x,y,z);
    printf("CHAR_LIT_VAR_STR: %d %d %d\n",sizeof('A'),sizeof(x),sizeof("A"));










    return 0;
}