#include <iostream>

using namespace std;

int main(){

    long long line;
    long long sum = 0; int i = 0;

    while(scanf("%lld", &line)==1){
            if(i > 0)
                sum+=line;
            else;
            i++;
    }    
    printf("%lld",sum);
    
}

// OR
// #include <iostream>
// #include <string>
// #include <sstream>
// #include <fstream>

// using namespace std;

// int main(){

//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     string line;

//     ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 5.1/inputA.txt");
//     int sum = 0, i = 0;

//     while(getline(MyReadFile, line)){
//         stringstream ss(line);

//         while (!ss.eof()){
//             int temp;
//             ss >> temp;
//             if(i > 0)
//                 sum+=temp;
//             else;
//             i++;                     
//         }
//     }    
//     cout << sum;

//     MyReadFile.close();    
// }