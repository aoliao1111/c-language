#define _CRT_SECURE_NO_WARNINGS
//

#include "stdio.h"

int main() {
    int m, n, k;//�������

    int a[16] = { 0 };
    printf("������һ��0~32767֮������֣�\n");
    scanf("%d", &n);
    printf("ʮ������%dת��Ϊ����������:\n", n);
    for (int i = 0; i < 15; ++i) {//forѭ����0-14�����λΪ����λ������ʼ��Ϊ0
        m = n % 2;//ȡ2������
        k = n / 2;//ȡ��2�����Ľ��
        n = k;
        a[i] = m;//��������������a������
    }

    for (int i = 15; i >= 0; i--) {//forѭ���������е�16��Ԫ�شӺ���ǰ���
        printf("%d", a[i]);
        if (i % 4 == 0) {//ÿ���4��Ԫ�أ����һ���ո�
            printf(" ");
        }
    }
}