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
//	//�Ĵ�������
//	register int num = 3;
//
//	return 0;
//}

//define�����ʶ����
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

//define�����
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
//	int a = 10;//���ڴ�����4�ֽڿռ䣬�洢10
//	//&a; //��ȡ����a�ĵ�ַ
//	//printf("The address of a is: %p\n", (void*)&a);
//	int* p = &a; //����ָ�����p��ָ��a�ĵ�ַ
//
//	//char ch = 'w';
//	//char* pc = &ch; //�����ַ�ָ�����pc��ָ���ַ�ch�ĵ�ַ
//
//	*p = 20; //ͨ��ָ��p�޸�a��ֵΪ20
//	printf("The value of a is: %d\n", a);
//
//	return 0;
//}

int main()
{
	//int* p;
	//char* p2;
	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
	//ָ�������������ŵ�ַ��
	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
	//32λ�����ϵĵ�ַ��32bit = 4�ֽڣ�����ָ������Ĵ�С��4�ֽ�
	//64λ�����ϵĵ�ַ��64bit = 8�ֽڣ�����ָ������Ĵ�С��8�ֽ�

	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));

	return 0;
}