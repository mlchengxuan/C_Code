#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{	//��̬����_�ǿ���һ���ռ䣬δװ�������
	//��̬����_δ��������С���������Զ����䡣
	//vector��һ������
	//<int>������������
	//vector<int>arrayNumber(3);
	//arrayNumber[0] = 11;
	//arrayNumber[1] = 22;
	//arrayNumber[2] = 33;
	//cout << arrayNumber[0] << ";" << arrayNumber[1] << ";" << arrayNumber[2] << endl;
	//cout << arrayNumber.size() << endl;
	//arrayNumber.push_back(44);//push_back��β����һ��
	//cout << arrayNumber.size() << endl;
	//cout << arrayNumber[3] << endl;
	//cout << arrayNumber[arrayNumber.size()-1] << endl;
	//
	////C����ַ���
	//char testHello[] = { 'H','E','L','L','O',' ','W','O','R','L','D','\0' };
	//cout << testHello << endl;
	//cout << sizeof(testHello) << endl;
	//testHello[5] = '\0';
	//cout << testHello << endl;
	//cout << strlen(testHello) << endl;
	////C++����ַ���
	//string testStdString("Hello!");
	//string testStdString01 = "Hello!";
	//cout << testStdString << endl;
	//cout << testStdString01 << endl;
	//getline(cin, testStdString);
	//getline(cin, testStdString01);
	//string testStdString02 = testStdString + " " + testStdString01;
	//cout << testStdString02 << endl;
	//string testStdString03;
	//testStdString03 = testStdString02;
	//cout << testStdString02 << endl;
	//cout << testStdString02.length() << endl;
//	cout << "lllkjllkjlk" << endl;
//	cout <<
//		"dddddsfsf" << endl;
//	cout<<"slkdjf\
//sdfadfaf"<<endl;
//	cout << "dsaffdaf"
//		"sadfasdf" << endl;
//	int number = 2200;
	//��ģ����� %  ����
	//int number001 = 10;
	//int number002 = 8;
	//int number003 = number001 % number002;
	//cout << number003 << endl;
	//++����   --�ݼ�
	int number = 0;
	int number01 = number++;  //��׺����
	cout << number01 << endl;  //0
	cout << number << endl;    //1
	int number02 = ++number01;
	cout << number02 << endl;  //1
	cout << number01 << endl; //1

	//��׺������ݼ�   ������ֵ������������ݼ�
	// ǰ׺������ݼ�  ����������ݼ���������ֵ
	//int Number[2][3] = { { 1,2,3 },
	//					 { 2,3,4 } };
	//int number03 = 100;
	//number03++;
	//cout << number03 << endl;
	//++number03;
	//cout << number03 << endl;
	////���==    �����!=
	//bool isBool = (5 == 2 + 3);
	//cout << isBool << endl;
	//bool isBool01 = (5 != 2 + 3);
	//cout << isBool01 << endl;

	//  <  >  <=  >= 
	int  number0001 = 20;
	bool isBool01 = (number0001 < 100);
	cout <<isBool01 << endl;


	return 0;
}