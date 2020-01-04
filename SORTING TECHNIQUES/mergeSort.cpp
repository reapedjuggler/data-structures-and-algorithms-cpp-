// eat sleep code repeat :)
// vectorTango
// reapedJuggler


// IMPERICAL       ANALYSiS

#include "bits/stdc++.h"

#define For(i , n) for(int i = 0; i < n ; i++)
#define input int*a = new int[n];

using namespace std;
	

void merge(int*arr , int s , int e){
    int mid = ( s + e)/2;

	int i = s;
	int j = mid + 1;

	int temp[e - s + 1];

	int k = 0;

	while(i <= mid and j <= e){

		if(arr[i] > arr[j]){
			temp[k] = arr[j];
			k++;
			j++;
		}else{
			temp[k] = arr[i];
			k++;
			i++;
		}
	}

	while(i <= mid){
		temp[k] = arr[i];
		k++;
		i++;
	}

	while(j <= e){
		temp[k] = arr[j];
		k++;
		j++;
	}

	int  p = 0;
	for(int x = s; x <= e;x++){
		arr[x] = temp[p];
		p++;
	 }
	}

	int* mergeSort(int*a , int s , int e){
		// int *la = new int[n];
		// int *ha = new int[n];
		if(s >= e)
			return a;

		int mid = s - (s - e)/2;

		mergeSort(a , s , mid);
		mergeSort(a , mid + 1 , e);
		merge(a , s , e);

}
void start()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
}

int main(){
	start();
	int n;
	cin >> n;
	int*a = new int[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ;
	}

	mergeSort(a , 0 , n - 1);

	for(int i = 0 ;i < n ;i++)
		cout << a[i] << " ";
}

//  coded by :
// - - - - - -  - - - - - - - - - --  -- - - - V I B H A V