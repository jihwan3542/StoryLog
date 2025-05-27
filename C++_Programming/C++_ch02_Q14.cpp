#include <iostream>
using namespace std;

void menu_list();
int select_menu();
bool people(int food_number);
void close(int total) { cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~" << endl; }

int main() {

	menu_list();
}

void menu_list() {
	int sum = 0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;

	while (1) {
		sum += select_menu();
		if (sum >= 20000) break;
	}

	close(sum);
}

int select_menu() {
	char menu[50];
	char cafe_list[3][20] = { "����������", "�Ƹ޸�ī��", "īǪġ��" };
	int menu_number = 0;
	cout << "�ֹ�>>";
	cin >> menu >> menu_number;
	cin.ignore(1000, '\n');
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		return 0;
	}
	for (int i = 0; i < 3; i++)
		if (strcmp(menu, cafe_list[i]) == 0 && menu_number != 0)
			switch (i) {
			case 0:
				cout << 2000 * menu_number << "�� �Դϴ�. ���ְ� �弼��" << endl;
				return 2000 * menu_number;
			case 1:
				cout << 2300 * menu_number << "�� �Դϴ�. ���ְ� �弼��" << endl;
				return 2300 * menu_number;
			case 2:
				cout << 2500 * menu_number << "�� �Դϴ�. ���ְ� �弼��" << endl;
				return 2500 * menu_number;
			}
	return 0;

}