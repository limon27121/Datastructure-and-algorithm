#include <iostream>
#include <string>

using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    string ans = "";
    int n = input.size();
    int i=0;
    while(i<n){
        if(input[i]!=c){
            ans+=input[i];
          
        }
          i++;
    }
    return ans;
}

int main() {
    string str;
    char c;
    getline(cin, str);
    cin >> c;
    string ans = removeAllOccurrencesOfChar(str, c);
    cout << ans << endl;
    return 0;
}
