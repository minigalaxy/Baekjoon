#include <iostream>
#include <string>

using namespace std;

string s;

int n;

int main()
{
    getline(cin, s);

    bool t = false;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') t = false;
        else if(!t){
            n++;
            t = true;
        }
    }

    cout << n;

    return 0;
}
