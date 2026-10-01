//segundo ejercicio
#include <iostream>
using namespace std;


int main(){
	long long n; 
	cin>>n;
	long long suma1=(n*(n+1))/2;
	long long suma2=0;
	for(int i=1;i<=n-1;i++){
		long long x;
		cin>>x;
		suma2=suma2+x;
	}
	cout<<suma1-suma2;
	return 0;
	
}
