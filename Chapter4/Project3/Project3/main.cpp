// switch语句
#include <iostream>
using namespace std;
int main() {
	int choice = 2;
	switch (choice) {
	case 1:
		cout << "选择了1" << endl;
		break;
	case 2:
		cout << "选择了2" << endl;
		break;
	case 3:
		cout << "选择了3" << endl;
		break;
	default:
		cout << "选择了其他值" << endl;
		break;
	}
	return 0;
}
