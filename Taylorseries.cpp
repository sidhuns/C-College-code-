#include <iostream>
#include <vector>
#include <string>

#include <cmath>
#include <iomanip>
using namespace std;

const double PI = atan(1.0)*4.0;  
//Task 1 function.
double degreesToRadians(double angle_in_degrees){
    double angle_in_radians;
    
    while (angle_in_degrees < 0) {
        angle_in_degrees += 360;
    }
    while (angle_in_degrees > 360){
        angle_in_degrees -= 360;

    }
    angle_in_radians = angle_in_degrees * (PI / 180);
    return angle_in_radians;
}
//task two factorial.
double factorial(double factorial2){
    int realish;
    int final = 1.0;
    
    if (factorial2 < 0){
        final = -1.0;
    }
    else if (factorial2 == 0){
        final = 1.0;
    }
    else if ((factorial2 > 0) && (factorial2 < 1)){
        final = 1.0;
    }
    else {
        realish = factorial2; 
        for( int i = 1; i <= realish; ++i){
            final *= i; 

        }
    }
    return final;
}
// sine function 
double mySine(double intv) {
    double sinv;
    sinv = sin(intv);
    return sinv;
}
// cosine function
double myCosine(double intv2){
    double cosv;
    cosv = cos(intv2);
    return cosv;
}
// tan function.
double myTan(double intv4){
    double tanvs;
    tanvs = tan(intv4);
    return tanvs;
}
// Mytaylor function
bool myThreeTaylor(double angleinrad, double  sinv, double  cosv, double tanv){
    bool tanreal = true;
    string fool;
    if ((angleinrad == 90) || (angleinrad == 270)){
        tanreal = false;
    }
    return tanreal;

}
// full function

// main function for outputting
int main() {
    double angledeg;
    double fN;
    double really;

//output statements that include the inputs for each function. 
    cout << "Degrees to Radians Test Driver" << endl;
    cout << "Enter angle in degrees: ";
    cin >> angledeg;
    cout << setprecision(5);
    cout << "Angle in Radians: " <<  degreesToRadians(angledeg) << endl;
    really = degreesToRadians(angledeg);
//factorial input and output
    cout << "Factorial Test Driver" << endl;
    cout << "Enter N: ";
    cin >> fN;
    cout << "Factorial: " << factorial(fN) << endl;
// sine output
    cout << "Sine test driver" << endl;
    cout << setprecision(5);
    cout << "The sine value of this angle is: " << mySine(degreesToRadians(angledeg)) << endl;
// cosine output
    cout << "Cosine test driver" << endl;
    cout << setprecision(5);
    cout << "The cosine value of this angle is: " << myCosine(degreesToRadians(angledeg)) << endl;
    
// Mythreetaylor 
    cout << myThreeTaylor(degreesToRadians(angledeg), mySine(really) , myCosine(really) , myTan(really)) << endl;

}