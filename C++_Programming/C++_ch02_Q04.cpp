#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	float bigger;
	cout << "5 개의 실수를 입력하라>>";
	cin >> a >> b >> c >> d >> e;
	bigger = a;
	if (bigger < b) bigger = b;
	if (bigger < c) bigger = c;
	if (bigger < d) bigger = d;
	if (bigger < e) bigger = e;
	cout << "제일 큰 수 = " << bigger << endl;
}