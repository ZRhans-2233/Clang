#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//char 字符类型
//	//'a';
//	//char ch = 'a';
//	//"abcdef";
//	char arr1[] = "abcdef";//7
//	char arr2[] = { 'a','b','c','d','e','f','\0'}; 
//
//	printf("%zu\n", strlen(arr1)); 
//	printf("%zu\n", strlen(arr2)); 
//
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	printf("abc\n");//\n是换行符
//
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//
//	return 0;
//}

//转义字符

//%d - 打印整形
//%c - 打印字符
//%s - 打印字符串
//%f - 打印浮点数
//%lf - 打印双精度浮点数
//zu - 打印sizeof类型

//int main()
//{
//	//printf("%s\n", "(are you ok\??)");
//	//printf("%c\n", '\'');
//	//printf("abcdef\n");
//	//printf("\"");
//
//	//printf("%s\n", "abcdef");
//
//	//printf("abcd\\0ef");
//	//printf("C:\\test\\test.c");
//	//printf("\a");
//	//printf("abc\nd\tabc");
//
//	//printf("%c\n",'\130');
//	//printf("%c\n", '\x063');
//
//	//printf("%d\n", strlen("qwert"));
//    printf("%zu\n", strlen("c:\test\628\test.c"));
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗？\n");
//	if (scanf("%d", &input) != 1)
//	{
//		printf("输入无效！\n");
//		return 1;
//	}
//	if (input == 1)
//	{
//		printf("好好学习，天天向上！\n");
//	}
//	else
//	{
//		printf("不学习就会被淘汰！\n");
//	}
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	
//	while (line<20000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if(line == 20000)
//	{
//		printf("恭喜你，写完了！\n");
//	}
//	else
//	{
//		printf("你没有写完！\n");
//	}
//	return 0;
//}

//函数的定义
//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	printf("请输入两个整数：\n");
//
//	scanf("%d %d", &n1, &n2);
//
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	int t1 = 100;
//	int t2 = 300;
//	int rat = Add(t1, t2);
//	
//
//	printf("它们的和是：%d\n", sum);
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int b = 11;
	//int c = 12;

	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
	char ch[5];
	double d[30];

	//printf("%d\n", arr[8]);
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}

