#include <iostream>
using namespace std;

int main() {
	char arr[5][100];
	int length_of_name = 0;
	int longest_name = 5;
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n" << ">>";
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
	cout << "���� �� �̸��� " << arr[longest_name] << "�Դϴ�." << endl;
}