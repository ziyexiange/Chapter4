// continue���
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		if (i == 2) {
			cout << "���� i = 2" << endl;
			continue; // �� i ��ֵΪ 2 ʱ������ǰ����
		}
		cout << "��ǰֵΪ��" << i << endl;
	}
	cout << "ѭ��������" << endl;
	return 0;
}
