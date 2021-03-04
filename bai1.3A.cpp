#include<iostream>

using namespace std ;

	int a[] = {1,2,3,4};
int main(){
	int N ;
	cin >> N ;
	for(int i = 0; i< N;i++){
		cout << "a["<<i<<"]= " ;
		cin >> a[i] ;
	}
	for(int i = 0 ;i < N ;i++){
		cout << a[i] << " ";
	}
	return 0 ;
}
