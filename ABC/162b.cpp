#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>

using namespace std;
int N;
long a=0;

int main(){
cin>>N;
  for(int i=1;i<N+1;i++){
    if(!(i%3==0||i%5==0)){
      a=a+i;
    }
  }
	cout<<a<<endl;

}
