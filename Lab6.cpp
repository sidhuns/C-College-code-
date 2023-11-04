#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
// task 1
int arrSum(int sumar[], int numsize ){
    int final = 0;
    for (int i = 0; i < numsize; ++i){
        final = sumar[i] + final;
    }
    return final;
}
// task 2
double arrMean(int meanarr[], int numsize){
    double final = 0.0;
    for (int i = 0 ; i < numsize ; ++i){
        final = meanarr[i] + final;
    }
    final = final / numsize;
    return final;
}
// task 3
int arrMin(int minarr[], int numsize){
    int first =0;
    int smallest;
    smallest = minarr[first];
    for (int i = 0 ; i < numsize ; ++i ){
        if (minarr[i] < smallest){
            smallest = minarr[i];
        }
    }
    return smallest;
}
// task 4
int arrMax(int maxarr[], int numsize){
    int first = 0;
    int bigg = 0;
    bigg = maxarr[first];
    for (int i = 0 ; i < numsize ; ++i ){
        if (maxarr[i] > bigg){
            bigg = maxarr[i];
        }
    }
    if (numsize == 0){
        bigg = 0.0;
    }
    return bigg;
}
// standard deviation
double arrStdDev(int arraystd[], int numsize){
    double arrayvis[numsize];
    double lesgo = 0.0;
    double final;
    arrMean(arraystd , numsize);
    for ( int i = 0; i < numsize ; ++i){
        arrayvis[i] = pow(arraystd[i] - arrMean(arraystd, numsize), 2);
        lesgo = arrayvis[i] + lesgo;
    }
    final = pow((lesgo / numsize) , .5);
    return final;
}
//prime numbers
double arrNumPrimes(int arrayprime[], int numsize){
    double final = 0.0 ;
    int j = 2.0;
    int r = 1.0;
    for (int i =0; i < numsize; ++i){
            int j = 2.0;
            int r = 1.0;
            while (j < arrayprime[i]){
                if (arrayprime[i] % j ==0 ){
                    r = 0;
                }
                j++;
            }
            if (r == 1){
                final = final + 1;
            }
            if ((arrayprime[i] == 0) || (arrayprime[i] == 1)){
                final = final - 1;
            }

        
    }
    return final;
}
//set size
double arrSetSize(int setsizear[], int numsize){
    int final = 0;
    int total = 0;
    for ( int i = 0; i < numsize ; i++){
        for (int j = 1 ; j < numsize; j++){
            if (setsizear[i] == setsizear[j]){
                final -= 1;
            }
            if (setsizear[i] != setsizear[j]){
                final += 1;
            }
        }
    }
        if (final == 0){
        final = 1.0;
        }

    return final;
    
    }

//reverse
void arrReverse(int reverarr[], int numsize){
    int reverb[numsize];
    int cool;
    cool = numsize;
    for ( int i = 0; i < numsize ; i++){
        reverb[i] = reverarr[cool];
        cool--; 
    
    }
}
int main() {
    int size1;
    int array1[size1];
    cout << "Enter the first array size" << endl;
    cin >> size1;
    for ( int i =0 ; i < size1; ++i){
        cout << "Array Values: ";
        cin >> array1[i];
    }
    cout << "Sum of array is " << arrSum(array1 , size1) << endl;
    cout << "The mean of the array is " << arrMean(array1 , size1) << endl;
    cout << "The smallest value in the array is " << arrMin( array1 , size1) << endl;
    cout << "The largest value in the array is " << arrMax( array1, size1) << endl;
    cout << "The standard deviation value in the array is " << arrStdDev(array1, size1) << endl;
    cout << "The number of prime numbers in the array is " << arrNumPrimes(array1 , size1) << endl;
    cout << "The set size of the array is " << arrSetSize(array1, size1) << endl;
    arrReverse(array1,size1);
    
}
