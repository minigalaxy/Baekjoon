#include <iostream>

int N, t;
int h = 0, l = 0;

using namespace std;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> t;

        if(i == 0){
            h = t;
            l = t;
            continue;
        }

        if(t > h) h = t;
        if(t < l) l = t;
    }

    cout << l << ' ' << h;

    return 0;
}
