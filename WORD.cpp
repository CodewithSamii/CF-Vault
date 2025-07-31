#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int strlen = word.length();
    // cout << strlen;

    vector<int> v1;
    vector<int> v2;

    // cout << (int)word[0] << endl;
    for (int i = 0; i < strlen; i += 1)
    {
        if ((int)word[i] < 91)
            v1.push_back((int)word[i]);
        else
            v2.push_back((int)word[i]);
    }

    // cout << "V1:";
    // for (int i : v1)
    // {
    //     cout << i << endl;
    // }
    // cout << "V2:";
    // for (int i : v2)
    // {
    //     cout << i << endl;
    // }

    int n1 = v1.size();
    int n2 = v2.size();

    // cout << n1 << endl << n2;

    if (n1 > n2)
    {
        for (int i = 0; i < strlen; i += 1)
        {
            if ((int)word[i] > 91)
                word[i] = (int)word[i] - 32;
        }
    }
    else if (n1 < n2 || n1 == n2)
    {
        for (int i = 0; i < strlen; i += 1)
        {
            if ((int)word[i] < 91)
                word[i] = (int)word[i] + 32;
        }
    }

    /// printing result
    for (int i : word)
    {
        cout << (char)i;
    }
}

/// Cleaner Version:

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int strlen = word.length();

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < strlen; i += 1)
    {
        if ((int)word[i] < 91)
            v1.push_back((int)word[i]);
        else
            v2.push_back((int)word[i]);
    }

    int n1 = v1.size();
    int n2 = v2.size();

    if (n1 > n2)
    {
        for (int i = 0; i < strlen; i += 1)
        {
            if ((int)word[i] > 91)
                word[i] = (int)word[i] - 32;
        }
    }
    else if (n1 < n2 || n1 == n2)
    {
        for (int i = 0; i < strlen; i += 1)
        {
            if ((int)word[i] < 91)
                word[i] = (int)word[i] + 32;
        }
    }

    for (int i : word)
        cout << (char)i;
}
*/