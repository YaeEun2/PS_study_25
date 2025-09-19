#include <bits/stdc++.h>
using namespace std;
double a(); //함수 a 선언만 함.
int main() {
    double ret = a();
    cout << ret << "\n";

    cin.ignore();
    cin.get();
    return 0;

}

double a() { //함수 a 정의. 하지만, 시간 절약을 위해 선언과 정의를 위에서 한 번에 하는게 좋음.
    return 1.2333;
}