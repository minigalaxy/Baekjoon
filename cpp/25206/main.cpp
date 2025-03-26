#include <iostream>
#include <unordered_map>

using namespace std;

int n = 0;;

double score;
string name, grade;

double res = 0;

unordered_map<string, double> score_map;

int main()
{
    score_map["A+"] = 4.5;
    score_map["A0"] = 4.0;
    score_map["B+"] = 3.5;
    score_map["B0"] = 3.0;
    score_map["C+"] = 2.5;
    score_map["C0"] = 2.0;
    score_map["D+"] = 1.5;
    score_map["D0"] = 1.0;
    score_map["F"] = 0.0;

    for(int i = 0; i < 20; i++){
        cin >> name >> score >> grade;

        if(grade != "P"){
            res += score * score_map[grade];
            n += score;
        }
    }

    cout << fixed;
    cout.precision(6);

    cout << res / n;

    return 0;
}
