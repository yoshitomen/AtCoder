#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>
#include <vector>

using namespace std;

long long int n,k;

int main(){
  cin>>n>>k;
  long long int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int place = 0;
  int c=0;
  int d=0;
  bool ex[n];
  bool end=true;
  for(int i=0;i<n;i++){
    ex[i]=false;
  }
  while(c<n&&d<1){

   if(ex[place]){ 
     d=1;
     if(place==0)end=false;
   }else{
     c++;
     ex[place]=true;
     place=a[place]-1;

   }
 }
 int e=0;
 int f=0;
 bool exp[n];
 for(int i=0;i<n;i++){
   exp[i]=false;
 }
 if(end){
   while(e<n&&f<1){

     if(ex[place]){
       f=1;
     }else{
       e++;
       exp[place]=true;
       place=a[place]-1;

     }
   }
   if(e==0)cout<<place+1<<endl;
   else{int res = (k-c)%e;  
     for(int i=0;i<res;i++){
       place=a[place]-1;
     }
     cout<<place+1<<endl;
   }
 }else{
   place=0;
   if(c==0)cout<<place+1<<endl;
   else{
     for(int i=0;i<(k%c);i++){
       place=a[place]-1;
     }
     cout<<place+1<<endl;
   }
 }
}

