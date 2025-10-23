#include <iostream>

using namespace std;

string M, D, Y, HM;

int main()
{
    cin >> M >> D >> Y >> HM;

    double res = 0, total;

    if(Y % 400 == 0 || (Y % 100 != 0 && Y % 4 == 0)){
        res += 24 * 60;
        total = 366 * 24 * 60;
    } else {

    }

    if(M == "Febuary") res += 31 * 24 * 60;
    else if(M == "March") res += 28 * 24 * 60;
    else if(M == "April") res +=

    return 0;
}
