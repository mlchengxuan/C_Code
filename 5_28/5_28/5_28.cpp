#include<iostream>
#include"5_28.h"//与头文件联动
#define pi 3.14//一直占用空间
using namespace std;

//constexpr double gg() { return 22.0 / 7.0; } 
//优化效率。只调用一次。

//double gg01() { return 22.0 / 7.0; }
//每次都需计算一次。
//枚举，常用于状态。
enum Man
{
	Walk,
	Run,
	Jump,
	Lay,
};

Man XiaoMing = Walk;

int main()
{
	//float  double小数，双精度小数
	//float pi = 3.14;
	//double pi01 = 22. / 7.;
	//cout << pi01 << endl;


	//int num = 50000000;
	//short num01 =  num ;  
	//加大括号，可以用作检测，防止返回值错误
	cout << Man::Walk << endl;//::将枚举内的内容，成为变量。选出来
	cout << Man::Run << endl;
	cout << Man::Jump << endl;
	cout << Man::Lay << endl;
	//cout << num01 << endl;
	//auto 自动识别，根据输入的右值判断类型。使用时须赋值。
	//auto isbool = false;
	//cout << isbool << endl;
	//cout << sizeof(isbool) << endl;
	//typedef 转换变量名字。
	typedef unsigned int STRRRRRRR_666; //将int 改为了 STRRRRRRR_666
	STRRRRRRR_666 num = 100;
	cout << sizeof(STRRRRRRR_666) << endl;
	//命名规则小写开头，用于变量。大写用于函数
	//字面常量
	const int aa = 777; //const 修饰过的变量，不可以修改。
	//枚举
	//const int return; //不可以用关键字
	
	return 0;
}