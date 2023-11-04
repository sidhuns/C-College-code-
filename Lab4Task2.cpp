#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    bool sarb = true;
    int prem;
    int prem2;
    int why;

    srand(time(0));
// initiates the random.
// loop for game.

    while(sarb){
        prem = (rand() % 6 + 1);
        prem2 = (rand() % 6 + 1);
        why = prem + prem2;
        cout << "Die 1: " << prem << "     " << "Die 2: " << prem2 << "     " << "Total: " << why << endl;
        if ((why == 7) || (why == 9) || (why == 11)) {
            cout << "You're a Winner" << endl;
            cout << "GAME OVER" << endl;
            sarb = false;
        }
        else if (( why == 2)|| (why == 3) || (why ==5)){
            cout << "YOU LOOSE!" << endl;
            cout << "GAME OVER" << endl;
            sarb = false;
        }
        else {
            cout << "Roll again ..." << endl;
        }
        
        }

        return 0;
        }


