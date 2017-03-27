#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>
using namespace std;

       
void fun(int a,int b);
int mat[1000][1000];
int cnt=0,n,m,k,c=0;
char var;
int main()
{
    int p;
    char inp;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
     {
             
     if(cnt>=m){
     printf("Done\n");
      exit(0);}
      printf("S %d %d\n",i,j);
      fflush(stdout);
      mat[i][j]=1;
      cin>>inp;
      //printf("jhantu\n");
      p=inp-'0';
      if(p==0){
      mat[i][j]=1;
      continue;}
      else if(inp=='M')
      {
       printf("N %d %d",i,j);
       fflush(stdout);
       cnt++;
      }
      else
      {
       fun(i,j);
      }
      }
}
//system("pause");
} 
       
void fun(int a,int b)
{
     //printf("repeat\n");
     if(a>=0 && b>=0 && a<n && b<n && mat[a][b]==0){
       printf("S %d %d\n",a,b);
       fflush(stdout);
       mat[a][b]=1;
        cin>>var;
        if(var=='M'){
         printf("N %d %d\n",a,b);
         fflush(stdout);
        cnt++;}
        }
      if(cnt>=m){
      printf("Done\n");
      exit(0);}
      else{
           if(a>=0 && b>=0 && a<n && b<n && mat[a-1][b-1]==0)
             fun(a-1,b-1);
             //printf("z\n");
             if(a>=0 && b>=0 && a<n && b<n && mat[a-1][b]==0)
             fun(a-1,b);
             //printf("x\n");
             if(a>=0 && b>=0 && a<n && b<n && mat[a-1][b+1]==0)
             fun(a-1,b+1);
            // printf("c\n");
            if(a>=0 && b>=0 && a<n && b<n && mat[a][b-1]==0)
             fun(a,b-1);
             //printf("v\n");
             
             
             
            if(a>=0 && b>=0 && a<n && b<n && mat[a][b+1]==0)
             fun(a,b+1);
//             printf("b\n");
             
             
             
             if(a>=0 && b>=0 && a<n && b<n && mat[a+1][b-1]==0)
             fun(a+1,b-1);
            // printf("n\n");
            if(a>=0 && b>=0 && a<n && b<n && mat[a+1][b]==0)
             fun(a+1,b);
            // printf("m\n");
            if(a>=0 && b>=0 && a<n && b<n && mat[a+1][b+1]==0)
             fun(a+1,b+1);}
}