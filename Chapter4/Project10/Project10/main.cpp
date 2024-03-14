// throw语句
#include <iostream>
using namespace std;
double division(int a, int b) {
	if (b == 0) {
		throw "除数为零异常"; // 抛出一个字符串异常
	}
	return static_cast<double>(a) / b;
}
int main() {
	try {
		cout << "开始计算：" << endl;
		double result = division(10, 0); // 调用 division 函数
		cout << "结果为：" << result << endl;
	}
	catch (const char* error) { // 捕获字符串异常
		cout << "捕获到异常： " << error << endl;
	}
	return 0;
}
