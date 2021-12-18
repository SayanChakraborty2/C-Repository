#include<stdio.h>
#include<conio.h>
#include<string.h>

int stack[10];
int top=-1;
int pop();
void push(int);
int get_type(char);

int main(){
	char prefix[10];
	int len,val,i,opr1,opr2,opr3,res;
	clrscr();
	printf("\n Enter the prefix number:\n");
	gets(prefix);
	len=strlen(prefix);
	for(i=len-1;i>=0;i--){
		switch(get_type(prefix[i])){
			case 0: 
				val=prefix[i]-'0';
				push(val);
				break;
			case 1:
				opr1=pop();
				opr2=pop();
				switch(prefix[i]){
					case '+':
						res=opr1+opr2;
						break;
					case '-':
						res=opr1-opr2;
						break;
					case '*':
						res=opr1*opr2;
						break;
					case '/':
						res=opr1/opr2;
						break;
						
				}
				push(res);
				break;
		}
	}//end of loop
	
	printf("\n RESULT = %d", stack[0]);
	getch();
	
	return 0;
}

void push(int val){
	stack[++top]=val;
}
int pop(){
	return(stack[top--]);
}
int get_type(char c){
	if(c=='+' || c=='-' || c=='*' || c=='/'){
		return 1;
	}
	else{
		return 0;
	}
}
