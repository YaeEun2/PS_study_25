#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;
int b = 12;
int c = 2; 
int main() {
    printf("%.6lf\n", a); //소수점이 6자리까지 표현됨.
    printf("%03d\n", b); //정수를 3자리 수로 표현 >> 012
    printf("%02d\n", c); //정수를 2자리 수로 표현 >> 02

    cin.ignore();
    cin.get();
    return 0;
}