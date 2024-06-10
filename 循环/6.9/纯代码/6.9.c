#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("方法一，使用for\n");
    printf("从1开始，输出几项: ");
    scanf("%d", &n);
    printf("斐波那契数列: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    system("pause");
    printf("方法二，使用while\n");
    t1 = 0, t2 = 1, nextTerm = 0;
    printf("输入，最大值不超过: ");
    scanf("%d", &n);
    printf("斐波那契数列: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;
    while (nextTerm <= n)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");
    system("pause");
    return 0;
}
