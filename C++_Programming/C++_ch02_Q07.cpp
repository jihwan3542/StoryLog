#include <iostream>
using namespace std;

int main() {
	char arr[100];
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(arr, 100);
		if (strcmp(arr, "yes")==0) break;
	}
	cout << "종료합니다..." << endl;
}