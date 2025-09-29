#include <bits/stdc++.h>
using namespace std;
int main() {
    string a = "나는야";
    // a[0]: a 문자열의 0번째 1바이트. a[1]: a 문자열의 1번째 1바이트.
    cout << a[0] << "\n"; //한글은 3바이트이기 때문에 출력x
    cout << a[0] << a[1] << a[2] << "\n"; //0~2번째 1바이트 합해서 3바이트 -> 한글 1글자.
    cout << a << "\n";
    string b = "abc";
    cout << b[0] << "\n"; //영어는 1바이트이므로 a 출력.
    cout << b << "\n";

    cin.ignore();
    cin.get();
    return 0;
}