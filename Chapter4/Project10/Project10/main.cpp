// throw���
#include <iostream>
using namespace std;
double division(int a, int b) {
	if (b == 0) {
		throw "����Ϊ���쳣"; // �׳�һ���ַ����쳣
	}
	return static_cast<double>(a) / b;
}
int main() {
	try {
		cout << "��ʼ���㣺" << endl;
		double result = division(10, 0); // ���� division ����
		cout << "���Ϊ��" << result << endl;
	}
	catch (const char* error) { // �����ַ����쳣
		cout << "�����쳣�� " << error << endl;
	}
	return 0;
}
