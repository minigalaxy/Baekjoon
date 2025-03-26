#include <iostream>

using namespace std;

double score = 0.0;

char grade[3];

int main()
{
    cin >> grade;

    if(grade[0] == 'A') score += 4;
    else if(grade[0] == 'B') score += 3;
    else if(grade[0] == 'C') score += 2;
    else if(grade[0] == 'D') score += 1;

    if(grade[1] == '+') score += 0.3;
    else if(grade[1] == '-') score -= 0.3;

    cout << fixed;
    cout.precision(1);

    cout << score;

    return 0;
}
