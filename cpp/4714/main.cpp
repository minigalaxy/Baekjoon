#include <iostream>

using namespace std;

double n;

int main()
{
    cout.precision(2);
    
    while(true){
        cin >> n;
        
        if(n < 0) break;
        
        cout << "Objects weighing ";
        
        cout << fixed;
        
        cout << n << " on Earth will weigh ";
        
        cout << fixed;
        
        cout << n * 0.167 << " on the moon.\n";
    }
    return 0;
}
