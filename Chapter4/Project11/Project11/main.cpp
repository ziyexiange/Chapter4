// try����
#include <iostream>
using namespace std;
int main() {
	try {
		int num1 = 10, num2 = 0;
		if (num2 == 0) {
			throw "����Ϊ��"; // �׳�һ���ַ����쳣
		}
		int result = num1 / num2;
		cout << "����ǣ�" << result << endl;
	}
	catch (const char* error) { // �����ַ����쳣
		cout << "�����쳣�� " << error << endl;
	}
	return 0;
}
