#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	float bigger;
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b >> c >> d >> e;
	bigger = a;
	if (bigger < b) bigger = b;
	if (bigger < c) bigger = c;
	if (bigger < d) bigger = d;
	if (bigger < e) bigger = e;
	cout << "���� ū �� = " << bigger << endl;
}