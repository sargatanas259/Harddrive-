#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int HardDrive ;
    int UsedBytes = 1000 ;
    cout<< "How Large is the Hard drive in GB";
    cin>> HardDrive;
    //long hardDrive = HardDrive * pow (2,10) ;
    //cout << hardDrive;
    double PercentageUsed = .06875;
    double usedSpace = HardDrive * PercentageUsed ;
    double ActualHarddrive = HardDrive- usedSpace;
    cout <<"How Much Hard Drive you really have."<< ActualHarddrive;
    return 0;
}
