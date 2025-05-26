#include <iostream>
using namespace std;

int main() {
	string str1;
	string str2;
	int count = 0;
	cout << "새 암호를 입력하세요>>";
	cin >> str1;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> str2;
	for (int i = 0; ; i++)
	{
		if (str1[i] != str2[i]) count++;
		if (str1[i] == '\0' || str2[i] == '\0') {
			if (count == 0) cout << "같습니다" << endl;
			else cout << "같지 않습니다" << endl;
			break;
		}
	}
}