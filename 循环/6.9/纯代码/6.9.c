#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("����һ��ʹ��for\n");
    printf("��1��ʼ���������: ");
    scanf("%d", &n);
    printf("쳲���������: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    system("pause");
    printf("��������ʹ��while\n");
    t1 = 0, t2 = 1, nextTerm = 0;
    printf("���룬���ֵ������: ");
    scanf("%d", &n);
    printf("쳲���������: %d, %d, ", t1, t2);
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
