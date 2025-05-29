#include <iostream>
using namespace std;

int main() {
	int purchase_list = 0;

	cin >> purchase_list;
	cin.ignore();

	int year[365] = { 0 }; //배열에서 인덱스는 날짜를 의미하고 각 인덱스의 해당하는 값은 구매 금액을 의미함
	int month[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 }; //각 월마다 누적합

	int price_list = 0; //cin으로 입력 받는 구매 금액 
	char date[15] = { 0 }; //cin으로 입력 받는 날짜(문자열)

	for (int i = 0; i < purchase_list; i++) {
		cin.getline(date, 15, ' ');
		cin >> price_list;
		cin.ignore();
		year[(month[((date[5] - '0') * 10 + (date[6] - '0')) - 1] + ((date[8] - '0') * 10 + (date[9] - '0')))-1] = price_list; //현재 문자열로 받은 날짜가 2019년의 365일 중 며칠인지 구함 Ex(90일/365일)
	}

	int sum = 0; //최근 30일 간 구매 금액의 합계
	int tier[5] = { 0 }; //bronze = 0, silver = 1, gold = 2, platinum = 3, diamond = 4
	for (int i = 0; i < 365; i++) {  //365일 동안 반복문을 돌면서 매일매일의 최근 30일 합산 구매 금액을 구함
		sum = 0;
		for (int j = 0; j < 30; j++) { //30번 반복으로 과거 30일 간의 구매 금액을 합산
			if (i-j >= 0) sum += year[i-j];
		}
		if (sum >= 0 && sum < 10000) tier[0]++;  //고객 등급 나누기
		else if (sum >= 10000 && sum < 20000) tier[1]++;
		else if (sum >= 20000 && sum < 50000) tier[2]++;
		else if (sum >= 50000 && sum < 100000) tier[3]++;
		else if (sum >= 100000) tier[4]++;
	}

	for (int i = 0; i < 5; i++) {  //등급 출력
		cout << tier[i] << " ";
	}
}
