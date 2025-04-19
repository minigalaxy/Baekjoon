#include <iostream>

using namespace std;

int T;

long long lt, wt, le, we;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> lt >> wt >> le >> we;
        
        if(lt * wt == le * we) cout << "Tie\n";
        else cout << ((lt * wt > le * we) ? "TelecomParisTech\n" : "Eurecom\n");
    }
    
    return 0;
}
