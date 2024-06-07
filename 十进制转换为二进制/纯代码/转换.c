#define _CRT_SECURE_NO_WARNINGS
//

#include "stdio.h"

int main() {
    int m, n, k;//定义变量

    int a[16] = { 0 };
    printf("请输入一个0~32767之间的数字：\n");
    scanf("%d", &n);
    printf("十进制数%d转换为二进制数是:\n", n);
    for (int i = 0; i < 15; ++i) {//for循环从0-14，最高位为符号位，本例始终为0
        m = n % 2;//取2的余数
        k = n / 2;//取被2整除的结果
        n = k;
        a[i] = m;//将余数存入数组a数组中
    }

    for (int i = 15; i >= 0; i--) {//for循环将数组中的16个元素从后往前输出
        printf("%d", a[i]);
        if (i % 4 == 0) {//每输出4个元素，输出一个空格
            printf(" ");
        }
    }
}