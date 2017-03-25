    #include<stdio.h>
//    #include<conio.h>
    int main()
    {
       int a,b,sum;
       while(1)
       {
            //c=0;   
          scanf("%d%d",&a,&b);
          if(a==-1&&b==-1)
             return 0;
          else
          {
             sum=a+b;
             if(a==1||b==1)
                printf("%d+%d=%d\n",a,b,sum);
             else
                printf("%d+%d!=%d\n",a,b,sum);
          }
       }
       //getch();
    return 0;
}
