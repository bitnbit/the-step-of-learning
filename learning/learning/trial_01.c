#define _CRT_SECURE_NO_WARNINGS
//pintf为库函数，在主函数前一定要加上#include <头文件>
//#include <stdio.h>
//int main()
//{
//	printf("我是新手");
//	return 0;
//}

//数据类型的示例
//#include <stdio.h>
//int main()
//{
//	char ch = 'a';
//	int age = 20;
//	short number = 6;
//	float weight = 53.1;
//	double d = 0.0;
//	return 0;
//}

//打印一个整数
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", 100);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//各对应几个字节
//	printf("%d\n", sizeof(char));        //1 byte
//	printf("%d\n", sizeof(int));         //4 byte
//	printf("%d\n", sizeof(short));       //2 byte
//	printf("%d\n", sizeof(long));        //4 byte
//	printf("%d\n", sizeof(long long));   //8 byte
//	printf("%d\n", sizeof(float));       //4 byte
//	printf("%d\n", sizeof(double));      //8 byte
//	return 0;
//}

//创建一个变量
#include <stdio.h>
//int main()
//{
//  //int为类型，age为变量的名字，=为赋值，0为数值
//  //也可以不赋值，但是不推荐
//	int age = 17;
//	double weight = 53.8;
//	weight = weight + 10;
//	age = age + 1;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//当局部和全局名字冲突时，局部优先于全局
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//求两数的和
//scanf为输入函数,printf为输出函数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("c = %d\n", c);
//	return 0;
//}
