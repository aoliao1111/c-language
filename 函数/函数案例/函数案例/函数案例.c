#define _CRT_SECURE_NO_WARNINGS
////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int avg(int n) {                         //定义avg()函数
////    int sum = 0;                         //变量初始化
////    int data;
////    int i = n;
////    printf("请输入%d个数据：\n", n);
////    while (i > 0)                          //求出所有数字的和
////    {
////        scanf("%d", &data);
////        sum += data;
////        i--;
////    }
////    int avg = sum / n;                    //求出平均值
////    return avg;                           //返回平均值
////}
////int main() {
////    int n;                               //n表示数字的数量
////    printf("请输入数据的个数：");
////    scanf("%d", &n);
////    int a = 0;
////    a = avg(n);                           //调用avg()函数
////    printf("这%d个数据的平均值是：%d\n", n, a);
////    return 0;
////}3
////int getNum(int n) {
////	//如果只有一个圆盘，只需移动一次
////	if (n == 1)
////	{
////		return 1;
////	}
////	else
////	{
////		return 2 * getNum(n - 1) + 1;          //当n>=2时，f(n)=2*f(n-1)+1
////	}
////	return 0;
////}
////int main() {
////	int n = 10, num;
////	num = getNum(n);
////	printf("汉诺塔中%d片圆盘共需移动%d次\n", n, num);
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
////体测成绩预测
//int sex = 0;                       //性别由外部传入，当计算总成绩是可以避免多次性别的出现
////体重指数
//int countBMI(int sex) {
//	float weight, height;
//	printf("请依次输入体重（kg）、身高（m）：");
//	scanf("%f%f", &weight, &height);
//	float BMI = weight / (height * height);
//	int sco = 0;
//	switch (sex)
//	{
//	case 0:                                 //男生
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
//	printf("体重指数为：%.2f,成绩为：%d\n", BMI, sco);
//	return sco;
//}
////肺活量
//int countFVC(int sex) {
//	int FVC, sco;
//	printf("请输入肺活量（ml）：");
//	scanf("%d", &FVC);
//	switch (sex)
//	{
//	case 0:                                 //男生
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
////引体向上
//int countChinups() {
//	if (sex == 1)
//	{
//		printf("引体向上为男生特有项目！\n");
//		Sleep(2000);
//		exit(0);
//	}
//	int UPs = 0, sco = 0;
//	printf("引体向上计数为：");
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
////仰卧起坐
//int countSitup() {
//	if (sex == 0)
//	{
//		printf("仰卧起坐为女生特有项目！\n");
//		Sleep(2000);
//		exit(0);
//	}
//	int UPs = 0, sco = 0;
//	printf("仰卧起坐计数为：");
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
////总成绩
//void getNum() {
//	int BMI, FVC, Sups;
//	int Cups = 0;
//	double num;
//	//获取每一项成绩
//	BMI = countBMI(sex);
//	FVC = countFVC(sex);
//	//计算成绩
//	if (sex == 0) {
//		Cups = countChinups();              //若是男生获取引体向上个数
//		num = BMI * 0.25 + FVC * 0.35 + Cups * 0.4;
//	}
//	else
//	{
//		Sups = countSitup();                //若是女生获取仰卧起坐个数
//		num = BMI * 0.25 + FVC * 0.35 + Sups * 0.4;
//	}
//	//判断成绩优劣
//	if (num > 95)
//	{
//		printf("综合成绩为%.2f,优秀\n", num);
//	}
//	else if (num > 80 && num <= 95)
//	{
//		printf("综合成绩为%.2f,良好\n", num);
//	}
//	else if (num > 60 && num <= 80)
//	{
//		printf("综合成绩为%.2f,及格\n", num);
//	}
//	else
//	{
//		printf("综合成绩为%.2f,不及格\n", num);
//	}
//}
////菜单
//int menu() {
//	int sec;
//	printf("功能菜单\n");
//	printf("===============\n");
//	printf("1.体重指数BMI\n");
//	printf("2.肺活量FVC\n");
//	printf("3.引体向上\n");
//	printf("4.仰卧起坐\n");
//	printf("5.总成绩\n");
//	printf("0.退出\n");
//	printf("===============\n");
//	printf("请输入性别（男：0/女：1）：\n");
//	scanf("%d", &sex);
//	while (sex != 0 && sex != 1)
//	{
//		printf("选择有误！\n请重新输入：");
//		scanf("%d", &sex);
//	}
//	printf("请输入要选择的功能：");
//	scanf("%d", &sec);
//	while (sec > 5 || sec < 0)
//	{
//		printf("选择有误！\n请重新输入：");
//		scanf("%d", &sec);
//	}
//	return sec;
//}
//int main() {
//	int sec = menu();                   //调用菜单函数，获取选择的编号
//	switch (sec)                        //功能调用   
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
//		printf("请输入第%d个数据：\n", i + 1);
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
//	printf("最大值是%d,最大值的下标是%d\n", max, subscript + 1);
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
//	printf("请输入斐波那契数列的最后一项的项数：");
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
//	printf("形参data1=%d,地址为%p\n", data1, &data1);
//	printf("形参data2=%d,地址为%p\n", data2, &data2);
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
//	printf("实参data1=%d,地址为%p\n", data1, &data1);
//	printf("实参data2=%d,地址为%p\n", data2, &data2);
//	printf("result = %d\n", result);
//
//	return 0;
//}


