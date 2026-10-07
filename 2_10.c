#include <stdio.h>
#include <stdint.h>
int main(void){
    int packed_id;
    float voltage;
    uint8_t code;
    scanf("%x %o %f", &packed_id, &code, &voltage);
    uint16_t sum=packed_id+code;
    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR:%c\nVOLTAGE: %.2f\nCHECKSUM: %u\n",packed_id,code,code,voltage,sum);





    return 0;
}