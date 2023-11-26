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

int main(){
    string s, t;
    int k;

    getline(cin, s);
    if(s.length()>100){
        cout << "S length must be up to 100" << endl;
        return 0;
    }

    getline(cin, t);
    if(t.length()>100){
        cout << "T length must be up to 100" << endl;
        return 0;
    }

    cin >> k;
    if(k < 0 || k > 100){
        cout << "K value must be between 0 and 100" << endl;
        return 0;
    }

    if (validate(s, t, k)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}