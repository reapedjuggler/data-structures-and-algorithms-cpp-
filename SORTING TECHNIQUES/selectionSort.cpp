// eat sleep code repeat ;
// selectionSort
// below code has a time complexity of   O(n ^ 2)  { forgive me if i forgot to update this}
// reapedJuggler

#include "bits/stdc++.h"

using namespace std ;

void start()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
}


int main()
{
  start() ;
  int n ;
  cin >> n ;
  int *a = new int[n] ;

    for(int i = 0 ; i < n ; i++)
      cin >> a[i] ;

    for(int i = 0 ; i < n ; i++)
       {

        int min_index = i ;

        for(int j = i ; j < n  ; j++)
        {
          if(a[j] <= a[min_index])
          {
            min_index = j ;
          }
        }
        swap(a[i] , a[min_index]) ;
       }

    // printing the sorted array ;

      for(int i = 0 ; i < n ; i++)
        cout << a[i] << " " << endl ;

return 0 ;
}