//
//
//
//#include<stdio.h>
//
//int temperatureTrend(int* temperatureA, int temperatureASize, int* temperatureB, int temperatureBSize)
//{
//    int y = 0;
//    int r = 0;
//    int arr1[] = { 0 };
//    int arr2[] = { 0 };
//    int arr3[] = { 0 };
//    int arr4[] = { 0 };
//    for (y = 0; y < temperatureASize; y++)
//    {
//        if (temperatureA[y] < temperatureA[y + 1])
//        {
//            arr1[y] = 0;
//        }
//        else if (temperatureA[y] == temperatureA[y + 1])
//        {
//            arr1[y] = 1;
//        }
//        else if (temperatureA[y] > temperatureA[y + 1])
//        {
//            arr1[y] = 2;
//        }
//        else if (temperatureB[y] < temperatureB[y + 1])
//        {
//            arr1[y] = 0;
//        }
//        else if (temperatureB[y] == temperatureB[y + 1])
//        {
//            arr1[y] = 1;
//        }
//        else if (temperatureB[y] > temperatureB[y + 1])
//        {
//            arr1[y] = 2;
//        }
//    }
//    printf("%s", arr4);
//
//
//
//    for (r = 0; r < temperatureASize; r++)
//    {
//        if (arr1[r] == arr2[r])
//        {
//            arr3[r] + 1;
//            arr4[r] = arr3[r];
//        }
//        else
//        {
//            memset(arr3, 0, sizeof arr3);
//        }
//    }
//
//
//
//}
//
//
//
//int main()
//{
//    int temperatureA[] = { 0 };
//    int temperatureB[] = { 0 };
//    for (int i = 0; i < 1000; i++)
//    {
//        scanf("%s %s", &  temperatureA[i], & temperatureB[i]);
//        
//    }
//
//    int temperatureASize = sizeof(temperatureA) / sizeof(temperatureA[0]);
//    int temperatureBSize = sizeof(temperatureB) / sizeof(temperatureB[0]);
//    temperatureTrend(&temperatureA,  temperatureASize, &temperatureB,  temperatureBSize);
//
//
//
//
//    return 0;
//}
//
//
//


//
//
//#include <stdio.h>
//void swapCharAndInt(char* charArr, int* intArr, int index1, int index2) {
//    char tempChar = charArr[index1];
//    int tempInt = intArr[index2];
//
//    charArr[index1] = (char)tempInt;
//    intArr[index2] = (int)tempChar;
//}
//
//int main() {
//    char charArr[] = { 'a', 'b', 'c' };
//    int intArr[] = { 1,2, 3 };
//
//    int index1 = 0;
//    int index2 = 1;
//
//    swapCharAndInt(charArr, intArr, index1, index2);
//
//    printf("After swapping:\n");
//    printf("charArr: %c %c %c\n", charArr[0], charArr[1], charArr[2]);
//    printf("intArr: %d %d %d\n", intArr[0], intArr[1], intArr[2]);
//
//    return 0;
//}




//数字转换为拼音
//
//#include<stdio.h>
//int main()
//{
//	int number = 0;
//	int mask = 1;
//	int t = 0;
//	int d = 0; // 代表数字的每一位 
//	scanf("%d", &number);
//	// 首先我们要判断这个数字的位数
//	if (number < 0) {
//		printf("fu ");
//		number = -number;
//	}
//	t = number;
//	while (number > 9) {
//		mask = mask * 10;
//		number /= 10;
//	}
//	number = t;
//	do {
//		//取出数字的每一位 
//		d = number / mask;
//		switch (d) {
//		case 9: printf("jiu"); break;
//		case 8: printf("ba"); break;
//		case 7: printf("qi"); break;
//		case 6: printf("liu"); break;
//		case 5: printf("wu"); break;
//		case 4: printf("si"); break;
//		case 3: printf("san"); break;
//		case 2: printf("er"); break;
//		case 1: printf("yi"); break;
//		case 0: printf("ling"); break;
//		}
//		if (mask > 9) {
//			printf(" ");
//		}
//		number = number % mask;
//		mask /= 10;
//	} while (mask > 0);
//	return 0;
//}



