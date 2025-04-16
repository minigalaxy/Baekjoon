#include <iostream>

using namespace std;

int n;

int w, h, f;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> w >> h >> f;
        
        cout << "Data set: " << w << ' ' << h << ' ' << f << '\n';
        
        for(int j = 0; j < f; j++){
            if(w > h) w /= 2;
            else h /= 2;
        }
        
        cout << max(w, h) << ' ' << min(w, h) << "\n\n";
    }
    
    return 0;
}
