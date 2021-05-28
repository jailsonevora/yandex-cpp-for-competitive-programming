#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;


bool compare(string a, string b){
	 return (a + b) <(b + a);
}

string lowestString(string s1, string s2, string s3) {
    vector<string> strs {s1,s2,s3};
	if (strs.empty())
		return  "";
	sort(strs.begin(),strs.end(),compare);
	string res = "";
	for (int i = 0; i < strs.size(); ++i) {
		res += strs[i];
	}
	return res;
}


// string conCatenate(string s1, string s2, string s3){

//     if(s1 <= s2 && s2 <= s3)
//         return s1+s2+s3;
//     else if(s1 <= s3 && s3 <= s2)
//         return s1+s3+s2;

//     else if(s2 <= s1 && s1 <= s3)
//         return s2+s1+s3;
//     else if(s2 <= s3 && s3 <= s1)
//         return s2+s3+s1;

//     else if(s3 <= s1 && s1 <= s2)
//         return s3+s1+s2;
//     else if(s3 <= s2 && s2 <= s1)
//         return s3+s2+s1;
// }


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    int i=0;
    string arr[3];

    ifstream MyReadFile("C:/Competitive Programming/Yandex C++ for Competitive Programming/yandex-cpp-for-competitive-programming/Yandex Part 4 Finals/inputD.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line); 

        string words;
        ss >> words;
        arr[i] = words;

        i++;                   
    }
    MyReadFile.close();

    cout << lowestString(arr[0], arr[1], arr[2]) << "\n";
    
}