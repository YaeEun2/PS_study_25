#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3};

    // 1번 방식
    for (int b : a) //b는 임시변수.
        cout << b << "\n"; // 순서대로 1 줄바꿈 2 줄바꿈 3 줄바꿈

    // 2번 방식
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << "\n";

    cin.ignore();
    cin.get();
    return 0;
}