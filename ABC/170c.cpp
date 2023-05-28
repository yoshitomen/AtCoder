#include <bits/stdc++.h>
#define rep(I,N) for(int I=0;I<N;I++)
using ll=long long int;
using namespace std;


int x,n;
int main(){
	cin>>x>>n;
	int p[n];
	rep(i,n){cin>>p[i];}

	bool diff=false;
	rep(i,n){
		if(x==p[i])diff=true;
	}
	if(!diff){
		cout<<x<<endl;
		return 0;
	}
	rep(j,100){
		rep(i,n){
			if((x-j)==p[i])diff=true;
		}
		if(!diff){
			cout<<x-j<<endl;
			return 0;
		}
      diff=false;
		rep(i,n){
			if((x+j)==p[i])diff=true;
        
		}
		if(!diff){
			cout<<x+j<<endl;
			return 0;
		}
      diff=false;
	}
}



