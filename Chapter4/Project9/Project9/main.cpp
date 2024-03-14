// goto语句
#include <iostream>
using namespace std;
int main() {
	int count = 0;
start:
	cout << "计数器：" << count << endl;
	count++;
	if (count < 5) {
		goto start; // 转移到标签 start 处
	}
	cout << "循环结束！" << endl;
	return 0;
}
