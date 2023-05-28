#include <iostream>
using namespace std;

int main(){

  bool takakachi=false;
  bool aokachi=false;
  
  int A,B,C,D;
  do{
    cin>>A>>B>>C>>D;
  }while(A<1||A>100||B<1||B>100||C<1||C>100||D<1||D>100);
  do{
    C=C-B;
    if(C<=0){
      takakachi=true;
      continue;}
      A=A-D;
      if(A<=0){
        aokachi=true;
        continue;
      }

    }while((!takakachi)&&(!aokachi));
    if(takakachi)cout<<"Yes"<<endl;
    if(aokachi)cout<<"No"<<endl;

  }
}