#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long hexDecToOct(string hexDecNum)
{
    long long i, len=0, decNum=0, octNum=0;
    len = hexDecNum.size();
    len--;
    for(i=0; hexDecNum[i]!='\0'; i++, len--)
    {
        if(hexDecNum[i]>='0' && hexDecNum[i]<='9')
            decNum = decNum + (hexDecNum[i]-48)*pow(16,len);
        else if(hexDecNum[i]>='A' && hexDecNum[i]<='F')
            decNum = decNum + (hexDecNum[i]-55)*pow(16,len);
        else if(hexDecNum[i]>='a' && hexDecNum[i]<='f')
            decNum = decNum + (hexDecNum[i]-87)*pow(16,len);
        else
            return 0;
    }
    i=1;
    while(decNum!=0)
    {
        octNum = octNum + (decNum%8)*i;
        i = i*10;
        decNum = decNum/8;
    }
    return octNum;
}

int main(){

    string n;
    cin >> n;

    cout<<hexDecToOct(n);
}