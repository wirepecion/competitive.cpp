#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int prime = 31; // prime number used for hashing
const int mod = 1e9 + 7;

vector<int> RabinKarp(string text, string pattern){
    int n = text.length();
    int m = pattern.length();

    vector<int> matches;

    if(m > n){
        return matches;
    }

    // Calculate the hash value of the pattern and the first m characters of the text
    long long pattern_hash = 0;
    long long text_hash = 0;
    long long prime_pow = 1;
    for(int i = 0; i < m; i++){
        pattern_hash = (pattern_hash + (pattern[i] - 'a' + 1) * prime_pow) % mod; // ez syntax hash = old hash + ascii-'a'+1(that mean a=1,b=2....z=26) * prime %mod
        text_hash = (text_hash + (text[i] - 'a' + 1) * prime_pow) % mod;
        prime_pow = (prime_pow * prime) % mod;
    }

    // Compare the hash values of the pattern and the current substring of the text
    for(int i = 0; i <= n - m; i++){
        if(pattern_hash == text_hash && text.substr(i, m) == pattern){
            matches.push_back(i); //pust loca 
        }

        if(i < n - m){
            text_hash = (text_hash - (text[i] - 'a' + 1) + mod) % mod;
            text_hash = (text_hash + (text[i + m] - 'a' + 1) * prime_pow) % mod;
        }
    }

    return matches;
}

int main(){
    string text, pattern;
    cout << "Enter the text string: ";
    getline(cin, text);
    cout << "Enter the pattern string: ";
    getline(cin, pattern);
    vector<int> matches = RabinKarp(text, pattern);
    for(int i = 0; i < matches.size(); i++){
        cout << "Match found at index " << matches[i] << endl;
    }
    return 0;
}
