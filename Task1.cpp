#include <iostream>
#include <vector>
#include <string>

#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    int rows;
    int i;
    double logten;
    double logtwo;
    double ln;
    int j;
    int k;
    int step;
    

    cout << "Please enter the number of rows of the table: ";
    cin >> rows;

    cout << "X" << "   " << "log10(x)" << "   " << "log2(x)" << "   " << "ln(x)" << endl;
    cout.precision(8);
    j = 1;

    for (i = 1; i <= rows; ++i){
        logten = log10(j);
        logtwo = log2(j);
        ln = log(j);
        k = log10(j);
        cout << fixed << setprecision(8);
        cout << j << " " << logten << " " << logtwo << " " << ln << endl;
        step = pow( 10 , k) + 0.5;
        j += step;

    
        
    }
    
}