#include <iostream>
#include <string>

using namespace std;

int N;

int main()
{
    cin >> N;

    int r = 0;

    int a = 0, b = 0;

    for(int i = 2; i < N + 1; i++){
        int t = i;

        while(true){
            if(t % 10 == 0){
                a++;
                b++;
                t /= 10;
            } else if(t % 2 == 0){
                a++;
                t /= 2;
            } else if(t % 5 == 0){
                b++;
                t /= 5;
            } else break;
        }
    }

    cout << ((a < b) ? a : b);

    return 0;
}
