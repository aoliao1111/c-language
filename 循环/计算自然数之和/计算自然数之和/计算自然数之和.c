#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int addNumbers(int n);    //����һ���Ӻ���//
int main()
{
    int n, i, sum = 0;
    printf("��һ�ַ�����ʹ��for\n");
    printf("����һ����������ȷ����1�ӵ����������: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }
    printf("Sum = %d\n", sum);
    sum = 0;   //sum����//
    printf("�ڶ��ַ�����ʹ��while\n");
    printf("����һ����������ȷ����1�ӵ����������: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum += i;
        ++i;
    }
    printf("Sum = %d\n", sum);
    printf("�����ַ�����ʹ�õݹ�\n");
    printf("����һ����������ȷ����1�ӵ����������: ");
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
