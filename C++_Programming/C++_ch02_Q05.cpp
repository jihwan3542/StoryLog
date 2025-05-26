#include <iostream>
using namespace std;

int main() {
	char str[100];
	int count = 0;
	cin.getline(str, 100);

	for (int i = 0; i < 100; i++) {
		if (str[i] == 'x')
			count++;
	}
	cout << "x의 개수는 " << count << endl;
}