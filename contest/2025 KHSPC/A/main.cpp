#include <iostream>

using namespace std;

string A, B;

string res;

int main()
{
    cin >> A >> B;

    int t = 0, s = 0;

    for(char c: A){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') t++;
        else if(t > 0) break;

        res.push_back(c);
    }

    if(res.size() == A.size()){
        cout << "no such exercise";

        return 0;
    }

    t = 0;
    s = res.size();

    for(char c: B){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') t++;
        else if(t > 0) break;

        res.push_back(c);
    }

    if(res.size() == s + B.size()) cout << "no such exercise";
    else cout << res;

    return 0;
}
