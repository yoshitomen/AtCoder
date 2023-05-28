#include <bits/stdc++.h>
#define rep(I,N) for(int I=0;I<N;I++)
using ll=long long int;
using namespace std;

int main(){
	int ac=0;
	int wa=0;
	int tle=0;
	int re=0;
	long long N;
	cin>>N;
	string S[N];
	for(int i=0;i<N;i++){
		cin>>S[i];
		if(S[i]=="AC")ac++;
		else if(S[i]=="WA")wa++;
		else if(S[i]=="TLE")tle++;
		else if(S[i]=="RE")re++;
	}
	cout<<"AC x "<<ac<<endl;
	cout<<"WA x "<<wa<<endl;
	cout<<"TLE x "<<tle<<endl;
	cout<<"RE x "<<re<<endl;
}
