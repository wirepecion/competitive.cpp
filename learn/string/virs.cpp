/* Following program is a C++ implementation of Rabin Karp
Algorithm given in the CLRS book */
#include <bits/stdc++.h>
using namespace std;

// d is the number of characters in the input alphabet
#define d 256

/* pat -> pattern
	txt -> text
	q -> A prime number
*/

int ct=0;

int search(string pat[], string txt[], int q)
{
    int ct=0;
	int M = pat->length();
	int N = txt->length();
	int i, j;
	int p = 0; // hash value for pattern
	int t = 0; // hash value for text
	int h = 1;

	// The value of h would be "pow(d, M-1)%q"
	for (i = 0; i < M - 1; i++)
		h = (h * d) % q;

	// Calculate the hash value of pattern and first
	// window of text
	for (i = 0; i < M; i++) {
		p = (d * p + pat[i]) % q;
		t = (d * t + txt[i]) % q;
	}

	// Slide the pattern over text one by one
	for (i = 0; i <= N - M; i++) {
 
		// Check the hash values of current window of text
		// and pattern. If the hash values match then only
		// check for characters one by one
		if (p == t) {
			/* Check for characters one by one */
			for (j = 0; j < M; j++) {
				if (txt[i + j] != pat[j]) {
					break;
				}
			}

			// if p == t and pat[0...M-1] = txt[i, i+1,
			// ...i+M-1]

			if (j == M)
				ct++;
		}

		// Calculate hash value for next window of text:
		// Remove leading digit, add trailing digit
		if (i < N - M) {
			t = (d * (t - txt[i] * h) + txt[i + M]) % q;

			// We might get negative value of t, converting
			// it to positive
			if (t < 0)
				t = (t + q);
		}
	}
    return ct;
}

/* Driver code */
int main()
{
	int t;
    bool f=true;
    while(cin>>t){
        if(!f) puts("");
        f =false;

        string text; getline(cin,text);
        string pat; getline(cin,pat);
        int q = INT_MAX;
	    // Function Call
	    cout<<search(pat, txt, q);
        return 0;
    }
//    int t;cin>>t;
//
	// we mod to avoid overflowing of value but we should
	// take as big q as possible to avoid the collison
	// int q = INT_MAX;
	// // Function Call
	// cout<<search(pat, txt, q);
    // if (ct>max){
    //     strcpy(ans,pat);
    //     max=ct;
    // }
	// return 0;
}

// This is code is contributed by rathbhupendra
