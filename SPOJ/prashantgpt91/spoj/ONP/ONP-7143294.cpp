#include<iostream>
#include<stack>
#include<queue>
#include<string.h>

using namespace std;

int main()
{
    int t,l,l2,h;
    char a[401];
    stack<char>onpstack;
    queue<char>outputqueue;
    string operators ="+, -, *, /, ^";
    char result[150];
    
    scanf("%d",&t);
    while(t--)
    {
    cin>>a;
    l=strlen(a);
    
   for(int i=0;i<l;i++)
   {
    
     if(a[i]=='(' )
     onpstack.push('(');
     
     else if(a[i]==')')
     {
       while(!onpstack.empty())
       {
         if(onpstack.top()=='(')
         {
         onpstack.pop();
         break;                              
         }
         outputqueue.push(onpstack.top());
         onpstack.pop();
       }
    }
             
     else if(isalpha(a[i]))      //where isalpha function checks if input is aplphabet or not
      outputqueue.push(a[i]);	            
        
    else if(operators.find(a[i])!=string::npos)
     {
      while(onpstack.size()>0 && operators.find(onpstack.top())!=string::npos && (operators.find(a[i])<=operators.find(onpstack.top()))) 
      {
        outputqueue.push(onpstack.top());
        onpstack.pop();
      }	  
       onpstack.push(a[i]);
     }
    }//end for  
     while(!onpstack.empty()) 
     {
      outputqueue.push(onpstack.top());
      onpstack.pop();
     }
h=0;
	while(!outputqueue.empty())
         {
	  result[h]=outputqueue.front();
	  outputqueue.pop();
	  h++;
	 }
	 
//printf("LOL\n");	 


        
//end for
l2=strlen(result);

for(int j=0;j<h;j++)
printf("%c",result[j]);
printf("\n");
}//end test case  
                             
    //system("PAUSE");
}


/*
[1] While there is more input continue to [2] otherwise go to [6]
[2] Scan in the next character
[3] Determine whether it is a bracket, operand, or operator
[4a] If it is an operand, push it to the output
[4b] If it is a left bracket, push onto stack
[4c] If it is a right bracket, keep popping the stack and pushing into the output until a left bracket is encountered
[4d] If it's an operator - check for precedence if the top of the stack is an operator and it has higher precedence than current operator then pop the stack and push onto output, continue until condition is false. Then push in the current operator into stack.
[5] Go back to [1]
[6] Flush the stack into the output 

http://www.mochima.com/tutorials/strings.html
*/

   
   
   

