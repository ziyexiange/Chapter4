// if���
#include<iostream>
using namespace std;
int main()
{
	int number = 20;
	// �� if ����ڶ������
	if (number > 10) {
		int x = 5;
		cout << "�� if ����ڲ���x ��ֵΪ��" << x << endl;
	}

	if (number > 10) {
		cout << "���ִ���10" << endl;
	}
	else if (number > 5) {
		cout << "���ִ���5����������10" << endl;
	}
	else {
		cout << "���ֲ�����5" << endl;
	}

	return 0;
}