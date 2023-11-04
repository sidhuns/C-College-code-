
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

struct Student{
  string firstName, lastName;
  vector <double> scores;
  double average;
};
int input_data(string in_file, vector <Student> & record, istringstream & inSS){
    Student churn; 
    string LineString; 
    fstream LFile;
    int count = 0; 
    double scoreTemp;
    LFile.open (in_file.c_str()); // opening

    if (!LFile){
        cout << "input file could not be opened \n";
    }
    while(getline(LFile , LineString)){ 
        inSS.clear();
        inSS.str(LineString);
        inSS >> churn.firstName;
        inSS >> churn.lastName;
        while( inSS >> scoreTemp){
            churn.scores.push_back(scoreTemp);
            
        }
        record.push_back(churn);
        churn.scores.clear();
        count += 1;
    }
    LFile.close();
    return count;
}
void studentAve(vector <Student> & record){
    Student burn; 
    double plus = 0;
    int i;
    int j;
    for (i =0 ; i < record.size() ; i++) {
        plus = 0;
        for (j = 0; j < record[i].scores.size(); j++){
            plus = plus + record[i].scores[j];
        }
        burn.average = plus / record[i].scores.size();
        record[i].average = burn.average;
    }

}

vector <double> courseAve(vector <Student> & record){
   vector <double> courseAveg; 
   Student churn;
   double plur;
   double currentavg = 0;
   int i;
   int j;
   int k;
   for (k = 0; k < record[k].scores.size(); k++){
       plur = 0;
        for (i =0 ; i < record.size() ; i++) {
            j = 0;
            for (j = 0; j < 1; j++){
                plur = plur + record[i].scores[k];
            }
        }
        currentavg = plur / record[i].scores.size();
        courseAveg.push_back(currentavg);
   }
    return courseAveg;
}
string displayStudents_outSS (vector <Student> record, ostringstream & outSS){
    outSS << fixed << setprecision (2);
    for (int i = 0; i < record.size(); i++){
        outSS << record[i].firstName << ' ' << record[i].lastName << ' ';
        for (int j = 0; j < record[i].scores.size(); j++)
            outSS << record[i].scores[j] << ' ';
        outSS << record[i].average << '\n';
    }
    return outSS.str();
}

int main() {
    istringstream ins;
    vector <Student> records;
    string largefile = "C:\\Users\\nihaa\\OneDrive\\Desktop\\college\\ENED\\ENED 2\\Coding Files\\.vscode\\students-large.txt";
    input_data(largefile, records, ins);
    studentAve(records);
    cout << records.size() << endl;
    for (int i = 0; i <  records.size(); i++){
        cout << records[i].firstName << endl;
        cout << records[i].lastName << endl;
        cout << records[i].average << endl;
    }

}