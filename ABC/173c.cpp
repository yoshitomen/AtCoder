#include <bits/stdc++.h>
#define rep(I,N) for(int I=0;I<N;I++)
using ll=long long int;
using namespace std;
int counter=0;
int black=0;
int ans=0;
int main(){
	int h,w,k;
	cin>>h>>w>>k;
	char c[h][w];
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>c[i][j];
			if(c[i][j]=='#')black++;
		}
	}

	for(int N=0;N<(1<<h);N++){
		for(int NN=0;NN<(1<<w);NN++){
			for(int jj=0;jj<h;jj++){
				for(int jjj=0;jjj<w;jjj++){
					if( (((N>>jj)&1)||((NN>>jjj)&1))&&c[jj][jjj]=='#')counter++;
				}
			}
			if(k==black-counter)ans++;
			counter=0;
		}
	}
	cout<<ans;
}

