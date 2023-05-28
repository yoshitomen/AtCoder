#include <bits/stdc++.h>
#define rep(I,N) for(int I=0;I<N;I++)
using namespace std;

int main(){

	int N;
	cin>>N;
	for(int i=0;i<10000;i++){
		if(N<1000){
			N=1000-N;
			break;
		}
		if(N==1000){
			N=0;
			break;
		}
		N-=1000;
	}
	cout<<N;

}
