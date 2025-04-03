#include <iostream>

using namespace std;

int l, s;

int main()
{
    cin >> l >> s;
    
    if(s > l){
        int F;
        
        if(s - l <= 20) F = 100;
        else if(s - l <= 30) F = 270;
        else F = 500;
        
        cout << "You are speeding and your fine is $" << F << ".";
    } else cout << "Congratulations, you are within the speed limit!";
    
    return 0;
}
