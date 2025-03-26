#include <iostream>

using namespace std;

int N;

int arr;

int c;

int main()
{
    while(true){
        c++;

        cin >> N;

        if(N == 0) break;

        for(int i = 0; i < N; i++) cin >> arr;

        cout << "Case " << c << ": Sorting... done!\n";
    }

    return 0;
}
