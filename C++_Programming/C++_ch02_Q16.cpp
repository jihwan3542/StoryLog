#include <iostream>
using namespace std;

int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;

	char text[10001];
	char En[26] = { 0 };
	cin.getline(text, 10001, ';');
	cin.ignore(1000, '\n');

	for (int i = 0; i < strlen(text); i++) {
		if (text[i] >= 65 && text[i] <= 90) text[i] += 32;
		if (text[i] >= 97 && text[i] <= 122)
		{
			En[text[i] - 97]+= 1;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 97) << " (" << (int)En[i] << ") : ";
		for (int j = 0; j < En[i]; j++)
			cout << "*";
		cout << endl;
	}
}