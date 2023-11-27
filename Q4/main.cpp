#include <iostream>
#include <string>
#include "./validate.cpp"

using namespace std;

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
        return 1;
    } else {
        cout << "No" << endl;
        return 1;
    }

    return 0;
}