#include <iostream>

using namespace std;

int X, Y;

int main()
{
    cin >> X >> Y;
    
    for(int i = 0; i <= Y - X; i++){
        if(i % 4 == 0 && i % 3 == 0 && i % 5 == 0){
            cout << "All positions change in year " << i + X << '\n';
        }
    }
    
    return 0;
}
