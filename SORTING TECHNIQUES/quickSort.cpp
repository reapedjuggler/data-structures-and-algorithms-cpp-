// eat sleep code repeat ;
// s0ber
// below code has a time complexity of   O(n ^ 2)  { forgive me if i forgot to update this}
// reapedJuggler

#include "bits/stdc++.h"

using namespace std ;

void start()// eat sleep code repeat ;
// s0ber
// below code has a time complexity of   O(n ^ 2)  { forgive me if i forgot to update this}
// reapedJuggler

#include "bits/stdc++.h"

#define ll long long
#define For(i , n) for(int i = 0 ; i < n ;i++)
#define input int* arr = new int[n] ;
#define input1 int* brr = new int[n] ;

using namespace std;

int * quickSort(int a[] , int n );

int * quickSort(int a[] , int n )
{
    int* ha = new int[n];                              //  ha is  highArray( elements greater than pivot ;
    int* la = new int[n];                              //  la is  lowArray( elements less than pivot ;
    int hc = 0 , lc = 0 , ec = 0 ;                     // hc is highCount and similarly lc is lowCount and ec is equalCount
    int p = a[rand()%n] ;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] < p)
        {
            la[lc++] = a[i];
        }
        else if(a[i] > p)
        {
            ha[hc++] = a[i];
        }
        else
            ec++;
    }
    if(hc > 1)
        ha = quickSort( ha , hc );
    if(lc > 1)
        la = quickSort( la , lc );

    for(int i = 0 ; i < lc ; i++)
        a[i] = la[i];

    for(int i = 0 ; i < ec ; i++)
        a[i + lc] = p;

    for(int i = 0 ; i < hc ; i++)
        a[i + lc + ec] = ha[i];

    return a;

}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    quickSort(a,n);

    for(int i = 0; i < n ; i++)
        cout << a[i] << " " ;
    return 0 ;
}


{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
}


int main()
{
  start();
  
return 0 ;
}