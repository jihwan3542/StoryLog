#include <iostream>
using namespace std;

int main() {
	int purchase_list = 0;

	cin >> purchase_list;
	cin.ignore();

	int year[365] = { 0 }; //�迭���� �ε����� ��¥�� �ǹ��ϰ� �� �ε����� �ش��ϴ� ���� ���� �ݾ��� �ǹ���
	int month[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 }; //�� ������ ������

	int price_list = 0; //cin���� �Է� �޴� ���� �ݾ� 
	char date[15] = { 0 }; //cin���� �Է� �޴� ��¥(���ڿ�)

	for (int i = 0; i < purchase_list; i++) {
		cin.getline(date, 15, ' ');
		cin >> price_list;
		cin.ignore();
		year[(month[((date[5] - '0') * 10 + (date[6] - '0')) - 1] + ((date[8] - '0') * 10 + (date[9] - '0')))-1] = price_list; //���� ���ڿ��� ���� ��¥�� 2019���� 365�� �� ��ĥ���� ���� Ex(90��/365��)
	}

	int sum = 0; //�ֱ� 30�� �� ���� �ݾ��� �հ�
	int tier[5] = { 0 }; //bronze = 0, silver = 1, gold = 2, platinum = 3, diamond = 4
	for (int i = 0; i < 365; i++) {  //365�� ���� �ݺ����� ���鼭 ���ϸ����� �ֱ� 30�� �ջ� ���� �ݾ��� ����
		sum = 0;
		for (int j = 0; j < 30; j++) { //30�� �ݺ����� ���� 30�� ���� ���� �ݾ��� �ջ�
			if (i-j >= 0) sum += year[i-j];
		}
		if (sum >= 0 && sum < 10000) tier[0]++;  //�� ��� ������
		else if (sum >= 10000 && sum < 20000) tier[1]++;
		else if (sum >= 20000 && sum < 50000) tier[2]++;
		else if (sum >= 50000 && sum < 100000) tier[3]++;
		else if (sum >= 100000) tier[4]++;
	}

	for (int i = 0; i < 5; i++) {  //��� ���
		cout << tier[i] << " ";
	}
}
