#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int addNumbers(int n);    //定义一个子函数//
int main()
{
    int n, i, sum = 0;
    printf("第一种方法，使用for\n");
    printf("输入一个正整数，确定从1加到这个正整数: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }
    printf("Sum = %d\n", sum);
    sum = 0;   //sum清零//
    printf("第二种方法，使用while\n");
    printf("输入一个正整数，确定从1加到这个正整数: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum += i;
        ++i;
    }
    printf("Sum = %d\n", sum);
    printf("第三种方法，使用递归\n");
    printf("输入一个正整数，确定从1加到这个正整数: ");
    scanf("%d", &n);
    printf("Sum = %d\n", addNumbers(n));
    system("pause");
    return 0;
}
int addNumbers(int m)
{
    if (m != 0)
        return m + addNumbers(m - 1);
    else
        return m;
}
