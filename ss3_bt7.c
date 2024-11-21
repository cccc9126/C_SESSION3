

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, num1, num2, num3, num4,tong;
    printf("hay nhap so co bon chu so ");
    scanf("%d", &num);
    num1 = num / 1000;
    num2 = (num - num1 * 1000)/100;
    num3 = (num - num1*1000-num2*100)/10;
    num4 = num - num1*1000-num2*100-num3*10;
    tong = num1 + num2 + num3 + num4;
    printf("tong 4 chu so la %d\n", tong);
    
    
    return 0;
}
