#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr;
	cout << "���ڿ� �Է�>>";
	getline(cin, arr);
	for (int i = 0; i < arr.length(); i++) {
		for (int j = 0; j <= i; j++)
			cout << arr[j];
		cout << endl;
	}
}