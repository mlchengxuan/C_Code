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
//�ݹ麯��
//�Լ������Լ�
int GetFibNumber(int fibIndex)
{
	if (fibIndex < 3)
	{
		return fibIndex;
	}
	else
	{
		cout << "�����Լ�" << endl;
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