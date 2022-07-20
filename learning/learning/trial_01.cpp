
#include <stdio.h>
int main()
{
	printf("我是新手");
	return 0;
}

#include <stdio.h>
int main()
{
	char ch = 'a';
	int age = 20;
	short number = 6;
	float weight = 53.1;
	double d = 0.0;
	return 0;
}

//打印一个整数
#include <stdio.h>
int main()
{
	printf("%d\n", 100);
	return 0;
}

#include <stdio.h>
int main()
{
	//各对应几个字节
	printf("%d\n", sizeof(char));        //1 byte
	printf("%d\n", sizeof(int));         //2 byte
	printf("%d\n", sizeof(short));       //4 byte
	printf("%d\n", sizeof(long));        //4 byte
	printf("%d\n", sizeof(long long));   //8 byte
	printf("%d\n", sizeof(float));       //4 byte
	printf("%d\n", sizeof(double));      //8 byte
	return 0;
}