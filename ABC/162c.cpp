#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>
using namespace std;

int saisyo(int a,int b, int c){
	int max=1;
	int minnum=a;
	if(a>b){
		minnum=b;
		if(b>c)minnum=c;
	}
	for(int i=1; i<=minnum;i++){
		if(a%i==0&&b%i==0&&c%i==0)max=i;
	}
	return(max);
}

int K;
int wa=0;

int main(){
	cin>>K;
	for(int a=1;a<=K;a++){
		for(int b=1;b<=K;b++){
			for(int c=1;c<=K;c++){
				wa=wa+saisyo(a,b,c);
			}
		}
	}


	cout<<wa<<endl;

}
