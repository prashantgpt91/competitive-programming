#include<iostream>
    #include<string.h>
    #include<cstdio>
     
    using namespace std;
     
    int F(int N,int K,int Answer,char b,int A[])
    {
    if(b=='A')
    {
    for(int j=0;j<N;j++)
    Answer=(Answer & A[j]);
    return Answer;
    }
    else if(b=='O')
    {
    for(int j=0;j<N;j++)
    Answer=(Answer | A[j]);
    return Answer;
    }
    else if(b=='X')
    {
    if(K%2!=0)
    for(int j=0;j<N;j++)
    Answer=(Answer ^ A[j]);
    
    return Answer;
    }
    }
     
    int main()
    {
    int t,n,k,answer,i,j,opera,aa;
    cin>>t;
    string s;
    while(t--)
    {
    scanf("%d%d%d",&n,&k,&answer);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    cin>>s;
    if(k!=0)
    aa=F(n,k,answer,s[0],a);
    else
    aa=answer;
    printf("%d\n",aa);
    }
    return 0;
    }