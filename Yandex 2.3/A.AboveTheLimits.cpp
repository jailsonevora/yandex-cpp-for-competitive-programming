#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, c = 1;
    cin >> a;

    for(; ; c++){
        a +=a;        
        int total_digts = ((int)log10(a) + 1);
        if(total_digts >= 8)
            break;
    }
    cout << a << " " << c;
}

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int a, c = 0;
//     cin >> a;

//     for(int total_digts = 0; total_digts < 7; c++){
//         a +=a;        
//         total_digts = (int)log10(a);
//     }
//     cout << a << " " << c;
// }