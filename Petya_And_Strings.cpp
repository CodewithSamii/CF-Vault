#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int sl = a.length();
    bool index = true;

    for (int i = 0; i < sl; i += 1)
    {
        if ((int)a[i] == (int)b[i])
            continue;
        else if ((int)a[i] - (int)b[i] == 32 || (int)a[i] - (int)b[i] == -32)
            continue;
        else
        {
            index = false;
            break;
        }
    }

    if (index){
        cout << 0 << endl;
        return 0;
    }

    /// 2nd LOOP

    // cout << "I am here!" << endl;

    for (int i = 0; i < sl; i += 1)
    {
        if (a[i] > 90)
            a[i] = a[i] - 32;
        if (b[i] > 90)
            b[i] = b[i] - 32;

        if ((int)a[i] < (int)b[i])
        {
            cout << -1 << endl;
            return 0;
        }
        if ((int)a[i] > (int)b[i]){
            cout << 1 << endl;
            return 0;
        }
    }
}

// AbCdEfGhIjKlMnOpQrStUvWxYz
// aBcDeFgHiJkLmNoPqRsTuVwXyZ
// aslkjlkasdd
// asdlkjdajwi


/*

Cleaner : Using Function:

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int n = a.size();

    for (int i = 0; i < n; i++) {
        char ca = tolower(a[i]);
        char cb = tolower(b[i]);

        if (ca < cb) {
            cout << -1 << "\n";
            return 0;
        } 
        else if (ca > cb) {
            cout << 1 << "\n";
            return 0;
        }
    }

    // If all characters matched ignoring case
    cout << 0 << "\n";
    return 0;
}


*/