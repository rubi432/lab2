#include <stdio.h>
int main(void){
    int unit_id;
    int unit_version;
    int unit_status;
    printf("Введите 3 числа через пробел:");
    scanf("%d %x %o",&unit_id,&unit_version,&unit_status);
    int sum = unit_id+unit_version+unit_status;
    printf("\nUnit_id:%d\nUnit_versions:%d\nUnit_status:%d\nSum:%d\n",unit_id,unit_version,unit_status,sum);
    return 0;
}