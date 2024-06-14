#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
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
//}3
int getNum(int n) {
	//如果只有一个圆盘，只需移动一次
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return 2 * getNum(n - 1) + 1;          //当n>=2时，f(n)=2*f(n-1)+1
	}
	return 0;
}
int main() {
	int n = 10, num;
	num = getNum(n);
	printf("汉诺塔中%d片圆盘共需移动%d次\n", n, num);
	return 0;
}

