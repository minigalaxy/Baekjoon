#include <iostream>

using namespace std;

double w, l, h;

int main()
{
    cin >> w >> l >> h;
    
    cout << ((max(w, l) / min(w, l) <= 2 && min(w, l) >= 2 * h) ? "good" : "bad");
    
    return 0;
}
