#include <iostream>

using namespace std;

double w, h, bmi;

int main()
{
    cin >> w >> h;
    
    bmi = w / (h * h);
    
    if(bmi > 25) cout << "Overweight";
    else if(bmi >= 18.5) cout << "Normal weight";
    else cout << "Underweight";
    
    return 0;
}
