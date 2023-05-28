#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>

using namespace std;

int k,a,b;
int main(){
cin>>k;
cin>>a>>b;
bool go=false;
for(int i=a;i<=b;i++){
	if(i%k==0){go=true;}
}
if(go){
cout<<"OK"<<endl;
}else{cout<<"NG"<<endl;}

	

}
