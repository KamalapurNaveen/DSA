#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){  //printing binary number
	for(int i=10;i>=0;i--){
		cout<<((num>>i) & 1);
	}cout<<endl;
}
int main(){
//******Even OR ODD********	

// 	for(int i=0;i<=8;i++){
// 		printBinary(i);
// 		//for all odd numbers LSB (0th bit) will be 1 and for even it is 0
// 		if(i&1) cout<<"odd\n"; //it is faster than taking modulo of 2 
// 		else cout<<"even\n";
// }
	// //*****multiplication of n  and div by two
	// int n=5;
	// cout<<(n<<1)<<endl; //gives multiplication with 2  //5=101 5<<1 ==>1010

	// cout<<(n>>1)<<endl;//gives divsion by 2
	//********changing alphabets into lower n upper case
	 for(char c='A';c<='Z';c++){
		cout<<c<<endl;

		printBinary(int(c));
	 }
	for(char c='a';c<='z';c++){
		cout<<c<<endl;
		
		printBinary(int(c));
	}
	// // in uppercase letters 5Th bit is not set but in lowercase it is set
	// char A='A';
	// char a=A | (1<<5);
	// cout<<a<<endl;
	// cout<<char((a & (~(1<<5))))<<endl;
	// //(1<<5) is ascii value of space
	// cout<<char('C' | ' ')<<endl; //changing upper to lower***********8
	// printBinary('-'); //00000101101
	// cout<<char('c' & '_')<<endl;//*********changing lower to uppper*******
	// //***************************************************************
	//removing LSB till i'th bit************8
	/*UPPER TO LOWER*/
	string s="MNBAnaB";
	for(int i=0;s[i]!='\0';i++){
		cout<<char(s[i] | ' ');
	}

	}