#include <iostream>
#include <string>

using namespace std;

int main()
 {

    char muniLine [50]; //name of the muni line being surveyed
    int days;           //number of days the study was conducted
    int passengers;     //number of passengers surveyed

    cout << " " << endl;
    cout << " " << endl;
    cout << "Welcome to Muni Ridership calculator." << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Which muni line or bus was surveyed?" << endl;
    cin.getline  (muniLine,50) ;
    cout << " " << endl;
    cout << "For how many days was the survey conducted?" << endl;
    cin  >> days ;
    cout << " " << endl;
    cout << "How many passengers were surveyed?" << endl;
    cin  >> passengers ;
    cout << " " << endl;
    cout << "According to your survey an average of "<<static_cast<double>(passengers)/days << endl;
    cout << "people rode the " << muniLine  << " bus line.\n";

    return 0;
 }
