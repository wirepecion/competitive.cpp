#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long int ull;
ull m=1e9+7;
ull f[4];

//vector<ull> f(1000001, 0);
int frozenI_Elsa_Anna(int n){
    return 0;
    /*
    The snow glows white on the mountain tonight
    Not a footprint to be seen
    A kingdom of isolation
    And it looks like I'm the queen
    The wind is howling like this swirling storm inside
    Couldn't keep it in, heaven knows I tried
    Don't let them in
    Don't let them see
    Be the good girl you always have to be
    Conceal, don't feel
    Don't let them know
    Well, now they know
    Let it go!
    Let it go!
    Can't hold it back anymore
    Let it go!
    Let it go!
    Turn away and slam the door
    I don't care
    What they're going to say
    Let the storm rage on
    The cold never bothered me anyway
    It's funny how some distance
    Makes everything seem small
    And the fears that once controlled me
    Can't get to me at all
    It's time to see what I can do
    To test the limits and break through
    No right, no wrong, no rules for me
    I'm free
    Let it go!
    Let it go!
    I am one with the wind and sky
    Let it go!
    Let it go!
    You'll never see me cry
    Here I stand and here I'll stay
    Let the storm rage on
    My power flurries through the air into the ground
    My soul is spiraling in frozen fractals all around
    And one thought crystallizes like an icy blast
    I'm never going back, The past is in the past
    Let it go!
    Let it go!
    And I'll rise like the break of dawn
    Let it go!
    Let it go!
    That perfect girl is gone
    Here I stand in the light of day
    Let the storm rage on!
    The cold never bothered me anyway
    */
}

 ull fib(ull n) {
    if (n == 1 || n == 2 || n == 3 || n == 4) {
        return 1;
    }
    f[1] = f[2] = f[3] = f[4] = 1;
    for (ull i = 5; i <= n; i++) {
        f[i] = (((f[i-4]%m + f[i-3]%m)%m + f[i-2]%m)%m + f[i-1]%m)%m;
    }
    return f[n]; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ull x;
    cin >> x;
        f[1] = f[2] = f[3] = f[0] = 1;
    if (x <= 4) {
        cout<<1;
        return 0;
    }
    for (ull i = 5; i <= x; i++) {
        f[4] = (((f[0]%m + f[1]%m)%m + f[2]%m)%m + f[3]%m)%m;
        f[0]=f[1];
        f[1]=f[2];
        f[2]=f[3];
        f[3]=f[4];
    }
    cout << f[3]%m << "\n";
    return 0;
}
