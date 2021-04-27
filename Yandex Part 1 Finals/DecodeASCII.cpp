#include <iostream>
#include <string>

using namespace std;

int main(){
    string text, plainText;  

    cin >> text;

    for (int i = 0, z = i, w = i; i < text.length(); i++, w++, z++)
    {   
        int chTwoDigits = ( 10 * (text[i] - '0' ) ) + text[++i] - '0';
        w = i;
        int chThreeDigits = ( 100 * (text[z] - '0' ) ) + ( 10 * (text[w] - '0' ) ) + text[++w] - '0';
        if( chThreeDigits <= 127 && chThreeDigits > 99){
            plainText += char(chThreeDigits);
            i=w;
            z=i;
            continue;
        }
        else
            if( chTwoDigits <= 99 && chTwoDigits >= 0)
                plainText += char(chTwoDigits);
        z=i;
    }
    cout << plainText;    
}