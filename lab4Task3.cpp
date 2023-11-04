#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
bool hocus = true;
double faway;
double speed;
double height;

while(hocus){
    cout << "How far away is your friend(feet)? ";
    cin >> faway;
    cout << "How fast are they walking(feet/sec)? ";
    cin >> speed;
    cout << "How high are you before dropping your balloon(feet)? ";
    cin >> height;
    //where the calculations would go no time.
    cout << "It will take " << faway << " seconds for them to reach the balloon point" << endl;
    cout << "It will take " << speed << " seconds for your balloon to travel to the ground" << endl;
    cout << "It will take " << height << " seconds for your balloon to travel to the ground" << endl;

    hocus = false;




}
}