#include<iostream>
#include <string>
using namespace std;

//const double pi = 3.14;
//double Area(double R= 0,float lowR =0)
//{
//	return pi*R*R*lowR;
//}
//int main()
//{
//	cout << Area(3,3.14) << endl;
//
//	return 0;
//}
//递归函数
//自己调用自己
int GetFibNumber(int fibIndex)
{
	if (fibIndex < 3)
	{
		return fibIndex;
	}
	else
	{
		cout << "调用自己" << endl;
		return GetFibNumber(fibIndex - 1);
	}
}
int main()
{
	int index = 0;
	cin >> index;

	cout << GetFibNumber(index) << endl;
	return 0;
}