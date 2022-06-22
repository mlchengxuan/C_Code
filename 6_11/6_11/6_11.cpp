#include<iostream>
using namespace std;

int main()
{
	//if else
	//int number = 0, number01 = 0;
	//cout << "请输入第一个数字" << endl;
	//cin >> number ;
	//cout << "请输入第二个数字" << endl;
	//cin >> number01;
	//char userSelectin = '\0';
	//cout << "按m讲两个数字相乘,其他任意键相加" << endl;
	//cin >> userSelectin;
	//if (userSelectin == 'm')//如果
	//{
	//	cout<<number*number01<<endl;
	//}
	//else if (userSelectin == 'l')//如果
	//{
	//	cout << number - number01 << endl;
	//}
	//else//否则
	//{
	//	cout << number + number01 << endl;
	//}
	//if (456)
	//{
	//	cout << "OK" << endl;
	//}
	//if嵌套
	//if (1)
	//{
	//	cout << "进入第一层if" << endl;
	//	if (1)
	//	{
	//		cout << "进入第二层if" << endl;
	//	}
	//	else
	//	{
	//		cout << "进入第二层else" << endl;
	//	}
	//}
	//枚举 和if...else结合
	//enum DayofWeek
	//{
	//	Sun,
	//	Mon,
	//	Tue,
	//	Wed,
	//	Thu,
	//	Fri,
	//	Sat,
	//};
	//int dayInput = 0;
	//cout << "输入今天是星期几" << endl;
	//cin >> dayInput;
	//switch (dayInput)
	//{
	//case DayofWeek::Sun:
	//		cout << "今天是Sun" << endl;
	//		break;
	//case 1:
	//	cout << "今天是Mon" << endl;
	//	break;
	//case DayofWeek::Thu:
	//	cout << "今天是Thu" << endl;
	//	break;
	//case DayofWeek::Wed:
	//	cout << "今天是Wed" << endl;
	//	break;
	//default:
	//	cout << "今天什么也不是" << endl;
	//	break;
	//}
	//if (dayInput == 0)
	//{
	//	cout << "今天是Sun" << endl;
	//}
	//else if (dayInput == Mon)
	//{
	//	cout << "今天是Mon" << endl;
	//}
	//三目运算符;紧凑的if...else
	int number = 5;
	int number01 = 8;
	int number02= (number <= number01) ? number : number01;
	cout << number02 << endl;
	return 0;
}