#include<iostream>
using namespace std;
void findMinMax(int a,int b,int c,int &minVal,int &maxVal){
	minVal=a;
	maxVal=a;
	
	if(b<minVal)
	minVal=b;
	if(b>maxVal)
	maxVal=b;
	if(c<minVal)
	minVal=c;
	if(c>maxVal)
	maxVal=c;
}
int main(){
	int x,y,z;
	int lo,hi;
	
	cout<<"Enter three interger:";
	cin>>x>>y>>z;
	findMinMax(x,y,z,lo,hi);
	
	cout<<"Minimum value="<<lo<<endl;
	cout<<"Maximum value="<<hi<<endl;
	
	return 0;
}
