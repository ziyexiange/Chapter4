// break���
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		cout << "��ǰֵΪ��" << i << endl;
		if (i == 3) {
			cout << "�ﵽֵΪ3���˳�ѭ��" << endl;
			break; // �� i ��ֵ���� 3 ʱ��ֹѭ��
		}
	}
	cout << "ѭ��������" << endl;
	return 0;
}
