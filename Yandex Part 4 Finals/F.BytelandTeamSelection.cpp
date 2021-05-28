#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

class contestant
{  
    public : string contestantName;
    public : long long score1, score2, score3, score4, score5;

    public :
    contestant(string cstName, long long sc1, long long sc2, long long sc3, long long sc4, long long sc5){
        contestantName = cstName;
        score1 = sc1;
        score2 =  sc2;
        score3 = sc3;
        score4 = sc4;
        score5 = sc5;
    }   
};

bool compare(string a, string b){
	 return (a + b) < (b + a);
}

string lowestString(string s1, string s2, string s3) {
    
    vector<string> strs {s1,s2,s3};
	string res = "";

	if (strs.empty()) return  "";

	sort(strs.begin(),strs.end(),compare);

	for (string str: strs)
		res += str;
	return res;
}

void to_final(std::vector<contestant>& v, int k){

}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    int k;
    std::vector<contestant> v;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.7/inputD.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line);
        int i = 0; 
        string words;
        long long arr[5];
        int sum = 0;

        while (!ss.eof()){
            
            if(i > 0){
                long long temp;
                ss >> temp;
                arr[i] = temp;
                sum += temp; 
            }
            else
                ss >> words;
            ++i;         
        } 
        v.push_back(contestant(words, arr[0], arr[1], arr[2], arr[3], arr[4])); 
    }
    

    to_final(v, k);

    MyReadFile.close();
    
}