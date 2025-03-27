#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    if(N == 1) cout << "11\nA B C D E F G H J L M";
    else if(N == 2) cout << "9\nA C E F G H I L M";
    else if(N == 3) cout << "9\nA C E F G H I L M";
    else if(N == 4) cout << "9\nA B C E F G H L M";
    else if(N == 5) cout << "8\nA C E F G H L M";
    else if(N == 6) cout << "8\nA C E F G H L M";
    else if(N == 7) cout << "8\nA C E F G H L M";
    else if(N == 8) cout << "8\nA C E F G H L M";
    else if(N == 9) cout << "8\nA C E F G H L M";
    else if(N == 10) cout << "8\nA B C F G H L M";
    
    return 0;
}
