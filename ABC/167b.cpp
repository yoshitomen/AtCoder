#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>

using namespace std;
int A,B,C,K;

void input(){
	cin>>A>>B>>C>>K;
}

int main(){

	input();

	if(A>=K){
		cout<<K<<endl;
	}
	if(A<K&&K<=A+B){
		cout<<A<<endl;
	}
	if(A+B<K){
		cout<<2*A+B-K<<endl;
	}
}
