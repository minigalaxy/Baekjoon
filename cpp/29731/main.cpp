#include <iostream>

using namespace std;

int N;

string S;

bool res = true;

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        getline(cin, S);
        
        if(S != "Never gonna give you up" && S != "Never gonna let you down" && S != "Never gonna run around and desert you" && S != "Never gonna make you cry" && S != "Never gonna say goodbye" && S != "Never gonna tell a lie and hurt you" && S != "Never gonna stop") res = false;
    }
    
    cout << ((res) ? "No" : "Yes");
    
    return 0;
}
