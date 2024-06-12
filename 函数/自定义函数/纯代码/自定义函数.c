#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//
////比较两个数的最大值
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
//int avg(int n) {                         //定义avg()函数
//    int sum = 0;                         //变量初始化
//    int data;
//    int i = n;
//    printf("请输入%d个数据：\n", n);
//    while (i > 0)                          //求出所有数字的和
//    {
//        scanf("%d", &data);
//        sum += data;
//        i--;
//    }
//    int avg = sum / n;                    //求出平均值
//    return avg;                           //返回平均值
//}
//int main() {
//    int n;                               //n表示数字的数量
//    printf("请输入数据的个数：");
//    scanf("%d", &n);
//    int a = 0;
//    a = avg(n);                           //调用avg()函数
//    printf("这%d个数据的平均值是：%d\n", n, a);
//    return 0;
//}
//
//
//






int avg(int n) {                         //定义avg()函数
    int sum = 0;                         //变量初始化
    int data;
    int i = n;
    printf("请输入%d个数据：\n", n);
    while (i > 0)                          //求出所有数字的和
    {
        scanf("%d", &data);
        sum += data;
        i--;
    }
    int avg = sum / n;                    //求出平均值
    return avg;                           //返回平均值
}
int main() {
    int n;                               //n表示数字的数量
    printf("请输入数据的个数：");
    scanf("%d", &n);
    int a = 0;
    a = avg(n);                           //调用avg()函数
    printf("这%d个数据的平均值是：%d\n", n, a);
    return 0;
}