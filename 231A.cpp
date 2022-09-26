#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solution(vector<int> & choices){
    int yes = 0;
    for (auto el : choices){
        if (el == 1){
            yes++;
        }

        if (yes == 2){
            return 1;
        }
    }

    return 0;
}


int main(){
    int test_count;
    std::cin >> test_count;
    std::vector<vector<int>> tests;

    for (int i = 0; i < test_count; ++i){
        vector<int> tmp2;
        for (int j = 0 ; j< 3; ++j){
            int tmp;
            cin >> tmp;
            tmp2.push_back(tmp);
        }
        tests.push_back(tmp2);
    }
    int sum = 0;
    for (auto el : tests){
        sum += solution(el);
    }
    cout << sum;
    return 0;
}