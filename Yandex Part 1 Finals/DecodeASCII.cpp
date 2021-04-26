#include <iostream>
#include <string>
#include <string>
#include <map>

using namespace std;

int main(){
    string text, plainText;    
    multimap<int, char> asciiMap;

    cin >> text;

    for (int i = 0, z = i, w = i; i < text.length(); i++, w++, z++)
    {   
        int chTwoDigits = ( 10 * (text[i] - '0' ) ) + text[++i] - '0';
        w = i;
        int chThreeDigits = ( 100 * (text[z] - '0' ) ) + ( 10 * (text[w] - '0' ) ) + text[++w] - '0';
        // valid three digits
        if( chThreeDigits <= 127 && chThreeDigits > 99){
            plainText += char(chThreeDigits);
            //asciiMap.insert(ch, char(ch));
            continue;
        }
        else{            
            // valid Two digits
            if( chTwoDigits <= 99 && chTwoDigits >= 0)
                plainText += char(chTwoDigits);
                //int temp = text[i] + text[++i];
                //asciiMap.insert(ch, char(ch));
        }
        z=i;
    }
    
    cout << plainText;
    
}