#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
	string s;
	int k;

	cin>>k;
	cin>>s;

	if(s.size()>k){
		s=s.substr(0,k)+"...";
	}

	cout<<s;
	

}
