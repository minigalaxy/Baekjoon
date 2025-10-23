#include <map>

using namespace std;

string TM, TD, HM;

int M1, D, Y, H, M2;

map<string, int> month = {
{ "January", 1 },
{ "February", 2 },
{ "March", 3 },
{ "April", 4 },
{ "May", 5 },
{ "June", 6 },
{ "July", 7 },
{ "August", 8 },
{ "September", 9 },
{ "October", 10 },
{ "November", 11 },
{ "December", 12 },
};

int m[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

double res = 0;

int main()
{
    cout.precision(9);
    cout << fixed;

    cin >> TM >> TD >> Y >> HM;

    M1 = month[TM];
    D = stoi(TD.substr(0, 2));
    H = stoi(HM.substr(0, 2));
    M2 = stoi(HM.substr(3, 2));

    for(int i = 0; i < M1 - 1; i++){
        if(i != 1) res += m[i];
        else {
            if(Y % 400 == 0 || (Y % 100 != 0 && Y % 4 == 0)) res += m[i] + 1;
            else res += m[i];
        }
    }

    res += D - 1;

    res *= 24;

    res += H;

    res *= 60;

    res += M2;

    res *= 100;

    cout << (Y % 400 == 0 || (Y % 100 != 0 && Y % 4 == 0) ? res / 366 / 24 / 60 : res / 365 / 24 / 60);

    return 0;
}
