#include <iostream>

using namespace std;

long long N;

int main()
{
    cin >> N;

    if(N == 0){
        cout << "NO";

        return 0;
    }

    while(N){
        if(N % 3 == 2){
            cout << "NO";

            return 0;
        }

        N /= 3;
    }

    cout<< "YES";

    return 0;
}
