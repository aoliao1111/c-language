#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
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
//}3
int getNum(int n) {
	//���ֻ��һ��Բ�̣�ֻ���ƶ�һ��
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return 2 * getNum(n - 1) + 1;          //��n>=2ʱ��f(n)=2*f(n-1)+1
	}
	return 0;
}
int main() {
	int n = 10, num;
	num = getNum(n);
	printf("��ŵ����%dƬԲ�̹����ƶ�%d��\n", n, num);
	return 0;
}

