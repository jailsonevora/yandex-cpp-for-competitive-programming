#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

struct contestant
{  
    string contestantName;
    long long score1, score2, score3, score4, score5;

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

bool compare(contestant a, contestant b){
	 return (a.contestantName + b.contestantName) < (b.contestantName + a.contestantName); 
     //&& (sca > 0 && scb > 0 && sca > scb);
}

void to_final(std::vector<contestant>& v, int k){
    
	sort(v.begin(),v.end(),compare);

	for (contestant vs: v)
		cout << vs.contestantName << " " << vs.score1 << " " << vs.score2 << " " 
        << vs.score3 << " " << vs.score4 << " " << vs.score5 << "\n";
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    int k = 6;
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