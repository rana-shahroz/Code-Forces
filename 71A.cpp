#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solution(string & str){
    int size = str.size();
    if (size <= 10){
        cout << str << endl;
        return;
    }

    string tmp = "";
    tmp += str[0];
    tmp += to_string(size - 2);
    tmp += str[size - 1];

    cout << tmp << endl;
}


int main(){
    int test_count;
    std::cin >> test_count;
    std::vector<string> tests;

    for (int i = 0; i < test_count; ++i){
        string tmp;
        cin >> tmp;
        tests.push_back(tmp);
    }

    for (auto el : tests){
        solution(el);
    }

    return 0;
}