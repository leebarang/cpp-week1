#include <iostream>

using namespace std;

int sum2(int a, int b);
int sub2(int a, int b);
int mul2(int a, int b);
int div2(int a, int b);

/**
 * 사칙연산을 구하는 프로그램
 * @version 1.0.0
 * @author leebarang
 */
int main() {
    int a,b;

    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    cout << a << " + " << b << " = " << sum2(a,b) << endl; // 덧셈
    cout << a << " - " << b << " = " << sub2(a,b) << endl; // 뺄셈
    cout << a << " * " << b << " = " << mul2(a,b) << endl; // 곱셈
    cout << a << " / " << b << " = " << div2(a,b) << endl; // 나눗셈

    return 0;
}
