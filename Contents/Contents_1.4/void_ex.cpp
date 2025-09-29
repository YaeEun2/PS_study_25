#include <bits/stdc++.h>
using namespace std;
int ret = 1; //ret은 전역변수

void a() {
    ret = 2; //전역변수 ret의 값을 변경.
    cout << ret << "\n";
    return ; 
    //void니까 return 값 없음 (함수의 끝을 명시적으로 나타낸 것으로 void 함수에서는 생략해도됨.)
}

int main() {
    a(); //a라는 함수 호출
    
    cin.ignore();
    cin.get();
    return 0;
}