//
//
//
//
//
//
//
////要引用的库文件 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand(time(0));
//	//产生随机数的种子确保每一次产生的随机数不同 
//	int number = 0;
//	int ret = 0;
//	int cet = 0;
//	scanf("%d", &number);
//	int a[number + 1] = { 0 }; //定义初始化 
//	int b[number % 2 == 0 ? number / 2 : number / 2 + 1] = { 0 };
//	int c[number % 2 == 0 ? number / 2 : number / 2 + 1] = { 0 };
//	/*
//	printf("%d\n",sizeof(b) / sizeof(b[0]));
//	printf("%d\n",sizeof(c) / sizeof(c[0]));
//	printf("size = %d\n",sizeof(a) / sizeof(a[0]));
//	*/
//
//	//参数随机数放入数组 
//	printf("\n原始数组:\n");
//	for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
//		a[i] = rand() % 100;
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
//		if (i % 2 == 0) {
//			b[ret++] = a[i]; //存放偶数 
//		}
//		else {
//			c[cet++] = a[i]; //存放奇数 
//		}
//	}
//	//printf("ret = %d cet = %d\n",ret,cet);
//	printf("\n");
//	printf("\n奇数数组:\n");
//	for (int i = 0; i < cet; i++) {
//		printf("%d ", c[i]);
//	}
//
//	//排序
//	//奇数数组排序
//	int temp = 0;
//	for (int i = 0; i < cet - 1; i++) {
//		for (int j = i + 1; j < cet; j++) {
//			if (c[i] > c[j]) {
//				temp = c[i];
//				c[i] = c[j];
//				c[j] = temp;
//			}
//		}
//	}
//	printf("\n");
//	printf("排序后:\n");
//	for (int i = 0; i < cet; i++) {
//		printf("%d ", c[i]);
//	}
//	printf("\n\n偶数数组:\n");
//	for (int i = 0; i < ret; i++) {
//		printf("%d ", b[i]);
//	}
//	for (int i = 0; i < ret - 1; i++) {
//		for (int j = 0; j < ret - 1 - i; j++) {
//			if (b[j] > b[j + 1]) {
//				temp = b[j];
//				b[j] = b[j + 1];
//				b[j + 1] = temp;
//			}
//		}
//	}
//	printf("\n排序后:\n");
//	for (int i = 0; i < ret; i++) {
//		printf("%d ", b[i]);
//	}
//	return 0;
//}







//
//
//
//#include <stdio.h>
//#include <stdlib.h> 
//int main()
//{
//    int year;
//    printf("输入年份: ");
//    scanf("%d", &year);
//    if (year % 4 == 0)
//    {
//        if (year % 100 == 0)
//        {
//            if (year % 400 == 0)              // 能被4，100，400整除，则是闰年//
//                printf("%d 是闰年\n", year);
//            else
//                printf("%d 不是闰年\n", year);
//        }
//        else
//            printf("%d 是闰年\n", year);    //能被4整除，不能被100整除，是闰年//
//    }
//    else
//        printf("%d 不是闰年\n", year);
//    system("pause");
//    return 0;
//}






//
////调用一次函数，num自身就增加一
//#include <stdio.h>
//
//void ADD( int * a)
//{
//	(*a)++;
//}
//
//
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d" , num);
//	ADD(&num);
//	printf("%d", num);
//	ADD(&num);
//	printf("%d", num);
//
//	return 0;
//}


//
//int main() {
//    //外层循环变量,控制行  
//    int i = 0;
//    //内层循环变量,控制列   
//    int j = 0;
//    for (i = 1; i <= 9; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("%dx%d=%d\t", j, i, i * j);
//        }
//        //每行输出完后换行   
//        printf("\n");
//    }
//}




#include<stdio.h>

int test(int n1) {
	int sum = n1 + 1;
	printf("sum = %d", sum);
	return 0;
}

void main() {
	int n2 = 6;
	test(n2);
}

