#include <iostream>
using namespace std;

int main() {
	int a, b;
	int bigger;
	cout << "두 수를 입력하라>>";
	cin >> a >> b;
	if(a>b)
		bigger = a;
	else
		bigger = b;
	cout << "큰 수 = " << bigger << endl;
}