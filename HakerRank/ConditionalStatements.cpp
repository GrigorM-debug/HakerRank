#include<iostream>
#include<string>
using namespace std;

int main(){
    string s [] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    if (n > 9) {
        cout << "Greater than 9" << endl;
    }
    else {
        cout << s[n-1] << endl;
    }

    return 0;
}
