#include <iostream>
#include <string>

using namespace std;


bool validate(string& s, string&t, int k){
    int common = 0;
    int sLen = s.length();
    int tLen = t.length();

    for (int i = 0; i < min(sLen, tLen); ++i) {
        if (s[i] == t[i]) {
            common++;
        } else {
            break;
        }
    }

    int Ops = (sLen - common) + (tLen - common);

    return Ops <= k;
}
