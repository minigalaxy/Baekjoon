#include <iostream>

using namespace std;

int A, B;

int n[1001] = { 0, };

int main()
{
    for(int i = 1, c = 1, t = 1; i <= 1000; i++){
        if(t == 0){
            c++;
            t = c;
        }
            
        n[i] = n[i - 1] + c;
        t--;
    }
    
    cin >> A >> B;
    
    cout << n[B] - n[A - 1];
    
    return 0;
}
