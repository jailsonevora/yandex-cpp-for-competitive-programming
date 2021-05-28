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
	if (strs.empty())
		return  "";
	sort(strs.begin(),strs.end(),compare);
	string res = "";
	for (int i = 0; i < strs.size(); ++i) {
		res += strs[i];
	}
	return res;
}

void to_final(std::vector<contestant>& v, int k){

}

int countWords(){

    string line;
    int countWords=0;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.7/inputD.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line); 

        while (!ss.eof()){
            string words;
            ss >> words;
            if(!words.empty()) 
                countWords++;            
        }                    
    }
    MyReadFile.close();

    return countWords;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << countLines() << " " << countWords();
    
}