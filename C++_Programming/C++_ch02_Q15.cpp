#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void calculator() {
    string str = "";

    cout << "? ";
    getline(cin, str);

    stringstream ss(str);

    int a = 0, b = 0;
    char c;
    int t = 0;

    ss >> a >> c >> b;

    switch (c)
    {
    case '+':
        t = a + b;
        break;
    case '-':
        t = a - b;
        break;
    case '*':
        t = a * b;
        break;
    case '/':
        if (b != 0)
            t = a / b;
        else {
            cout << "0으로 나눌 수 없습니다.\n";
            return;
        }
        break;
    case '%':
        if (b != 0)
            t = a % b;
        else {
            cout << "0으로 나눌 수 없습니다.\n";
            return;
        }
        break;
    default:
        cout << "지원하지 않는 연산자입니다.\n";
        return;
    }

    cout << a << ' ' << c << ' ' << b << " = " << t << endl;
}

int main() {
    while (1) {
        calculator();
    }
}