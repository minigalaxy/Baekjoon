#include <iostream>

using namespace std;

string s;

int main()
{
    while(true){
        cin >> s;
        
        if(s == "CU") cout << "see you\n";
        else if(s == ":-)") cout << "I¡¯m happy\n";
        else if(s == ":-(") cout << "I¡¯m unhappy\n";
        else if(s == ";-)") cout << "wink\n";
        else if(s == ":-P") cout << "stick out my tongue\n";
        else if(s == "(~.~)") cout << "sleepy\n";
        else if(s == "TA") cout << "totally awesome\n";
        else if(s == "CCC") cout << "Canadian Computing Competition\n";
        else if(s == "CUZ") cout << "because\n";
        else if(s == "TY") cout << "thank-you\n";
        else if(s == "YW") cout << "you¡¯re welcome\n";
        else if(s == "TTYL"){
            cout << "talk to you later";
            
            break;
        }
        else cout << s << '\n';
    }
    
    return 0;
}
