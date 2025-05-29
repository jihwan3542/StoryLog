#include <iostream>
using namespace std;

void test_case(int n);
void print_result(int i, int result);

int main() {
    int test = 0;
    cin >> test;

    for (int i = 0; i < test; i++) {
        test_case(i);
    }
}

void test_case(int n) {
    int WnH = 0;
    int tsarbomba = 0;
    cin >> WnH >> tsarbomba;

    int** vilege = new int* [WnH];
    for (int i = 0; i < WnH; i++) {
        vilege[i] = new int[WnH];
    }

    for (int i = 0; i < WnH; i++)
        for (int j = 0; j < WnH; j++)
            cin >> vilege[i][j];

    int maxVirus = 0;

    for (int i = 0; i < WnH; i++) {
        for (int j = 0; j < WnH; j++) {
            int sum = vilege[i][j];
            for (int k = 1; k <= tsarbomba; k++) {
                if (i + k < WnH) sum += vilege[i + k][j];
                if (i - k >= 0) sum += vilege[i - k][j];
                if (j + k < WnH) sum += vilege[i][j + k];
                if (j - k >= 0) sum += vilege[i][j - k];
            }
            if (sum > maxVirus) maxVirus = sum;
        }
    }

    print_result(n, maxVirus);

    for (int i = 0; i < WnH; i++) {
        delete[] vilege[i];
    }
    delete[] vilege;
}

void print_result(int i, int result) {
    cout << "#" << i + 1 << " " << result << endl;
}