#include <iostream>

using namespace std;

int A, B, C;
int n[10] = { 0, };

int main()
{
    cin >> A >> B >> C;

    int t = A * B * C;

    while(t){
        n[t % 10]++;
        t /= 10;
    }

    for(int i = 0; i < 10; i++){
        cout << n[i] << endl;
    }

    return 0;
}
