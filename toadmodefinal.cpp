#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector> 
using namespace std;

bool findAveMax(vector<int> nums, double * ave, int & max){
    if (nums.size() <= 0) {
        return false;
    }
    else {
        double final;
        double count = 0;
        max = nums[0];
        for( int i = 0 ; i < nums.size(); i++){
            count = count + 1;
            final += nums[i];
            if (nums[i] > max){
                max = nums[i];
            }
        }
        *ave = final / nums.size();
        return true;
    }

}

string deCodeWordGen(string codeWord){
    string dope = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string real = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count = 0;
    cout << dope[0] << " first" << endl;
    for(int i = 0; i < 26; i++){
        count = codeWord[i] - 'A';
        real[count] = dope[i];
    }
    cout << real << endl;
    return real;
}

int main(){
    string james =  "UWSYQAOCMEFGHIJKLDNBPZRXTV";
    deCodeWordGen(james);
}