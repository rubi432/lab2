#include <stdio.h>
#include <stdint.h>
int main(void){
    uint8_t a;
    uint8_t x,y,z;
    printf("введите число:");
    scanf("%hhu", &a);
    x = a + a;
    y = 2 * a;
    z = a * a;
    printf("ADD: %u\nMUL2: %u\nSQR: %u\n",x,((unsigned int)y),((unsigned int)z));
    return 0;
}