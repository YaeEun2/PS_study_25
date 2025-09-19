#include <bits/stdc++.h>
using namespace std;
int main() {
    string a = "love is";
    a += " pain!"; //문자열에 문자열 더할 때 += 사용.
    a.pop_back(); //문자열 끝을 지움. a="love is pain"
    cout << a << " : " << a.size() << "\n"; //size: 문자열의 사이즈 반환

    cout << char(*a.begin()) << "\n";
    cout << char(*(a.end()-1)) << "\n";

    a.insert(0, "test "); //insert: 특정 위치에 문자열 삽입.
    cout << a << " : " << a.size() << "\n";
    //test love is pain : 17

    a.erase(0, 5); //erase: 특정 위치의 문자열을 크기만큼 삭제
    cout << a << " : " << a.size() << "\n";
    //love is pain : 12

    auto it = a.find("love"); //find: 문자열 찾아서 위치 반환. 없으면 string::npos 반환.
    if (it != string::npos){
        cout << "포함되어 있다." << "\n";
    }
    cout << it << "\n"; //문자열 a에서 문자열 "love"의 위치 출력
    cout << string::npos << "\n"; //string::npos는 size_t의 최댓값. os에 따라 달라짐.

    cout << a.substr(5, 2) << "\n"; //substr(위치, 크기): 문자열의 '위치'에서 '크기'만큼 문자열 출력
   //is가 출력 

   cin.ignore();
   cin.get();
   return 0;





}