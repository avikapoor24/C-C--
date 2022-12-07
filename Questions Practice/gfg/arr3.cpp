//Q.3] Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i.

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,p,q;
	int a[]= {1, 2, 1, 4, 5, 6, 8, 8};
	n=sizeof(a)/sizeof(a[0]);
	int b[n];
	for(i=0;i<n;i++)
		b[i]=a[i];

	sort(b,b+n);
	p=0;q=n-1;
	for(i=n-1;i>=0;i--){
			if(i%2!=0){
			a[i]=b[q];
			q--;
			}
			else{
				a[i]=b[p];
				p++;
			}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
