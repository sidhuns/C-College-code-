#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
// task 1

int closetInt(float cool, float real){
    int realish;
    int coolish;
    coolish = cool;
    realish = real;
    int final;
    final = coolish + realish;
    return final;
}
void fun(int, int&,int&);

int main(){
    int * johny;
    int *pValue = new int;
    *pValue = 45;
    cout << *pValue << endl;
    pValue = new int;
    *pValue = 55;
    cout << *pValue << endl;
    int jan = 5;
    int fan = 10;
    int wan = 0;
    cout << jan/fan << "First " << endl;

    int num = 1;
    int x = 1;
    int j;
    float whiy;
    float vadi;
    int y = 7;
    double answer;
    answer = y % 3;
    char('C' +2);
    cout << char('C' + 2) << endl;
    cout << " this answer" << answer << endl;
    cout << ++num << " " << ++num << " " << num << endl;
    j = ++x;
    cout << j << endl;
    cout << x << endl;
    cout << " enter first: " << endl;
    cin >> whiy;
    cout << " enter second: " << endl;
    cin >> vadi;
    cout << "This is it" << closetInt(whiy,vadi) << endl;

    int m;
    int a = 0;
    int b = 0;
    for (m = 50; m <=90; m = m+ 15){
        fun(m,a,b);
    }
    cout << m << " , " << a << ", " << b << endl;

}
void fun(int t, int& x, int& y){
    int a = 75;
    if (t>a){
        ++x;
    }
    else {
        ++y;
    }
}