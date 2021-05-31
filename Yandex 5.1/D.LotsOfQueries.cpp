#include <iostream>

using namespace std;

int main(){

    long long qN, q;
    long long n;
    scanf("%lld", &n);    
    scanf("%lld", &qN);
    bool flag = false;

    while(scanf("%lld", &q)==1){
        long long i = 1;
        while(i<=n){               
            if(i == q){ 
                flag = true;
                break;
            }            
            i++;
        }
        if(flag){ printf("YES\n"); flag = false;}
        else printf("NO\n");
    }
}