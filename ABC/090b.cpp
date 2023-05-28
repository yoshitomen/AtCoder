#include <bits/stdc++.h>
#define rep(I,N) for(int I=0;I<N;I++)
using namespace std;
//using  ll = long long;

int check(int n){
  int aa=n%10;
  int bb=n/10 % 10;
  int cc=n/1000 % 10;
  int dd=n/10000 % 10;
  if(aa==dd&&bb==cc)return 1;
  else return 0;
}
int ans=0;
int main(){

  int a,b;
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    ans+=check(i);
  }
  cout<<ans<<endl;
}
