#include <iostream>

using namespace std;

string D, W;

int res = 0;

int search_document(int cur){
    auto i = D.find(W, cur);
    
    if(i == string::npos) return 0;
    return search_document(i + W.size()) + 1;
}

int main()
{
    getline(cin, D);
    getline(cin, W);
    
    cout << search_document(0);
    
    return 0;
}
