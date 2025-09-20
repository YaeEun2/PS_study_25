#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //이게 뭘까? 아직은 모르겠다
    string a = "aaabbb";
    string b = a.substr(2); //크기 지정x. -> 위치 2부터 문자열 끝까지
    cout << b << "\n"; //abbb

    return 0;

}