#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>

using namespace std;


int main(){

	long long N,M;
	cin>>N>>M;
	long long H[N+1];
	int highest[N+1];
	for(int i=1;i<=N;i++){
		highest[i]=1;
	}
	long long A[M+1],B[M+1];
	for(int i=1;i<=N;i++){
		cin>>H[i];
	}
	for(int i=1;i<=M;i++){
		cin>>A[i]>>B[i];
		
	}

	for(int i=1;i<=M;i++){
		if(H[A[i]]>H[B[i]]){
			highest[B[i]]=0;
		}else if(H[A[i]]<H[B[i]]){highest[A[i]]=0;
		}else{
			highest[A[i]]=0;
			highest[B[i]]=0;
		}
	}
	long long ryo=0;
	for(int i=1;i<=N;i++){
		ryo=ryo+highest[i];
	}

	cout<<ryo<<endl;


}
