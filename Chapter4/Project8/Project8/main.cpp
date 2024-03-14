// continue语句
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		if (i == 2) {
			cout << "跳过 i = 2" << endl;
			continue; // 当 i 的值为 2 时跳过当前迭代
		}
		cout << "当前值为：" << i << endl;
	}
	cout << "循环结束！" << endl;
	return 0;
}
