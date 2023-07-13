#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void reverse_word(string& input, int start, int end) {

    while (start < end) {

        swap(input[start++], input[end--]);

    }

}

string reverseEachWord(string input)
{
   int i = 0;

    int start = 0;

    int end = 0;

  

    while (i < input.size()) {
        //if i get any space means its a word  so (reverse it)

        if (input[i] == ' ') {

            //each word reverse indivually

        reverse_word(input, start, end - 1);

            start = i + 1;

            end = i + 1;

        } 

        // its charcter (no reverse) 
        else {

          end++;
        }

        i++;
    }
    reverse_word(input,start,end-1);
   return input;
}

int main() {

    string str;

    getline(cin, str);

    string ans = reverseEachWord(str);

    cout << ans << endl;

    return 0;

}