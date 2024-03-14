// 复合语句
#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int y = 20;
	// 复合语句块
	{
		int z = x + y;
		cout << "在复合语句块内，z的值为：" << z << endl;
	}

	return 0;
}