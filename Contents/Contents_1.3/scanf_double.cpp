#include <bits/stdc++.h>
using namespace std;
int a, b;
double c;
int main() {
    scanf("%d.%d", &a, &b); //실수를 정수 두 개로 나눠서 받겠다. 입력받는 양식 예시: 3.22
    printf("\n%d %d\n", a, b);

    scanf("%lf", &c);
    printf("%lf\n", c);
    
    // 프로그램 종료 전에 일시정지
    cout << "Press enter to exit...";
    cin.ignore(); // 버퍼 비우기
    cin.get();    // 엔터 입력 대기
    return 0;

}