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

class cityVacRec{
    private:
        string cityName;
        vector <int> dosePopulation;
        int cityPopulation;
        int totalDoseNum;
    public:
        cityVacRec(string city_name, int city_population);
        vector <int> addVacDosePopu ( int vacDoseNum, int numPeople);
        double vacDoseRate();

};

cityVacRec :: cityVacRec( string city_name, int city_population){
    cityName = city_name;
    cityPopulation = city_population;
    totalDoseNum = 0;
}

vector <int> cityVacRec::addVacDosePopu( int vacDoseNum, int numPeople){
    
}

double cityVacRec::vacDoseRate(){
    double total = 0;
    double final = 0; 
    for( int i = 0; i < totalDoseNum; i++){
        total = total + dosePopulation[i];
    }
    final = (total / totalDoseNum) / cityPopulation;
    return final;
}