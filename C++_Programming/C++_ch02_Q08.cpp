#include <iostream>
using namespace std;

int main() {
	char arr[5][100];
	int length_of_name = 0;
	int longest_name = 5;
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n" << ">>";
	for (int i = 0; i < 5; i++) {
		cin.getline(arr[i], 100, ';');
	}
	for (int i = 0; i < 5; i++) {
		if (length_of_name < strlen(arr[i])) {
			length_of_name = strlen(arr[i]);
			longest_name = i;
		}
		cout << i+1 << " : " << arr[i] << endl;
	}
	cout << "가장 긴 이름은 " << arr[longest_name] << "입니다." << endl;
}