#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//
////�Ƚ������������ֵ
//int MAX(num1,num2)
//{
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 20;
//	int max =MAX(num1, num2);
//	printf("%d" , max );
//
//
//	return 0;
//}


//
//int avg(int n) {                         //����avg()����
//    int sum = 0;                         //������ʼ��
//    int data;
//    int i = n;
//    printf("������%d�����ݣ�\n", n);
//    while (i > 0)                          //����������ֵĺ�
//    {
//        scanf("%d", &data);
//        sum += data;
//        i--;
//    }
//    int avg = sum / n;                    //���ƽ��ֵ
//    return avg;                           //����ƽ��ֵ
//}
//int main() {
//    int n;                               //n��ʾ���ֵ�����
//    printf("���������ݵĸ�����");
//    scanf("%d", &n);
//    int a = 0;
//    a = avg(n);                           //����avg()����
//    printf("��%d�����ݵ�ƽ��ֵ�ǣ�%d\n", n, a);
//    return 0;
//}
//
//
//






int avg(int n) {                         //����avg()����
    int sum = 0;                         //������ʼ��
    int data;
    int i = n;
    printf("������%d�����ݣ�\n", n);
    while (i > 0)                          //����������ֵĺ�
    {
        scanf("%d", &data);
        sum += data;
        i--;
    }
    int avg = sum / n;                    //���ƽ��ֵ
    return avg;                           //����ƽ��ֵ
}
int main() {
    int n;                               //n��ʾ���ֵ�����
    printf("���������ݵĸ�����");
    scanf("%d", &n);
    int a = 0;
    a = avg(n);                           //����avg()����
    printf("��%d�����ݵ�ƽ��ֵ�ǣ�%d\n", n, a);
    return 0;
}