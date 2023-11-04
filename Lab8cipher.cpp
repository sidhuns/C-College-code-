//Caesar code
// A   B   C   D   E   F   G  H  I  J  K L M  N  O  P  Q  R  S  T  U  V  W X  Y  Z
//65  66  90 (Ascii code)
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;
//The following function is used to encode a char by shifting RIGHT (shift positive) as a parameter
//lower case must be converted to upper case for shifting and then convert back to lower case

char rotateChar (char in_char, int shift){
    if (!isalpha (in_char)) return in_char;
        bool lower_flag = false;
    if (islower (in_char)) {
        in_char = toupper (in_char);
        lower_flag = true;
}
//cout << "Test before offer inside rotation " << in_char << endl;
    
    in_char = in_char + shift;
    if (in_char > 'Z'){
        in_char = 'A' + (in_char - 'A') % 26;
    // in_char = in_char - 'Z' + 'A' - 1; (either this one or above will work)
    }
    if (in_char < 'A'){
        in_char = 'A' + (in_char + 'A') % 26;
    // in_char = in_char - 'Z' + 'A' - 1; (either this one or above will work)
    }
    if (lower_flag)
        in_char = tolower (in_char);
    return in_char;
    }
    //Given a line of string and cipher_key, encopher the string to another string NOT readable
string caesarString (string caesar_string, string cipher_key){
    if (caesar_string.length() == 0) return caesar_string;
    //computer offset (i.e., shift) using cipher_key as a parameter
        int offset = 0;
    for (int i = 0; i < cipher_key.length(); i++){
        offset = offset + cipher_key [i];
    }
    offset = (offset % 23) + 3;
    cout << "The shift is " << offset << endl;

    //pass each char in the caesar string to rotateChar() for enciphering
    for (int i = 0; i < caesar_string.length(); i++){
    //cout << "Test with the caesarString for loop \n";
        caesar_string [i] = rotateChar (caesar_string [i], offset);
    }
    //cout << "Return from caserString \n";
    return caesar_string;
}
//Given
string codeWordGen(string cipher_key){
    int offset = 0;
    int numswap = 0;
    int shifter; 
    string lister = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (int i = 0; i < cipher_key.length(); i++){
        if(!(isalpha(cipher_key.at(i)) || !(isdigit(cipher_key.at(i))))){
            return "";
        }
        offset = offset + cipher_key [i];
    }
    // shift and swap as x = 3.
    cout << offset << endl;
    shifter = (offset % 23) + 3;
    numswap = (offset %9) + 2;
    for (int j = 0; j < 26; j++){
        lister.at(j) = rotateChar(lister.at(j) , shifter);
        
    }
    cout << endl;
    for (int k = 0; k < numswap; k++){
        char sture;
        sture = lister.at(k * (26 / (2 * numswap)));
        lister.at(k * (26 / (2 * numswap))) = lister.at(25 - k * (26 / (2 * numswap)));
        lister.at(25 - k * (26 / (2 * numswap))) = sture;
        
    }

    return lister; 
}
int encrypt (string in_file, string out_file, string cipher_key){
    ifstream inputFile;
    ofstream outputFile;
    string inputString;
    inputFile.open (in_file.c_str());
    outputFile.open (out_file.c_str());
    if (!inputFile) {
        cout << "input file cannot be opened \n";
    }
    if (!outputFile){
        cout << "output file cannot be opened \n";
    }
    //cout << "Get into while loop of Encrypt" << endl;
    //Read a line from the input file, call CaesarString to encipher the line of string
    int x;
    string codeWord = codeWordGen(cipher_key);
    while (getline(inputFile,  inputString)){
        outputFile << caesarString (inputString, codeWord) << endl;
        x = x + 1;
        //cout << "Test at encrypt while loop " << inputString << endl;
    }
    inputFile.close();
    outputFile.close();
    return x;
}

int main(){
    int Text;
    string smallFile = "C:\\Users\\Jone PC\\Documents\\Jone-Courses-UC\\CS121\\2019_before\\2019\\Labs\\01-Qt\\Lab1\\small-file.txt";
    string largeFile = "C:\\Users\\nihaa\\OneDrive\\Desktop\\college\\ENED\\ENED 2\\Coding Files\\.vscode\\large-file.txt";
    string out_file = "C:\\Users\\nihaa\\OneDrive\\Desktop\\college\\ENED\\ENED 2\\Coding Files\\.vscode\\caesar-out-file.txt";
    cout << "Which text do you want to read? \n 1. for short \n 2. for long \n";
    cin >> Text;
    if (Text == 1)
        encrypt (smallFile, out_file, "toobusy"); 
    else
        encrypt (largeFile, out_file, "toobusy");
}