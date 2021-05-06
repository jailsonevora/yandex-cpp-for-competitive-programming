#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long l, r, count = 0, n;

    cin >> l >> r;

    for (n = l; ( (n+1) % n == 0) && n <= r ; n++)
        count++;

    cout << fixed << count;   
}

// or
// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

// 	long long l, r;

// 	cin >> l >> r;

//     long long count = 0;
// 	for (long long i = l, j = l+1; (j%i == 0) && i <= r; i++, j++)
// 		 count++;
//     cout << fixed << count;   
// }