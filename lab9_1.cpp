#include<iostream>
using namespace std;

int main(){
	int i=0;
	char grade;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";
	do{
		cout << "Student [" << i+1<< "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade =='A'){ // if grade is A
			count[0]++;
			i++;
		}else if(grade =='B'){ // if grade is B
			count[1]++;
			i++;
		}else if(grade =='C'){//and so on ... for grade = C, D, F
	     	count[2]++;
			i++;
		}else if(grade =='D'){
		    count[3]++;
		    i++;
		}else if(grade =='F'){
		    count[4]++;
		    i++;	
		}else if(grade !='A'or grade !='B'or grade !='C' or grade !='D' or grade !='F' or grade !='0'){// grade is wrong input
		    cout<<"Wrong input. Please input again."<<"\n";
		} 
		    		
	}while(grade !='0');
	
	cout << "In total"<<" "<< i <<" "<<"students."<<"\n";
	cout << "A = " << count[0] <<","<<" ";
	cout << "B = " << count[1] <<","<<" ";	
	cout << "C = " << count[2] <<","<<" ";
	cout << "D = " << count[3] <<","<<" ";
	cout << "F = " << count[4];
	
	return 0;
}
	

