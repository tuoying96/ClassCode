#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


// struct S
// {
// 	char ch;
// 	int a;
// 	double d;
// };
//
//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);
//	system("pause");
//	//int arr[10];
//	//char arr2[5];
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	////正数
//	////00000000000000000000000000001010-原码
//	////0000000a
//	////
//	////正数的原码，反码，补码相同
//	////
//	//int b = -1;
//	////负数
//	////10000000000000000000000000000001-原码
//	////11111111111111111111111111111110-反码
//	////11111111111111111111111111111111-补码
//	//1-1
//	//1+(-1)
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	//
//	//00000000000000000000000000000001
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010- -2
//
//	system("pause");
//	return 0;
//}
//大端字节序存储
//把一个数的高位字节序的内容存储到低地址处
//把低位字节序的内容存储到高地址

//小端字节序存储
//把一个数的高位字节序的内容存储到高地址处
//把低位字节序的内容存储到低地址处

//int check_sys()
//{
//	int a = 1;
//	char*p = (char *)&a;
//	if(*p == 1)
//		return 1;
//	else
//		return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char*p = (char *)&a;
//	return *p;
//}
//
//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char *)&a;
//}
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//int a = 1;
//	//char *p = (char*)&a;//int*
//
//	//if(*p == 1)	
//	//{
//	//	printf("小端存储\n");
//	//}
//	//else
//	//{
//	//	printf("大端存储\n");
//	//}
//	//01 00 00 00
//	//00 00 00 01
//	system("pause");
//	return 0;
//}
//联合体/共用体

//创建一个结构体类型
//struct S
//{
//	int a;
//	char c;
//};
//
////创建一个联合体类型
//union Un
//{
//	int a;//4
//	char c;//1
//};
//
//int main()
//{
//	//struct S s;
//	union Un u;
//	//printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a= -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111111111111111111111111111
//	//
//	signed char b=-1;
//	unsigned char c=-1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000011111111
//	//00000000000000000000000011111111
//	//00000000000000000000000011111111
//
//	printf("a=%d,b=%d,c=%d",a,b,c);
//	//
//	//-1
//
//	system("pause");
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//11111111111111111111111110000000-a
//	//11111111111111111111111101111111
//	//10000000000000000000000010000000
//	//
//	printf("%d\n",a);
//	//
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//11111111111111111111111110000000-a
//	//
//	printf("%u\n",a);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char a = 127;
//	char b = 300;
//	char c = a+b;
//	//00000000000000000000000001111111
//	//00000000000000000000000001111111-a
//	//00000000000000000000000000000011-b
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//	printf("%d\n", c);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i= -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	//
//	unsigned  int  j = 10;
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110 
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	//
//	printf("%d\n", i+j); 
//	//20
//	//-10
//	//-18
//	system("pause");
//	return 0;
//}
#include <windows.h>
//
//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		printf("%u\n",i);
//		Sleep(1000);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char a[1000] = {0};
//	int i = 0;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	//-1 -2 -3 ..-128 127 126 ...3 2 1 0 -1 -2 -3 -...
//	printf("%d",strlen(a));
//	system("pause");
//	return 0;
//}
//

#include <stdio.h>
//
//unsigned char i = 0;
//
//int main()
//{
//	for(i = 0;i<=255;i++)
//	{
//		printf("hello world\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	if(strlen("abc")-strlen("abcdef")>0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}


int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001
	//（-1）^0 *0.00000000000000000001001*2^-126
	//0
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n",n);//9
	printf("*pFloat的值为：%f\n",*pFloat);//0.000000

	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//S=0 E=3+127 M=1.001
	//0 10000010 00100000000000000000000
	//(-1)^0 * 1.00100000000000000000000 * 2^3
	//
	printf("n的值为：%d\n",n);//9
	printf("*pFloat的值为：%f\n",*pFloat);//9.000000

	system("pause");
	return 0;
}

//int main()
//{
//	float f = 5.5f;
//	//0100 0000 1011 00000000000000000000
//	//40b00000
//	//
//	//101.1-V=1.011*2^2
//	//S=0 M=1.011 E=2
//	//
//	//float f = 0.5f;
//	//0 01111110 00000000000000000000000
//
//
//
//
//	//0 11111111 00100000000000000000000
//	//255-127=128
//	//S*1.xxx*2^128= 
//	//E=1-127=-126
//	//E=-127
//	//2*2^-127=2^-126
//	
//	//3F000000
//
//	//0.1
//	//1.0*2^-1
//	//E=-1+127
//	//+1023
//
//	return 0;
//}


