#include <bits/stdc++.h>
using namespace std;

int main()
{
    char w1[101];
    char w2[101];
    cin >> w1 >> w2;
    int len = strlen(w1);

    for (int i = 0; i <len; i +=1){
        int s = (int) w1[i] ^ (int) w2[i];
        cout << s;
    }
}