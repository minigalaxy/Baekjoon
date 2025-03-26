#include <iostream>

using namespace std;

bool asc = false, desc = false;

int main()
{
    int a, b;

    cin >> a;

    for(int i = 0; i < 7; i++){
        cin >> b;

        if(a - 1 == b) desc = true;
        else if(a + 1 == b) asc = true;
        else {
            asc = true;
            desc = true;

            break;
        }

        a = b;
    }

    if(asc && desc) cout << "mixed";
    else if(asc) cout << "ascending";
    else if(desc) cout << "descending";

    return 0;
}
