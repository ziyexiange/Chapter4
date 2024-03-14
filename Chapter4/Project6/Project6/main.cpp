// ∑∂Œßfor”Ôæ‰
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	for (const auto& row : arr) {
		for (int value : row) {
			std::cout << value << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
