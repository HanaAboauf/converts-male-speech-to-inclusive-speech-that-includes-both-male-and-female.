// Purpose: converts male speech to inclusive speech that includes both male and female.
// Author: Hana Hany Ibrahim
// Section: S3,S4
// ID: 20220374
// TA: Eng/Belal
// Date: 5 Nov 2023
#include <bits/stdc++.h>
using namespace std;
//this function converts male speech to inclusive speech that includes both male and female.
// It takes original sentence & constant string that we would to replace & constant string that we would to replace to
void convertion(string& original, const string& from , const string& to){
    /*In this condition I check if the string that we would to convert not empty
     to avoid an infinite loop **/
    if(!from.empty()){
        size_t start_posistion=0;
        /*Inside the loop, the function calls the replace method of the original string, which takes three parameters:
         * the position to start replacing from (start_position), the number of characters to replace
         *(from.length()), and the string to replace with (to). The method replaces a part of the original string with another string.**/
        while((start_posistion=original.find(from,start_posistion))!=string::npos){
            original.replace (start_posistion, from.length (), to);
            start_posistion+= to.length ();
        }
    }
}
int main() {
    string sentence;
    getline(cin,sentence);
    convertion(sentence, " he ", " he or she ");
    convertion(sentence, " He ", " He or She ");
    convertion(sentence, " him ", " him or her ");
    convertion(sentence, " his ", " his or her ");
    cout<<sentence<<"\n";
    return 0;
}
