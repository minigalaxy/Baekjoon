#include <iostream>

using namespace std;

int n;

int x[200000], y[200000];
int stan, ollie;

int main()
{
    while(true){
        stan = 0;
        ollie = 0;

        cin >> n;

        if(n == 0) break;

        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i];
        }

        for(int i = 0; i < n; i++){
            if((x[i] > x[n / 2] && y[i] > y[n / 2]) || (x[i] < x[n / 2] && y[i] < y[n / 2])) stan++;
            else if((x[i] > x[n / 2] && y[i] < y[n / 2]) || (x[i] < x[n / 2] && y[i] > y[n / 2])) ollie++;
        }

        cout << stan << ' ' << ollie << '\n';
    }

    return 0;
}
