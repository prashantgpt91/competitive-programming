#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	int t,la,lb,l,i,c,j,d,temp1,temp2;
	char a[1002],b[1002],a1[1002],b1[1002],a11[1002],b11[1002];
	cin>>t;
	while(t--)
	{
        c=1;d=1;
		cin>>a>>b;
		
		la=strlen(a);
		lb=strlen(b);
	
		for(i=0;i<la;i++)
			a1[i]=a[i];
		for(i=0;i<lb;i++)
			b1[i]=b[i];

		sort(a1,a1+la);
		sort(b1,b1+lb);
/*
for(i=0;i<la;i++)
printf("%c",a1[i]);
for(i=0;i<lb;i++)
printf("%c",b1[i]);
system("PAUSE");*/
if(la!=lb)
c=0;
        if(la==lb)
        {
		for(i=0;i<la;i++)
		{
           if(a1[i]==b1[i])
           continue;
           else {c=0; 
           break;}
        }
        }
        temp1=la-1;
        temp2=lb-1;
        
		i=1;
		j=1;
		while(temp1--)
		{
			if(a1[i]!=a1[i-1]){
				a11[j-1]=a1[i-1];j++;}
			i++;
		}
		a11[j-1]=a1[i-1];
		temp1=j;
/*for(i=0;i<j;i++)
printf("%c",a11[i]);
system("PAUSE");*/
        i=1;
		j=1;
		while(temp2--)
		{
			if(b1[i]!=b1[i-1]){
				b11[j-1]=b1[i-1];j++;}
			i++;
		}
		b11[j-1]=b1[i-1];
		temp2=j;
		/*
for(i=0;i<temp1;i++)
printf("%c",a11[i]);
printf("\n");
for(i=0;i<temp2;i++)
printf("%c",b11[i]);
system("PAUSE");

printf("%d %d\n",temp1,temp2);*/
d=1;
if(temp1!=temp2)
d=0;
		if(temp1==temp2) 
		 {
           for(i=0;i<temp1;i++)
           {
            if(a11[i]==b11[i])
             continue;
            else{d=0;
             break;}
           }
         }          

//printf("%d %d \n",c,d);
		if(c==d)
			printf("YES\n");
		else
			printf("NO\n");

	
	}
		return 0;
}