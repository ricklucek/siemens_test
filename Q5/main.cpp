#include "../Q4/validate.cpp"

string s1="blablablabla";
string t1="blablabcde";
int k1=8;

string s2="cdef";
string t2="aba";
int k2=7;

string s3="blablablabla";
string t3="blablabcde";
int k3=7;

string s4="ffg";
string t4="lpde";
int k4=7;

string s5="";
string t5="blablabcde";
int k5=1;

int main() {

    //Test 1 - EXPECTED TRUE
    if(validate(s1, t1, k1)){
        cout << "Test 1 Sucess!" << endl;
    }else{
        cout << "Test 1 Failure!" << endl;
    }

    //Test 2 - EXPECTED TRUE
    if(validate(s2, t2, k2)){
        cout << "Test 2 Sucess!" << endl;
    }else{
        cout << "Test 2 Failure!" << endl;
    }

    //Test 3 - EXPECTED FALSE
    if(validate(s3, t3, k3)){
        cout << "Test 3 Sucess!" << endl;
    }else{
        cout << "Test 3 Failure!" << endl;
    }

    //Test 4 - EXPECTED TRUE
    if(validate(s4, t4, k4)){
        cout << "Test 4 Sucess!" << endl;
    }else{
        cout << "Test 4 Failure!" << endl;
    }

    //Test 5 - EXPECTED FALSE
    if(validate(s5, t5, k5)){
        cout << "Test 5 Sucess!" << endl;
    }else{
        cout << "Test 5 Failure!" << endl;
    }

    return 0;
}
