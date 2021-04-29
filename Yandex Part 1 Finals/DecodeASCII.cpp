#include <iostream>
#include <string>

using namespace std;

// string recursive(string text, int i);
// int recursive(int text);


// string recursive(string text, int i){

//         string plaintext;
//         if(i == 0)
//             return "";
//         return plaintext +=char(recursive(text[i]));
// }

// int recursive(int text){
//         return ( 100 * (recursive(text-2) - '0' ) )  + recursive(text-1);
// }

// int main(){
    
//     string text;  
//     cin >> text;
//     // for (int i = text.length(); i >= 0; i--)
//     // {
//         int i = text.length();
//         cout << recursive(text, i) << "\n";
//     // }
// }


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