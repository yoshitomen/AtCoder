#include <iostream>
using namespace std;
 
int main(){
  
bool osou=false;
  int S,W;
  do{
cin>>S>>W;
  }while(0>S||0>W||S>100||W>100);
  
  if(S<=W){
    osou=true;
    cout<<"unsafe"<<endl;
  }
  if(!osou){
    cout<<"safe"<<endl;
  }
}
