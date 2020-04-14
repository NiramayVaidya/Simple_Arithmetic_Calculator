#include<iostream>
#include<cstdio>
using namespace std;
	
int main() {
	
	class calc {
		public:
			int i, num1, num2, mult;
			char c;
	};
	
	calc x;
	x.i = 0, x.num2 = 0, x.mult = 1;
        string str;
	cout<<">>";	
	cin>>x.num1;
	cin>>x.c;
	
	while(1) {
		if(x.c == '$') { 
			cout<<x.num1<<endl<<">>";
			cin>>x.num1;
			cin>>x.c;
		}
			
	
		else if(x.c == '+') {
			cin>>x.num2;
			x.num1 = x.num1 + x.num2;
			cin>>x.c;
		}
		else if(x.c == '-') {
			cin>>x.num2;
			x.num1 = x.num1 - x.num2;
			cin>>x.c;
		}
		else if(x.c == '*') {
			cin>>x.num2;
			x.num1 = x.num1 * x.num2;
			cin>>x.c;
		}
		else if(x.c == '/') {
			cin>>x.num2;
			if(x.num2 == 0){
				x.num1 = 0;
				while(x.c != '$')
					cin>>x.c;
					cout<<"Error : Cannot Divide by Zero"<<endl<<">>";
				 	cin>>x.num1;
				        cin>>x.c;	
			}
			else {
				x.num1 =  x.num1 / x.num2;
				cin>>x.c;
			}
					
		}
		else if(x.c == '^'){
			cin>>x.num2;
			for(x.i = 0; x.i < x.num2; x.i++)
				x.mult = x.mult * x.num1;
			x.num1 = x.mult;
			x.mult = 1;
			cin>>x.c;
		}
		else  {
			cout<<"Invalid Input : Please enter the expression again"<<endl;
			while(x.c != '$')
				x.c = getchar();
			if(x.c == '$') {
				cout<<">>";
				cin>>x.num1;
				cin>>x.c;
			}
		}
	}
	return 0;
}
