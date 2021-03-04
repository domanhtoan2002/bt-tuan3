#include<iostream>

using namespace std ;

int main(){
	int N ;
	cin >> N ;
		int a[N] = {1,2,3,4};
	for(int i = 0; i< N;i++){
		cout << "a["<<i<<"]= " ;
		cin >> a[i] ;
	}
	for(int i = 0 ;i < N ;i++){
		cout << a[i] << " ";
	}
	return 0 ;
}
