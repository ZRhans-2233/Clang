#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//	//->
//	//结构体指针变量->成员名
//};
//
//int main()
//{
//	struct Stu s = { "zhangsan" , 20 , "nan", "15596668862" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//if(a==3)
//	//	printf("hehe\n");
//
//	int age = 10;
//	scanf("%d", &age);
//
//	//if (age >18)
//	//	printf("成年\n");
//
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//}
//	//else
//	//{
//	//	printf("成年\n");
//	//}
//
//	if(age<18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 20)
//		printf("青年\n");
//	else if (age >= 20 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else 
//		printf("老寿星\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//
//}

//int test()
//{
//	int a = 4;
//	if (a == 3)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int ret = scanf("%d", &num);
//	if (ret != 1)
//	{
//		printf("输入错误\n");
//		return 1;
//	}
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("No\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if(i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	int ret = scanf("%d", &day);
//	if (ret != 1)
//	{
//		printf("输入错误\n");
//		return 1;
//	}
//	if (day == 1)
//	{
//		printf("今天是星期一\n");
//	}
//	else if (day == 2)
//	{
//		printf("今天是星期二\n");
//	}
//	else if (day == 3)
//	{
//		printf("今天是星期三\n");
//	}
//	else if (day == 4)
//	{
//		printf("今天是星期四\n");
//	}
//	else if (day == 5)
//	{
//		printf("今天是星期五\n");
//	}
//	else if (day == 6)
//	{
//		printf("今天是星期六\n");
//	}
//	else if (day == 7)
//	{
//		printf("今天是星期日\n");
//	}
//	else
//	{
//		printf("输入错误\n");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	int ret = scanf("%d", &day);
//	if (ret != 1)
//	{
//		printf("输入错误\n");
//		return 1;
//	}
//	switch (day)
//	{
//	case 1:
//		printf("今天是星期一\n");
//		break; //
//	case 2:
//		printf("今天是星期二\n");
//		break; //
//	case 3:
//		printf("今天是星期三\n");
//		break; //
//	case 4:
//		printf("今天是星期四\n");
//		break; //
//	case 5:
//		printf("今天是星期五\n");
//		break; //
//	case 6:
//		printf("今天是星期六\n");
//		break; //
//	case 7:
//		printf("今天是星期日\n");
//		break; //
//	}
//
//	return 0;
//}
//case 后必须为整型常量表达式

//int main()
//{
//	int day = 0;
//	int ret = scanf("%d", &day);
//	if (ret != 1)
//	{
//		printf("输入错误\n");
//		return 1;
//	}
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//		//default: //默认分支
//		//	printf("输入错误\n");
//		//	break;
//	}
//
//	return 0;
//}

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:m++; n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}