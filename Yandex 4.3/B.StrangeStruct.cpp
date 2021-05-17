#include <iostream>
#include <cmath>

using namespace std;

struct strange_struct
{
    int a = 0, b = 0, c = 0, d = 0, queue = 0;
    void set(int aR, int bR, int cR, int dR, int queueR){
        a = aR;
        b = bR;
        c = cR;
        d = dR;
        queue = queueR;
    }
};

int f(strange_struct *str){
    return str->a + str->b + str->c + str->d + str->queue;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    strange_struct st; 
    st.set(3,4,6,5,8);

    strange_struct *stPr = &st; 

    cout << f(stPr);
}   
