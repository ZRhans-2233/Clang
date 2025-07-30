#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("hello, world!\n");
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//		return 0;
//}

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

//int b = 20;
//
//int main()
//{
//	short age = 20;
//	int high = 180;
//	float weight = 88.5;
//	int a = 10;
//
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//	int sum = 0;
//	//输入两个整数
//	if (scanf("%d %d", &num1, &num2) != 2)
//	{
//		printf("输入错误，请输入两个整数。\n");
//		return 1;
//	}
//	//求和
//	sum = num1 + num2;
//	//输出
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 100;
//		printf("a = %d\n", a); // 输出局部变量a
//	}
//
//	printf("a = %d\n", 100); // 输出全局变量a
//	return 0;
//}

//extern int a; // 声明外部变量
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	30;
//	3.14;
//	'w';
//	"abc";
//	const int a = 10;
//	a = 20; // 修改变量a的值
//	printf("a = %d\n", a); // 输出变量a的值
//
//	const int a = 10; // 定义一个整型变量a并初始化为10
//	int arr[10] = { 0 }; 
//
//	return 0;
//}

//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
//	//printf("MAX = %d\n", MAX); // 输出宏定义的值
//	//int a = MAX; // 将宏定义的值赋给变量a
//	//printf("a = %d\n", a); // 输出变量a的值
//	//printf("STR = %s\n", STR); // 输出宏定义的字符串
//}

////枚举常量
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	//RGB
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED; // 定义一个枚举变量c并初始化为RED
//
//	return 0;
//}

