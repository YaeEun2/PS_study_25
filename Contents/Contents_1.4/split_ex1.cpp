#include <bits/stdc++.h>
using namespace std;

//split 함수 구현
vector<string> split(const string &input, string delimiter) {
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter); //find()는 위치를 반환한다! 문자열을 반환하는게 아님.

    while (end != string::npos) {
        result.push_back(input.substr(start, end-start)); //push_back(위치, 크기).. 그리고 계속 실수하는 지점: 자꾸 start와 위치를 인자로 넣는데 그게 아니라 문자열을 배열에 넣어야 하므로 input.substr을 써줘야함.
        start = end + delimiter.size(); //size는 바이트라는 점.
        end = input.find(delimiter, start);
    }
    
    result.push_back(input.substr(start)); //마지막 문자열은 delimiter가 없으니 처음부터 끝까지 다 넣어줌.
    return result;
}

int main() {
    string str = "apple, banana, orange, grape";
    vector<string> fruits = split(str, ","); //fruits라는 배열에 string을 delimiter ','를 기준으로 나눠서 넣을 것이다~

    for(const string &fruit : fruits){
        cout << fruit << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}