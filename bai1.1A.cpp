#include<iostream>

using namespace std ;

	int a[5] ;
int main(){
	int n ;
	cin >> n ;
	for(int i = 0; i< n;i++){
		cout << "a["<<i<<"]= " ;
		cin >> a[i] ;
	}
	return 0 ;
}
