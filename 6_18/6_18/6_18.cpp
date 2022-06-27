#include<iostream>
#include <string>
using namespace std;

int main()
{
	int* pointerInt = NULL;

	//&获取地址
	int num = 2;
	pointerInt = &num;
	cout << "0x" << pointerInt << endl;
}

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
//int GetFibNumber(int fibIndex)
//{
//	if (fibIndex < 3)
//	{
//		return fibIndex;
//	}
//	else
//	{
//		cout << "调用自己" << endl;
//		return GetFibNumber(fibIndex - 1);
//	}
//}
//int main()
//{
//	int index = 0;
//	cin >> index;
//
//	cout << GetFibNumber(index) << endl;
//	return 0;
//}
//函数重载
//名字和返回值相同，但是参数不同的函数
//const double pi = 3.14;
//double Area(double R);
//double Area(double R, double H);
//
//double Area(double R)
//{
//	return 0.0;	
//}
//
//double Area(double R, double H)
//{
//	return 0.0;
//}
//const double pi = 3.14;
//double YuanZhuTiJi(double R )
//{
//	return pi * R * R;
//}
//double YuanZhuTiJi(double R, double H)
//{
//	return  pi * R * H;
//}
//
//int main()
//{
//	cout << YuanZhuTiJi(3.22) << endl;
//	cout << YuanZhuTiJi(3.1,3.1) << endl;
//	return 0;
//}
//int main()
//{
//	Area(7.11);
//	Area(7.22, 22.22);
//	return 0;
//}

//
//const double Pi = 3.14;
//void GG(double R)
//{
//	double MM = R * Pi*2;
//	cout << MM << endl;
//}
//int main()
//{
//	 GG(3) ;
//	return 0;
//}
//void DisplayArray(int numbers[], int length)
//{
//	for (int i = 0; i < length; ++i)
//	{
//		cout << numbers[i] << endl;
//	}
//}
//int main()
//{
//	const int num = 5;
//	int testArray[num] = { 23,45,455,8,6 };
//	DisplayArray(testArray, num);
//	return 0;
//}
//以引用的方式传参
//void Area(float R, float& redd)
//{
//	redd = R * R * 3.14;
//
//}
//auto 作为自动推断函数返回类型
//auto Area(float R)
//{
//	return R * 2;
//}
//int main()
//{
//	cout << Area(3) << endl;
//	//float testReaule = 9.0;
//	//Area(6.6, testReaule);
//	//	cout << testReaule << endl;
//	return 0;
//}