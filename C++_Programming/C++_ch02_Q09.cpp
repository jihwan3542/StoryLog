#include <iostream>
using namespace std;

int main() {
	char question[3][100] = { "이름은?", "주소는?", "나이는?" };
	char arr[3][100];
	for (int i = 0; i < 3; i++) {
		cout << question[i];
		cin.getline(arr[i], 100);
	}
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
}