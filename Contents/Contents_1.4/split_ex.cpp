#include <bits/stdc++.h>
using namespace std;

//split() 함수 구현
vector<string> split(const string & input, string delimiter) {
    vector<string> result; //결과값은 문자열 배열이니까
    auto start = 0;
    auto end = input.find(delimiter);


    while (end != string::npos) { //delimiter를 못 찾을 때까지 반복
        result.push_back(input.substr(start, end-start)); //결과 배열에 substring 넣음.
        start = end + delimiter.size();
        end = input.find(delimiter, start); //start에서부터 다시 delimiter를 찾음.
    }
    result.push_back(input.substr(start)); //결과 배열에 마지막 substring 넣음.
    return result;
}