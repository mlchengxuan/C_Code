#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//函数=首字母大写
//变量=驼峰命名法-前小后大
//%c打印字符  %s打印字符串 %d打印整型 
//printf("%d",100);
//printf("%s","abc");
//printf("%c",'a');
	



int main()
{
	//转义字符 \ 转变了它原来的意思

	//这里介绍
 //char  //字符 有256个
	//char testchar = 'Y ';//字符串""
	//cout << testchar << endl;
	//cout << sizeof(int) << endl;
	//循环语句
	//while

	int giao = 0;
	printf("你会选择去敲代码吗？（选择1 or 0）:>");
	scanf("%d", &giao);
	if (giao == 1)
	{
		printf("坚持，会有好offer\n");
	}
	else
	{
		printf("回家卖红薯");
	}
	return 0;


}