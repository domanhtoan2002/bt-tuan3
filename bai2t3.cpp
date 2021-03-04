#include<iostream>

using namespace std ;

void nhap(int n, int a[]){
	for(int i =0; i< n ;i++){
		cout << "a[" << i << "] = " ;
		cin >> a[i] ;
	}
}

int min(int n, int a[]){
	int min = a[0];
	for(int i =0; i< n; i++){
		if(min > a[i])
		min = a[i];
	}
	return min ;
}

int max(int n, int a[]){
	int max = a[0] ;
	for(int i = 0; i< n; i++){
		if(max < a[i])
		max = a[i] ;
	}
	return max ;
}

int tong(int n, int a[]){
	int sum = 0 ;
	for (int i = 0; i < n; i++)
	if(a[i] % 2 == 0)
	sum = sum +a[i];
	return sum ;
}

int NumberofOdd(int n, int a[]){
	int count = 0 ;
	for(int i = 0; i< n; i++){
		if(a[i] % 2 != 0)
		count ++ ;
	}
	return count ;
}

int main (){
	int n, a[n] ;
	cout << "nhap mang " ;
	cin >> n ;
	nhap(n,a);
	cout << "max = " << max(n,a) << endl ;
	cout << "min = " << min(n,a) << endl ;
	cout <<"tong cac so chan la " << tong(n,a) << endl ;
	cout <<"so phan tu le la : " <<NumberofOdd(n,a ) ;
	return 0 ;
}
