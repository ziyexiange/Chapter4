// break语句
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		cout << "当前值为：" << i << endl;
		if (i == 3) {
			cout << "达到值为3，退出循环" << endl;
			break; // 当 i 的值等于 3 时终止循环
		}
	}
	cout << "循环结束！" << endl;
	return 0;
}
