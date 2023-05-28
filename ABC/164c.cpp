#include <iostream>
#include <math.h>
#include <map>

using namespace std;



int main(){


	int N;
	do{cin>>N;} while(N<1||N>2*pow(10,5));

	map<string, int> mp;
	string S[N];
	for(int i=0;i<N;i++){
		cin>>S[i];
		mp[S[i]]=i;
	}

	cout<<mp.size()<<endl;

}