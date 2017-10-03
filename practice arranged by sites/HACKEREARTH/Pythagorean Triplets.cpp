    #include<stdio.h>
    #include<stack>
    #include<vector>
    struct triple
    {
    int a,b,c;
    };
    using namespace std;
    int func(int m)
    {
    int count=0;
    stack < struct triple > pyth ;
    struct triple temp;
    temp.a=3;
    temp.b=4;
    temp.c=5;
    pyth.push(temp);
    while(pyth.size()!=0)
    {
    int aa,bb,cc;
    aa=pyth.top().a;
    bb=pyth.top().b;
    cc=pyth.top().c;
    count=count+(m/cc);
    pyth.pop();
    temp.a=aa-2*bb+2*cc;
    temp.b=2*aa-bb+2*cc;
    temp.c=2*aa-2*bb+3*cc;
    if(temp.c<=m && temp.a<=m && temp.b<=m)
    pyth.push(temp);
    temp.a=aa+2*bb+2*cc;
    temp.b=2*aa+bb+2*cc;
    temp.c=2*aa+2*bb+3*cc;
    if(temp.c<=m && temp.a<=m && temp.b<=m)
    pyth.push(temp);
    temp.a=2*(bb+cc)-aa;
    temp.b=bb+2*cc-2*aa;
    temp.c=2*bb+3*cc-2*aa;
    if(temp.c<=m && temp.a<=m && temp.b<=m)
    pyth.push(temp);
    }
    return count;
    }
    int main()
    {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,m;
    scanf("%d",&n);
    printf("%d\n",func(n));
    }
    return 0;
    }