#include<iostream>
#include<string>
#include"5_28.h"//��ͷ�ļ�����
#define pi 3.14//һֱռ�ÿռ�
constexpr int Square(int nuber) { return nuber * nuber; }
using namespace std;

//constexpr double gg() { return 22.0 / 7.0; } 
//�Ż�Ч�ʡ�ֻ����һ�Ρ�

//double gg01() { return 22.0 / 7.0; }
//ÿ�ζ������һ�Ρ�
//ö�٣�������״̬��
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
	//float  doubleС����˫����С��
	//float pi = 3.14;
	//double pi01 = 22. / 7.;
	//cout << pi01 << endl;


	//int num = 50000000;
	//short num01 =  num ;  
	//�Ӵ����ţ�����������⣬��ֹ����ֵ����
	cout << Man::Walk << endl;//::��ö���ڵ����ݣ���Ϊ������ѡ����
	cout << Man::Run << endl;
	cout << Man::Jump << endl;
	cout << Man::Lay << endl;
	//cout << num01 << endl;
	//auto �Զ�ʶ�𣬸����������ֵ�ж����͡�ʹ��ʱ�븳ֵ��
	//auto isbool = false;
	//cout << isbool << endl;
	//cout << sizeof(isbool) << endl;
	//typedef ת���������֡�
	typedef unsigned int STRRRRRRR_666; //��int ��Ϊ�� STRRRRRRR_666
	STRRRRRRR_666 num = 100;
	cout << sizeof(STRRRRRRR_666) << endl;
	//��������Сд��ͷ�����ڱ�������д���ں���
	//���泣��
	const int aa = 777; //const ���ι��ı������������޸ġ�
	//ö��
	//const int return; //�������ùؼ���
	//���飬һ��Ԫ�������γ�һ�����塣
	//����������Ԫ�ص����Ͷ���ͬ��
	//��̬���飺
	int arrayNumberr[5];
	int arrayNumber01[6] = { 0 };//������һ�����飬��6��int,ȫ������0.
	int arrayNumber02[8] = { 2,-5,3 };

	const int arrayNum = 6;
	int arraynumber03[arrayNum] = {};//���徲̬����Ĵ�С����Ҫ�ó������������ñ�����
	return 0;
}