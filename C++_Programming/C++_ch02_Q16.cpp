#include <iostream>
using namespace std;

int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

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