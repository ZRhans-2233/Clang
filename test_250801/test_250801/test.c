#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	 return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a,b);	
//	printf("The result is: %d\n", z);
//
//	return 0;
//}

//int main()
//{
//	//寄存器变量
//	register int num = 3;
//
//	return 0;
//}

//define定义标识常量
//#define NUM 100
//int main()
//{
//	printf("The value of NUM is: %d\n", NUM);
//	int n = NUM;
//	printf("The value of n is: %d\n", n);
//	int arr[NUM] = { 0 };
//
//	return 0;
//}

//define定义宏
//#define ADD(x, y) ((x) + (y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("The value of c is: %d\n", c);
//}

//int main()
//{
//	int a = 10;//向内存申请4字节空间，存储10
//	//&a; //获取变量a的地址
//	//printf("The address of a is: %p\n", (void*)&a);
//	int* p = &a; //定义指针变量p，指向a的地址
//
//	//char ch = 'w';
//	//char* pc = &ch; //定义字符指针变量pc，指向字符ch的地址
//
//	*p = 20; //通过指针p修改a的值为20
//	printf("The value of a is: %d\n", a);
//
//	return 0;
//}

int main()
{
	//int* p;
	//char* p2;
	//不管是什么类型的指针，都是在创建指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于一个地址存放的时候需要多大空间
	//32位机器上的地址：32bit = 4字节，所以指针变量的大小是4字节
	//64位机器上的地址：64bit = 8字节，所以指针变量的大小是8字节

	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));

	return 0;
}