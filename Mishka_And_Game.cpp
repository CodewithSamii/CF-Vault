
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, count = 0;
//     cin >> n;
//     int p = n;

//     while (n--)
//     {
//         int m, c;
//         cin >> m >> c;
//         if (m > c)
//             count++;
//     }
//     if (count > (p / 2))
//         cout << "Mishka" << endl;

//     else if (p % 2 == 0 && count == p / 2)
//         cout << "Friendship is magic!^^" << endl;
//     else
//         cout << "Chris" << endl;
//     // cout <<"Count : "<< count << endl;

//     // cout <<"p : "<<  p << endl;
//     // cout <<"p/2 : "<< p/2 << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int mishka = 0, chris = 0;

    for (int i = 0; i < n; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
            mishka++;
        else if (c > m)
            chris++;
    }

    if (mishka > chris)
        cout << "Mishka" << endl;
    else if (chris > mishka)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
}
