#include <iostream>
using namespace std;

int main() {
	string s;
	cout << "로미오>>";
	cin >> s;
	string t;
	cout << "줄리엣>>";
	cin >> t;

	if (s == "가위")
	{
		if (t == "가위")
			cout << "비겼습니다." << endl;
		else if (t == "바위")
			cout << "줄리엣이 이겼습니다." << endl;
		else if (t == "보")
			cout << "로미오가 이겼습니다." << endl;
		else
			cout << "줄리엣이 기권하였습니다." << endl;
	}
	else if (s == "바위")
	{
		if (t == "가위")
			cout << "로미오가 이겼습니다." << endl;
		else if (t == "바위")
			cout << "비겼습니다." << endl;
		else if (t == "보")
			cout << "줄리엣이 이겼습니다." << endl;
		else
			cout << "줄리엣이 기권하였습니다." << endl;
	}
	else if (s == "보")
	{
		if (t == "가위")
			cout << "줄리엣이 이겼습니다." << endl;
		else if (t == "바위")
			cout << "로미오가 이겼습니다." << endl;
		else if (t == "보")
			cout << "비겼습니다." << endl;
		else
			cout << "줄리엣이 기권하였습니다." << endl;
	}
	else
	{
		cout << "로미오가 기권하였습니다." << endl;
		if (t != "가위" && t != "바위" && t != "보") {
			cout << "줄리엣이 기권하였습니다." << endl;
			cout << "비겼습니다." << endl;
		}
		else
			cout << "줄리엣이 이겼습니다." << endl;

	}
}
