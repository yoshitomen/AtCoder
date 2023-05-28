#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>

using namespace std;

int main(){

	int N;
	cin>>N;
	switch(N%10)
	{
		case 2 : cout<<"hon"; break;
		case 4 : cout<<"hon"; break;
		case 5 : cout<<"hon"; break;
		case 7 : cout<<"hon"; break;
		case 9 : cout<<"hon"; break;
		case 0 : cout<<"pon"; break;
		case 1 : cout<<"pon"; break;
		case 6 : cout<<"pon"; break;
		case 8 : cout<<"pon"; break;
		case 3 : cout<<"bon"; break;
	}

}
