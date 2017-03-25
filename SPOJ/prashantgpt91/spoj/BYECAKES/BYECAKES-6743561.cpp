#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,a1,b1,c1,d1,ratio,i,j,k;
    while(1)
    {
            cin>>a>>b>>c>>d>>a1>>b1>>c1>>d1;
            if(a==-1 && b==-1 && c==-1 && d==-1 && a1==-1 && b1==-1 && c1==-1 && d==-1)
            break;
            if(a%a1==0)ratio=a/a1;
            else ratio=a/a1+1;
            if(b%b1==0 && b/b1>ratio)ratio=b/b1;
            else if(b%b1!=0 && b/b1+1>ratio)ratio=b/b1+1;
            if(c%c1==0 && c/c1>ratio)ratio=c/c1;
            else if(c%c1!=0 && c/c1+1>ratio)ratio=c/c1+1;
            if(d%d1==0 && d/d1>ratio)ratio=d/d1;
            else if(d%d1!=0 && d/d1+1>ratio)ratio=d/d1+1;
            cout<<ratio*a1-a<<" "<<ratio*b1-b<<" "<<ratio*c1-c<<" "<<ratio*d1-d<<endl;
    }
    
    return 0;
}

