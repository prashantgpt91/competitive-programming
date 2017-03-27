#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	//double z[101];
	cin>>n;
	double max,min,x1,x2,x3,y1,y2,y3;
	int maxindex=0,minindex=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		double a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		double b=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
		double c=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		
		double d=(a+b+c)/2;
		
		double area=sqrt(d*(d-a)*(d-b)*(d-c));
		
		if(i==0)
		{
		max=area;
		min=area;
		continue;
	    }
	    
	    if(area>=max){
	    max=area;maxindex=i;}
	    if(area<=min){
	    min=area;minindex=i;}
	    
	}
	
	    printf("%d %d\n",minindex+1,maxindex+1);
}