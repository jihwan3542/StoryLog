#include <iostream>
using namespace std;

int main() {
	string str1;
	string str2;
	int count = 0;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> str1;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> str2;
	for (int i = 0; ; i++)
	{
		if (str1[i] != str2[i]) count++;
		if (str1[i] == '\0' || str2[i] == '\0') {
			if (count == 0) cout << "�����ϴ�" << endl;
			else cout << "���� �ʽ��ϴ�" << endl;
			break;
		}
	}
}