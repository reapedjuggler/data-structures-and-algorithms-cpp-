
/*          IT IS GOING TO HAPPEN !
                because
                 I AM GOING TO MAKE IT HAPPEN !      */


// all you need is to be consistent , even in your darkest times

// あきらめない -- Uzumaki Naruto !

// When something is important enough, you do it even if the odds are not in your favor.

#include "bits/stdc++.h"

using namespace std;

#define DIEHOD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define lld long long int
#define ld long double
#define ll long long
#define ulld unsigned long long int
#define vec vector < lld >
#define pb push_back
#define ss second
#define ff first
#define vvi   vector < pair <lld , lld> >
#define pii pair<lld , lld>

#define FOR(i , n) for (int i = 0; i < n; i++)
#define FORR(i , n) for (int i = n - 1; i >= 0; i--)
#define rep(i , a , b)  for(lld i = a; i < b ; i++)
#define reps(i , a , b) for(lld i = a ; i >= b ; i--)

#define all(A) begin(A) , end(A)
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define mem(a , b) memset(a , b , sizeof(a))

#define mpp make_pair
#define debug1(a,b) cout<<a<<": "<<b<<endl
#define debug cout<<"Reached here"<<endl
#define finish(x) cout << x << " ";

#define inf (lld)(1e18)
#define fin -999999999999999999
#define EPS 1e-9
const ld PI = 3.1415926535897932384626;
#define mod 1000000007
#define tolower(s)   std::transform(s.begin(), s.end(), s.begin(),[](unsigned char c){ return std::tolower(c); });



// Do SMTH instead of sitting mofo

// BINARY SEARCH zarur dekh lena (kaafi useful)

// String ka question hai to y zarur dekh lena kahi Dsu ya Graph se solve ho jae
// ya fir STACK se bhi ho sakta hai ...

// CONSTRUCTIVE ALGOS ke case mai pattern ke alava brute force bhi karke dekh lena
// jese digits hai to ek extra 0 se 9 tk ka ya agar character hai to ek 'a' se 'z' tak
// for loop laga kar check karo ki kahi
// ek particular X mil jae jo pattern crack kar de....

// also ODD EVEN ka pattern Zarur Check kar lena
// Especially jaha ai divides ai + 1 jese conditions ho
// to ek ko one rakh kar next ko odd ya even karke dekh lo


// keep in mind apna best dena ki zarurat tabhi sabse zada hoti hai
// jab aap sabse zada kharab state mai ho tabhi kuch hoga

// BHAI  .... DP with recurrance contest 672 nuksaan ho gaya tha dp na soch kar


/*************/

// lld pow1(int  a , int y) {
//   a %= mod;
//   lld  ans = 1;

//   while (y > 0) {

//     if (y & 1)
//       ans = (ans * a) % mod;

//     y = y >> 1;
//     a = (a * a) % mod;
//   }
//   return ans;
// }

// lld power(int a, int b) {
//   lld ans = 1;
//   while (b > 0) {
//     if (b & 1) ans = ans * a;
//     b = b >> 1;
//     a = a * a;
//   }
//   return ans;
// }

// bool isPrime(lld n) {
//   if (n <= 1)  return false;
//   if (n <= 3)  return true;
//   if (n % 2 == 0 || n % 3 == 0) return false;

//   lld p = sqrt(n);

//   for (lld i = 5; i <= p ; i = i + 6)
//     if (n % i == 0 || n % (i + 2) == 0)
//       return false;
//   return true;
// }

// bool sortbysec(const pair<lld , lld > &a, const pair<lld , lld > &b) {
//   return (a.ss < b.ss);
// }

// void init () {
//     vis.clear();
//     for (auto &x: g) x.clear();
// }




// Regarding bitwise ----------

// a + b = (a ^ b) + 2*(a & b)
// b^c = (a ^ b ) ^ (a ^ c)
// a + b = a | b + a & b
// a ⊕ b = a | b − a & b


/* Direction Array */

// int dx[] = {1, -1, 0, 0};
// int dy[] = {0, 0, 1, -1};
// int dx[] = {0, 0, 1, -1, -1, 1, -1, 1};
// int dy[] = { -1, 1, 0, 0, 1, 1, -1, -1};


/********** Change this if there is a higher value computation needed ***********/
const int MAXN = 4e6 + 5;

vec fac, invFac;

lld mpow (lld x, lld y) {

    lld ans = 1LL;

    // 2 ^ 4 == 16 ==> (2 * 2) ^ ((2 * 2))

    //log(O(y))

    while (y) {

        if (y & 1) {

            ans = (ans % mod) * (x % mod);

            ans %= mod;
            ans += mod;
            ans %= mod;
        }

        x = x * x;

        y >>= 1;

        x %= mod;
        x += mod;
        x %= mod;

    }

    return ans;

}

void preCompute () {

    FOR(i, MAXN) {

        if (!i) fac[i] = 1LL;

        else {

            fac[i] = ((i % mod) * (fac[i - 1]) % mod);

            fac[i] %= mod;
            fac[i] += mod;
            fac[i] %= mod;

        }

    }


    FOR(i, MAXN) {

        invFac[i] = mpow(fac[i], mod - 2) % mod;
        invFac[i] %= mod;
        invFac[i] += mod;
        invFac[i] %= mod;
    }

}

lld compute (lld n, lld k) {

    if (n <= k) return 1LL;

    // ncr == n! / (r!) * (n - r)! == n! * (inv[r]) * (invFac[n - r]!)

    lld temp = (invFac[k] % mod) * (invFac[n - k] % mod);

    temp %= mod;
    temp += mod;
    temp %= mod;

    lld ans = (((fac[n] % mod) * (temp % mod)) + mod) % mod;

    return (ans);

}

void sober() {
    lld n = 0, x = 0 , a = 0 , b = 0 , y = 0 , sum = 0 , k = 0 , m = 0 , c = 0 , d = 0;

    cin >> n >> k;

    cout << compute(n, k) << "\n";

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
#endif

    DIEHOD;
    lld t = 1;
    cin >> t;

    fac.resize(MAXN + 1, 0LL);
    invFac.resize(MAXN + 1, 0LL);

    preCompute();

    while (t--) {
        sober();
    }
}

//  c0ded by :
// - - - - - - - - - - - - - - - - - - - - - - s 0 b e r and s i m r a n


