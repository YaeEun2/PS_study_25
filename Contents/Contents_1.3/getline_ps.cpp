#include <bits/stdc++.h>
using namespace std;
int T;
string s;
int main() {
    cin >> T; //T개를 cin (입력)받겠다.
    string bufferflush; //개행문자를 버퍼에서 제거하기 위함.
    getline(cin, bufferflush);
    for (int i=0; i<T; i++) { //T개 입력받음.
        getline(cin, s);
        cout << s << "\n";
    }
      // 프로그램 종료 전에 일시정지
    cout << "Press enter to exit...";
    cin.ignore(); // 버퍼 비우기
    cin.get();    // 엔터 입력 대기
    return 0;


}