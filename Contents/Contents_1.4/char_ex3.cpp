#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a = '\0'; // null 문자
    char b = 0;    // null 문자
    char c = NULL; // null 문자
    string d = ""; // 공백. null 아님
    cout << "hello";

    if (a == b)
        cout << 1;
    if (b == c)
        cout << 1;
    // 빈 문자열은 아니다.

    if (string(1, a) == d)
        cout << 1;

    cin.ignore();
    cin.get();
    return 0;
}