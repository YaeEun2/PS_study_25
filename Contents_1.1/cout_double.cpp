#include <bits/stdc++.h>
using namespace std;
typedef long long ll; //typedef를 통해 앞으로 long long은 ll 별칭으로 대신 사용.
double a = 1.23456789;
int main() {
    cout << a << '\n'; //총 6자리 표현(정수부+소수부 합해서)
    cout << fixed << setprecision(3) << a << "\n"; //소수점 3자리까지 표현(4자리에서 반올림)
    cout << fixed << setprecision(8) << a << "\n"; //소수점 8자리까지 표현

    cin.ignore();
    cin.get();
    return 0;
} 
