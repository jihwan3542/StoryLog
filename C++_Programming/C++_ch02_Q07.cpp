#include <iostream>
using namespace std;

int main() {
	char arr[100];
	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(arr, 100);
		if (strcmp(arr, "yes")==0) break;
	}
	cout << "�����մϴ�..." << endl;
}