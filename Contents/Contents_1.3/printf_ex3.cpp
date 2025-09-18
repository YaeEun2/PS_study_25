#include <bits/stdc++.h>
using namespace std;
int a = 1;
char s = 'a';
string str = "Avengers";
double b = 1.223123;
int main() {
    printf("i am a ironman: %d\n", a);
    printf("i am a ironman: %c\n", s);
    printf("i am a ironman: %s\n", str.c_str()); //아직은 왜 str.c_str()인지 모르겠당
    printf("i am a ironman: %lf\n", b);

    cin.ignore();
    cin.get();
    return 0;
}