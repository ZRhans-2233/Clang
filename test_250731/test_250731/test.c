#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;
//	//printf("%d\n", a); // This should print 3, not 3.5
//	//printf("%d\n", b); // This should print 1, not 0.5
//
//	float a = 7 / 2.0;
//	int b = 7 % 2;	//取模只能是整数
//	printf("%.1f\n", a);
//	printf("%d\n", b); 
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a = 20;
//
//	a = a + 3;
//	a += 3;
//	a -= 3;
//	a *= 3;
//	a /= 3; 
//
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a = -10;
//	//int b = -a;
//	//printf("%d\n", b);
//	//return 0;
//
//	//int a = 10;
//	//printf("%zu\n", sizeof(a));
//	//printf("%zu\n", sizeof(int));
//	//printf("%zu\n", sizeof a );
//
//	//int arr[10] = { 0 };
//	//printf("%zu\n", sizeof(arr)); // 40
//	//printf("%zu\n", sizeof(arr[0]));// 4
//	//printf("%zu\n", sizeof(arr) / sizeof(arr[0])); // 10
//
//	//int a = 10;
//	////int b = a++; //int b = a; a = a + 1;
//	//int b = ++a; // a = a + 1; b = a;
//
//	//printf("%d\n", a); 
//	//printf("%d\n", b); 
//
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	if (a = 3)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//if (a == 10 && b == 20)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//
//	if (a == 10 || b == 20)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = a > b ? a : b;
//	printf("%d\n", r); // 20
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	arr[3] = 20;
//	printf("%d\n", arr[3]);
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int sum = Add(2, 3); // 调用函数

	return 0;
}