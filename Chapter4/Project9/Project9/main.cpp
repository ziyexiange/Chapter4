// goto���
#include <iostream>
using namespace std;
int main() {
	int count = 0;
start:
	cout << "��������" << count << endl;
	count++;
	if (count < 5) {
		goto start; // ת�Ƶ���ǩ start ��
	}
	cout << "ѭ��������" << endl;
	return 0;
}
