#include <iostream>
using namespace std;

int main() {
	
	int n; cin>>n;
	int r;
	
	for(int i=2; i<=n; i++){
		r = n%i;
		
		while(r==0){
			n = n/i;
			cout<<i<<" ";
			
			r = n%i;
		}
	}

	return 0;
}

