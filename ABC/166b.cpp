#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>

using namespace std;

int N,K;

int main(){
	cin>>N>>K;
	int d[K+1],A[K+1][N+1];
	int su[N+1];
	int sum=0;
	for(int i=1;i<=N;i++){
		su[i]=1;
	}

	for(int i=1;i<=K;i++){
		cin>>d[i];
		for(int j=1;j<=d[i];j++){
			cin>>A[i][j];
		}
	}
	for(int i=1;i<=K;i++){
		for(int j=1;j<=d[i];j++){
			su[A[i][j]]=0;
		}
	}
	for(int i=1;i<=N;i++){
		sum+=su[i];
	}
	cout<<sum<<endl;

}


