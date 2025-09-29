#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int arr[10];

    cout << "size of int: " << sizeof(int) << " byte" << "\n";
    cout << "size of a: " << sizeof(a) << " byte" << "\n";
    cout << "whole size of array arr: " << sizeof(arr) << " byte" << "\n";
    cout << "# of elements of array arr: " << sizeof(arr) / sizeof(int) << " byte" << "\n";

    cin.ignore();
    cin.get();
    return 0;

}