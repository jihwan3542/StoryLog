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
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
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
		cout << "다시 주문하세요!!" << endl;
		return false;
	}
	char food[3][10] = { "짬뽕", "짜장", "군만두" };
	int people_number = 0;
	if (food_number == 4) {
		cout << "오늘 영업은 끝났습니다." << endl;
		return true;
	}
	cout << "몇인분?";
	cin >> people_number;
	cin.ignore(100, '\n');
	if (cin.fail()) {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "다시 주문하세요!!" << endl;
		return false;
	}
		cout << food[food_number - 1] << " " << people_number << "인분 나왔습니다." << endl;
		return true;
}