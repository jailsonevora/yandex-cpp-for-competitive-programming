#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;


class contestant
{  
    public : string contestantName;
    public : long long score1, score2, score3, score4, score5;

    public :
    contestant(string cstName, long long sc1, long long sc2, long long sc3, long long sc4, long long sc5){
        contestantName = cstName;
        score1 = sc1;
        score2 = sc2;
        score3 = sc3;
        score4 = sc4;
        score5 = sc5;
    }   
};

bool compare(contestant a, contestant b){

    auto sca = a.score1 + a.score2 + a.score3 + a.score4 + a.score5;
    auto scb = b.score1 + b.score2 + b.score3 + b.score4 + b.score5;
    
	return a.contestantName < b.contestantName && 
    (a.score1 >= 0 && a.score2 >= 0 && a.score3 >= 0 && a.score4 >= 0 && a.score5 >= 0);
}

void to_final(std::vector<contestant>& v, int k){
    
	sort(v.begin(),v.end(),compare);
    int i = 0;
	while (i < k){
		cout << v[i].contestantName << " " << v[i].score1 << " " << v[i].score2 << " " 
        << v[i].score3 << " " << v[i].score4 << " " << v[i].score5 << "\n";
        i++;
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string line;
    int k = 4;
    std::vector<contestant> v;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex Part 4 Finals/inputF.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line);
        int i = 0, j = 0; 
        string words;
        long long arr[5];

        while (!ss.eof()){
            if(i > 0){
                long long temp;
                ss >> temp;
                arr[j] = temp;
                ++j;
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