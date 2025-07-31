// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
    
//     bool prime = true, bet_prime = true;

//     for (int i = 2; i < m; i += 1)
//     {
//         if (m % i == 0)
//         {
//             prime = false;
//             break;
//         }
//     }
    
//     if (prime)
//     {
//         for (int i = n + 1; i < m; i += 1)
//         {
//             bet_prime = true;  

//             for (int j = 2; j < i; j += 1)
//             {
//                 if (i % j == 0)
//                 {
//                     bet_prime = false;
//                     break;
//                 }
//             }

//             if (bet_prime)  
//                 break;
//         }
//     }

//     if (!bet_prime)
//         cout << "NO" << endl;
//     else if (prime && bet_prime)
//         cout << "YES" << endl;
// }


#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    int next = n + 1;
    while (!isPrime(next)) {
        ++next;
    }

    
    if (next == m)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
