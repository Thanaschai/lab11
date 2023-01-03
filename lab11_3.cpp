#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream score ;
    score.open("score.txt");
    double sum;
    double count = 0 ;
    double mean ;
    double xpowtwo ;
    double sd ;
    string t ;
    while (getline(score,t)) {
        sum += stod(t);
        xpowtwo += pow(stod(t),2);
        count++ ;
    }
    mean = sum/count ;
    sd = sqrt((xpowtwo/count)-(pow(mean,2))) ;
    cout << "Number of data = " << count << endl ;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd ;


    return 0 ;
}
