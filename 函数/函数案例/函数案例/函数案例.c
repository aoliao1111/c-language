#define _CRT_SECURE_NO_WARNINGS
////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int avg(int n) {                         //����avg()����
////    int sum = 0;                         //������ʼ��
////    int data;
////    int i = n;
////    printf("������%d�����ݣ�\n", n);
////    while (i > 0)                          //����������ֵĺ�
////    {
////        scanf("%d", &data);
////        sum += data;
////        i--;
////    }
////    int avg = sum / n;                    //���ƽ��ֵ
////    return avg;                           //����ƽ��ֵ
////}
////int main() {
////    int n;                               //n��ʾ���ֵ�����
////    printf("���������ݵĸ�����");
////    scanf("%d", &n);
////    int a = 0;
////    a = avg(n);                           //����avg()����
////    printf("��%d�����ݵ�ƽ��ֵ�ǣ�%d\n", n, a);
////    return 0;
////}3
////int getNum(int n) {
////	//���ֻ��һ��Բ�̣�ֻ���ƶ�һ��
////	if (n == 1)
////	{
////		return 1;
////	}
////	else
////	{
////		return 2 * getNum(n - 1) + 1;          //��n>=2ʱ��f(n)=2*f(n-1)+1
////	}
////	return 0;
////}
////int main() {
////	int n = 10, num;
////	num = getNum(n);
////	printf("��ŵ����%dƬԲ�̹����ƶ�%d��\n", n, num);
//////	return 0;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
////���ɼ�Ԥ��
//int sex = 0;                       //�Ա����ⲿ���룬�������ܳɼ��ǿ��Ա������Ա�ĳ���
////����ָ��
//int countBMI(int sex) {
//	float weight, height;
//	printf("�������������أ�kg������ߣ�m����");
//	scanf("%f%f", &weight, &height);
//	float BMI = weight / (height * height);
//	int sco = 0;
//	switch (sex)
//	{
//	case 0:                                 //����
//		if (BMI > 17.9 && BMI < 23.9)
//		{
//			sco = 100;
//		}
//		else if (BMI <= 17.8 || (BMI > 24.0 && BMI < 27.9))
//		{
//			sco = 80;
//		}
//		else
//		{
//			sco = 60;
//		}
//		break;
//	case 1:
//		if (BMI > 17.2 && BMI < 23.9)
//		{
//			sco = 100;
//		}
//		else if (BMI <= 17.1 || (BMI > 24.0 && BMI < 27.9))
//		{
//			sco = 80;
//		}
//		else
//		{
//			sco = 60;
//		}
//		break;
//	default:
//		sco = 0;
//	}
//	printf("����ָ��Ϊ��%.2f,�ɼ�Ϊ��%d\n", BMI, sco);
//	return sco;
//}
////�λ���
//int countFVC(int sex) {
//	int FVC, sco;
//	printf("������λ�����ml����");
//	scanf("%d", &FVC);
//	switch (sex)
//	{
//	case 0:                                 //����
//		if (FVC > 4800)
//		{
//			sco = 100;
//		}
//		else if (FVC > 4180 && FVC <= 4800)
//		{
//			sco = 80;
//		}
//		else if (FVC > 3100 && FVC <= 4180)
//		{
//			sco = 60;
//		}
//		else
//		{
//			sco = 30;
//		}
//		break;
//	case 1:
//		if (FVC > 3400)
//		{
//			sco = 100;
//		}
//		else if (FVC > 3000 && FVC <= 3400)
//		{
//			sco = 80;
//		}
//		else if (FVC > 2050 && FVC <= 3000)
//		{
//			sco = 60;
//		}
//		else
//		{
//			sco = 30;
//		}
//		break;
//	default:
//		break;
//	}
//	return sco;
//}
////��������
//int countChinups() {
//	if (sex == 1)
//	{
//		printf("��������Ϊ����������Ŀ��\n");
//		Sleep(2000);
//		exit(0);
//	}
//	int UPs = 0, sco = 0;
//	printf("�������ϼ���Ϊ��");
//	scanf("%d", &UPs);
//	if (UPs > 19)
//	{
//		sco = 100;
//	}
//	else if (UPs > 15 && UPs <= 19)
//	{
//		sco = 80;
//	}
//	else if (UPs > 10 && UPs <= 15)
//	{
//		sco = 60;
//	}
//	else
//	{
//		sco = 30;
//	}
//	return sco;
//}
////��������
//int countSitup() {
//	if (sex == 0)
//	{
//		printf("��������ΪŮ��������Ŀ��\n");
//		Sleep(2000);
//		exit(0);
//	}
//	int UPs = 0, sco = 0;
//	printf("������������Ϊ��");
//	scanf("%d", &UPs);
//	if (UPs > 56)
//	{
//		sco = 100;
//	}
//	else if (UPs > 52 && UPs <= 56)
//	{
//		sco = 80;
//	}
//	else if (UPs > 26 && UPs <= 52)
//	{
//		sco = 60;
//	}
//	else
//	{
//		sco = 30;
//	}
//	return sco;
//}
////�ܳɼ�
//void getNum() {
//	int BMI, FVC, Sups;
//	int Cups = 0;
//	double num;
//	//��ȡÿһ��ɼ�
//	BMI = countBMI(sex);
//	FVC = countFVC(sex);
//	//����ɼ�
//	if (sex == 0) {
//		Cups = countChinups();              //����������ȡ�������ϸ���
//		num = BMI * 0.25 + FVC * 0.35 + Cups * 0.4;
//	}
//	else
//	{
//		Sups = countSitup();                //����Ů����ȡ������������
//		num = BMI * 0.25 + FVC * 0.35 + Sups * 0.4;
//	}
//	//�жϳɼ�����
//	if (num > 95)
//	{
//		printf("�ۺϳɼ�Ϊ%.2f,����\n", num);
//	}
//	else if (num > 80 && num <= 95)
//	{
//		printf("�ۺϳɼ�Ϊ%.2f,����\n", num);
//	}
//	else if (num > 60 && num <= 80)
//	{
//		printf("�ۺϳɼ�Ϊ%.2f,����\n", num);
//	}
//	else
//	{
//		printf("�ۺϳɼ�Ϊ%.2f,������\n", num);
//	}
//}
////�˵�
//int menu() {
//	int sec;
//	printf("���ܲ˵�\n");
//	printf("===============\n");
//	printf("1.����ָ��BMI\n");
//	printf("2.�λ���FVC\n");
//	printf("3.��������\n");
//	printf("4.��������\n");
//	printf("5.�ܳɼ�\n");
//	printf("0.�˳�\n");
//	printf("===============\n");
//	printf("�������Ա��У�0/Ů��1����\n");
//	scanf("%d", &sex);
//	while (sex != 0 && sex != 1)
//	{
//		printf("ѡ������\n���������룺");
//		scanf("%d", &sex);
//	}
//	printf("������Ҫѡ��Ĺ��ܣ�");
//	scanf("%d", &sec);
//	while (sec > 5 || sec < 0)
//	{
//		printf("ѡ������\n���������룺");
//		scanf("%d", &sec);
//	}
//	return sec;
//}
//int main() {
//	int sec = menu();                   //���ò˵���������ȡѡ��ı��
//	switch (sec)                        //���ܵ���   
//	{
//	case 0:exit(0); break;
//	case 1:countBMI(sex); break;
//	case 2:countFVC(sex); break;
//	case 3:countChinups(); break;
//	case 4:countSitup(); break;
//	case 5:getNum(); break;
//	default:
//		break;
//	}
//	return 0;
//}


