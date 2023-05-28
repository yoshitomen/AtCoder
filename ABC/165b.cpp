#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>

using namespace std;

long long x;
int n=0;
long long chokin=100;

int main(){
	cin>>x;
	while(chokin<x){
		n++;
		chokin+=chokin/100;

	}
	cout<<n<<endl;
}

