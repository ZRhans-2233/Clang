#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//char �ַ�����
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
//	printf("abc\n");//\n�ǻ��з�
//
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//
//	return 0;
//}

//ת���ַ�

//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡ������
//%lf - ��ӡ˫���ȸ�����
//zu - ��ӡsizeof����

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
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��\n");
//	if (scanf("%d", &input) != 1)
//	{
//		printf("������Ч��\n");
//		return 1;
//	}
//	if (input == 1)
//	{
//		printf("�ú�ѧϰ���������ϣ�\n");
//	}
//	else
//	{
//		printf("��ѧϰ�ͻᱻ��̭��\n");
//	}
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	
//	while (line<20000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if(line == 20000)
//	{
//		printf("��ϲ�㣬д���ˣ�\n");
//	}
//	else
//	{
//		printf("��û��д�꣡\n");
//	}
//	return 0;
//}

//�����Ķ���
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
//	printf("����������������\n");
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
//	printf("���ǵĺ��ǣ�%d\n", sum);
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

