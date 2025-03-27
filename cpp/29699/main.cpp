#include <iostream>

using namespace std;

int N;

string l = "WelcomeToSMUPC";

int main()
{
    cin >> N;
    
    cout << l[(N - 1) % 14];
    
    return 0;
}
