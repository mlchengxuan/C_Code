#include<iostream>
using namespace std;

int main()
{
	//if else
	//int number = 0, number01 = 0;
	//cout << "�������һ������" << endl;
	//cin >> number ;
	//cout << "������ڶ�������" << endl;
	//cin >> number01;
	//char userSelectin = '\0';
	//cout << "��m�������������,������������" << endl;
	//cin >> userSelectin;
	//if (userSelectin == 'm')//���
	//{
	//	cout<<number*number01<<endl;
	//}
	//else if (userSelectin == 'l')//���
	//{
	//	cout << number - number01 << endl;
	//}
	//else//����
	//{
	//	cout << number + number01 << endl;
	//}
	//if (456)
	//{
	//	cout << "OK" << endl;
	//}
	//ifǶ��
	//if (1)
	//{
	//	cout << "�����һ��if" << endl;
	//	if (1)
	//	{
	//		cout << "����ڶ���if" << endl;
	//	}
	//	else
	//	{
	//		cout << "����ڶ���else" << endl;
	//	}
	//}
	//ö�� ��if...else���
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
	//cout << "������������ڼ�" << endl;
	//cin >> dayInput;
	//switch (dayInput)
	//{
	//case DayofWeek::Sun:
	//		cout << "������Sun" << endl;
	//		break;
	//case 1:
	//	cout << "������Mon" << endl;
	//	break;
	//case DayofWeek::Thu:
	//	cout << "������Thu" << endl;
	//	break;
	//case DayofWeek::Wed:
	//	cout << "������Wed" << endl;
	//	break;
	//default:
	//	cout << "����ʲôҲ����" << endl;
	//	break;
	//}
	//if (dayInput == 0)
	//{
	//	cout << "������Sun" << endl;
	//}
	//else if (dayInput == Mon)
	//{
	//	cout << "������Mon" << endl;
	//}
	//��Ŀ�����;���յ�if...else
	int number = 5;
	int number01 = 8;
	int number02= (number <= number01) ? number : number01;
	cout << number02 << endl;
	return 0;
}