#include<iostream>//Ԥ�������ı���ָ��include��C++��̬�ģ�F5ִ��ǰԤ����״̬��
				//<iostream>ϵͳ�Ķ���A�οڴ�
			
#include<string>//����һ��ͷ�ļ���string�ַ���
//�����ռ䣬����������ͻ
using namespace std;

int Test01();//��������Ӧ���壩
//ȫ�ֱ���
int abc = 222;
//ͬһ
//main������ִ�к�����voidû�з���ֵ
			//int ���η���ֵ��Ҫ�н����
int Test02()
{
	cout << Test02 << endl;

	return 0;
}
//int main()
//{
//	//����
//	 Test01();
//	 return Test02();
//}

//���� ����int ����
int Test01()
{
	//cout��ӡ
	//  <<  ���ӷ��ţ����������    "" �ַ���  endl����  ;����
	cout << "Hello World" << endl;
	cout << "100��50=" << 100/50 << endl;
	cout << 22 / 7 << endl;
	cout << 22.0 / 7.0 << endl;
	return 0;
}
//�����Ͷ������ͬʱ��ɣ�



int main()
{
	int inputNumber;//������һ�����α���
	cout << "�������������֣�";
	cin >> inputNumber;//cin����̨����

	string inputName;//�����������ַ���
	string inputName01;
	cout << "������������ ����ո� �������������֣�";
	cin >> inputName >> inputName01;
	
	// << ��ȡ�����
	cout << "�����������Ϊ"<<inputNumber << endl;
	cout << "�����������Ϊ" << inputName << inputName01<<endl;
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
	//float ���ڸ��� (float)ǿ��ת��Ϊ����ֵ
	float result04 = (float)num / (float)num01;
	cout << result04 << endl;


	int max = 2147483647+1;
	cout << max << endl;

	uint16_t b = 1;//�޷��ŵ����Σ�������Ϊ����
	cout << b << endl;
	//float  С��  1.2e-38--3.4e38
	//bool
	//ture false
	bool testBool = false;
	cout << testBool << endl;//��ӡ 0   turn��ӡ 1

	bool testBool01 = (2 + 2 == 4);
	cout << testBool01 << endl;//��ӡ 1 

	//sizeofռ�ö��ٿռ䣨�ֽڣ�
	cout << sizeof(testBool) << endl;
	//char�ַ����ͣ������ַ�
	char testChar = 'L';//""�ַ���  ''�ַ�  
	
	return 0;
	//��˹�������� �����ں��������� ÿ�����ʵ�����ĸΪ��д
	//�շ������� globalNumber ����ĸСд�����浥������ĸ��д
	//������������ g_iglobalNumber = 5;
	//int GlobalNuber = 5��
	//ͬһ���ڲ�����ͬʱ����������ͬ�ı�������ͬ���ڿ���

}