//
//
//
//#include <stdio.h>
//int subscript;
//
//void InitArray(int a[], int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		printf("�������%d�����ݣ�\n", i + 1);
//		scanf("%d", &a[i]);
//	}
//}
//
//int PrintArray(int a[], int len)
//{
//	int i;
//	int max;
//	max = a[0];
//	for (i = 0; i < len; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			subscript = i;
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int a[10];
//	int max;
//	int len = sizeof(a) / sizeof(a[0]);
//
//	InitArray(a, len);
//	max = PrintArray(a, len);
//
//	printf("���ֵ��%d,���ֵ���±���%d\n", max, subscript + 1);
//
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int fib(int i);
//
//int main()
//{
//	int a;
//	printf("������쳲��������е����һ���������");
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		printf("fib(%d)=%d\n", i, fib(i));
//	}
//	return 0;
//}
//
//int fib(int i)
//{
//	if (i == 1 || i == 2)
//	{
//		return 1;
//	}
//	else if (i > 2)
//	{
//		return fib(i - 1) + fib(i - 2);
//	}
//}
//

//
//#include <stdio.h>
//
//int PrintResult(int data1, int data2)
//{
//	int result;
//	result = data1 + data2;
//
//	printf("�β�data1=%d,��ַΪ%p\n", data1, &data1);
//	printf("�β�data2=%d,��ַΪ%p\n", data2, &data2);
//
//	return result;
//}
//
//int main()
//{
//	int data1 = 10;
//	int data2 = 20;
//	int result;
//
//	result = PrintResult(data1, data2);
//
//	printf("ʵ��data1=%d,��ַΪ%p\n", data1, &data1);
//	printf("ʵ��data2=%d,��ַΪ%p\n", data2, &data2);
//	printf("result = %d\n", result);
//
//	return 0;
//}





#include<stdio.h>

int temperatureTrend(int* temperatureA, int temperatureASize, int* temperatureB, int temperatureBSize)
{
    int y = 0;
    int r = 0;
    int arr1[] = { 0 };
    int arr2[] = { 0 };
    int arr3[] = { 0 };
    int arr4[] = { 0 };
    for (y = 0; y < temperatureASize; y++)
    {
        if (temperatureA[y] < temperatureA[y + 1])
        {
            arr1[y] = 0;
        }
        else if (temperatureA[y] == temperatureA[y + 1])
        {
            arr1[y] = 1;
        }
        else if (temperatureA[y] > temperatureA[y + 1])
        {
            arr1[y] = 2;
        }
        else if (temperatureB[y] < temperatureB[y + 1])
        {
            arr1[y] = 0;
        }
        else if (temperatureB[y] == temperatureB[y + 1])
        {
            arr1[y] = 1;
        }
        else if (temperatureB[y] > temperatureB[y + 1])
        {
            arr1[y] = 2;
        }
    }
    printf("%s", arr4);



    for (r = 0; r < temperatureASize; r++)
    {
        if (arr1[r] == arr2[r])
        {
            arr3[r] + 1;
            arr4[r] = arr3[r];
        }
        else
        {
            memset(arr3, 0, sizeof arr3);
        }
    }



}



int main()
{
    int temperatureA[] = { 0 };
    int temperatureB[] = { 0 };
    for (int i = 0; i < 1000; i++)
    {
        scanf("%s %s", &  temperatureA[i], & temperatureB[i]);
        
    }

    int temperatureASize = sizeof(temperatureA) / sizeof(temperatureA[0]);
    int temperatureBSize = sizeof(temperatureB) / sizeof(temperatureB[0]);
    temperatureTrend(&temperatureA,  temperatureASize, &temperatureB,  temperatureBSize);




    return 0;
}