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
//int number = 5;
//int number01 = 8;
//int number02= (number <= number01) ? number : number01;
//cout << number02 << endl;
//循环
//goto
//int a = 1;
//Start:
//cout << "打印循环" << a << endl;
//++a;
//if (a <= 10)
//{
//	goto Start;
//}
//else
//{
//	cout << "打印循环结束" << endl;
//}
//while循环
//int number = 0;
//	do
//{
//	cout << "循环次数：" << number << endl;
//	++number;
//	} while (number <= 100);
//for
//for (int i = 0; i < 10; i++)
//{
//	cout << i << endl;
//	}
//for (char uu = '\0'; (uu != 'x'); cout << "OK01" << endl)
//{
//	cout << "OK" << endl;
//	cin >> uu;
//}
//int someNumber[] = { 1,2,3,4,5,6 };
//for (auto Number : someNumber)
//{
//	cout << Number << endl;
//}
//for (const auto& aNum : { 1,2,3,4,5,6 })
//{
//	cout << aNum << endl;
//}
//string hello{ "hello" };
//for (auto testString : hello)
//{
//	cout << testString << endl;
//}
	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << i << endl;
	//	if (i < 5)
	//	{
	//		cout << "continue成功" << endl;
	//		continue;
	//		cout << "continue失败" << endl;
	//	}
	//	else
	//	{
	//		cout << "break成功" << endl;
	//		break;
	//		cout << "break失败" << endl;
	//	}
	//}
//循环嵌套
//const int number = 3;
//const int number01 = 2;
//int myNums[number] = { 35,-3,0 };
//int myNums01[number01] = { 20,-1 };
//for (int i = 0; i < number; ++i)
//{
//	for (int j = 0; j < number01; j++)
//	{
//		cout << myNums[i] << "x" << myNums01[j] << "=" << myNums[i] * myNums01[j] << endl;
//	}
//const int number = 3;
//const int number01 = 2;
//int mynums[number] = { 1,2,3 };
//int mynums01[number01] = { 1,2 };
//for (int i = 0; i < number; ++i)
//{
//	for (int j = 0; j < number01; ++j)
//	{
//		cout << mynums[i] << "x" << mynums01[j] << "=" << mynums[i] * mynums01[j] << endl;
//	}
//}
//const int b = 4;
//int myNums[a][b] = { {1,2,3,4},{3,4,5,6},{6,7,8,9} };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//		cout << "myNuums[" << i << "][" << j << "]=" << myNums[i][j] << endl;
//
//}
for (int i = 1; i < 10; ++i)
{
	for (int j = 1; j <=i; ++j)
		cout << i << "*" << j << "=" << i * j << endl;

}

	return 0;
}