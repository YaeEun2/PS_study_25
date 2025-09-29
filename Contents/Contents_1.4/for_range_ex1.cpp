#include <bits/stdc++.h>
using namespace std;

int a[10], n;
int main() {
    for (int i : a) {
        cout << i << " "; //i 자체가 a[0], a[1], ... 다. index가 아니고.
    }

    cin.ignore();
    cin.get();
    return 0;
}