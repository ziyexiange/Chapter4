// if语句
#include<iostream>
using namespace std;
int main()
{
	int number = 20;
	// 在 if 语句内定义变量
	if (number > 10) {
		int x = 5;
		cout << "在 if 语句内部，x 的值为：" << x << endl;
	}

	if (number > 10) {
		cout << "数字大于10" << endl;
	}
	else if (number > 5) {
		cout << "数字大于5，但不大于10" << endl;
	}
	else {
		cout << "数字不大于5" << endl;
	}

	return 0;
}