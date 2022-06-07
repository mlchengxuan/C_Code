#include<iostream>//预处理器的编译指令include。C++静态的，F5执行前预处理状态。
				//<iostream>系统的多来A梦口袋
			
#include<string>//包了一个头文件，string字符串
//命名空间，降低命名冲突
using namespace std;

int Test01();//声明（对应定义）
//全局变量
int abc = 222;
//同一
//main函数，执行函数。void没有返回值
			//int 整形返回值，要有结果。
int Test02()
{
	cout << Test02 << endl;

	return 0;
}
//int main()
//{
//	//调用
//	 Test01();
//	 return Test02();
//}

//定义 函数int 内容
int Test01()
{
	//cout打印
	//  <<  链接符号，插入运算符    "" 字符串  endl换行  ;结束
	cout << "Hello World" << endl;
	cout << "100÷50=" << 100/50 << endl;
	cout << 22 / 7 << endl;
	cout << 22.0 / 7.0 << endl;
	return 0;
}
//声明和定义可以同时完成：



int main()
{
	int inputNumber;//定义了一个整形变量
	cout << "请输入任意数字：";
	cin >> inputNumber;//cin控制台输入

	string inputName;//定义了两个字符串
	string inputName01;
	cout << "请输入您的姓 输入空格 请输入您的名字：";
	cin >> inputName >> inputName01;
	
	// << 提取运算符
	cout << "您输入的数字为"<<inputNumber << endl;
	cout << "您输入的名字为" << inputName << inputName01<<endl;
	abc = 666;
	cout << abc << endl;
	int num = 5;
	int num01 = 3; 
	int result = num + num01;
	cout << result << endl;
	int result01 = num - num01;
	cout << result01 << endl;
	int result02 = num * num01;
	cout << result02 << endl;
	int result03 = num / num01;
	cout << result03 << endl;
	//float 定于浮点 (float)强制转换为浮点值
	float result04 = (float)num / (float)num01;
	cout << result04 << endl;


	int max = 2147483647+1;
	cout << max << endl;

	uint16_t b = 1;//无符号的整形，不可以为负数
	cout << b << endl;
	//float  小数  1.2e-38--3.4e38
	//bool
	//ture false
	bool testBool = false;
	cout << testBool << endl;//打印 0   turn打印 1

	bool testBool01 = (2 + 2 == 4);
	cout << testBool01 << endl;//打印 1 

	//sizeof占用多少空间（字节）
	cout << sizeof(testBool) << endl;
	//char字符类型，单个字符
	char testChar = 'L';//""字符串  ''字符  
	
	return 0;
	//帕斯卡命名法 多用于函数的命名 每个单词的首字母为大写
	//驼峰命名法 globalNumber 首字母小写，后面单词首字母大写
	//匈牙利命名法 g_iglobalNumber = 5;
	//int GlobalNuber = 5；
	//同一域内不可以同时命名两个相同的变量，不同域内可以

}