#include <iostream>
using namespace std;

int select_menu();
bool people(int food_number);

int main() {

	while (1) {
		if (people(select_menu())) break;
	}
}

int select_menu() {
	int menu;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	cout << "«��:1, ¥��:2, ������:3, ����:4>>";
	cin >> menu;
	cin.ignore(100, '\n');
	if (cin.fail()) {
		cin.clear();
		cin.ignore(100, '\n');
		return 0;
	}
	return menu;

}

bool people(int food_number) {
	if (food_number != 1 && food_number != 2 && food_number != 3 && food_number != 4) {
		cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		return false;
	}
	char food[3][10] = { "«��", "¥��", "������" };
	int people_number = 0;
	if (food_number == 4) {
		cout << "���� ������ �������ϴ�." << endl;
		return true;
	}
	cout << "���κ�?";
	cin >> people_number;
	cin.ignore(100, '\n');
	if (cin.fail()) {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		return false;
	}
		cout << food[food_number - 1] << " " << people_number << "�κ� ���Խ��ϴ�." << endl;
		return true;
}