#include <bits/stdc++.h>
#define rep(I,N) for(int I=0;I<N;I++)
using ll=long long int;
using namespace std;

int x,y;
bool ok=false;
int main(){
	cin>>x>>y;
	rep(i,x+1){
		if(2*i+4*(x-i)==y) ok=true;
	}
	if(ok)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;	

}
