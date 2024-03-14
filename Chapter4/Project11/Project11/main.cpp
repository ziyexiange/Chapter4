// try语句块
#include <iostream>
using namespace std;
int main() {
	try {
		int num1 = 10, num2 = 0;
		if (num2 == 0) {
			throw "除数为零"; // 抛出一个字符串异常
		}
		int result = num1 / num2;
		cout << "结果是：" << result << endl;
	}
	catch (const char* error) { // 捕获字符串异常
		cout << "捕获到异常： " << error << endl;
	}
	return 0;
}
