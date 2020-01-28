#include <iostream>
#include <fstream>
#include <string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	
	int count =0;
	float sum =0;
	float y =0;
	string textline;
	ifstream source("C:\\Users\\LaB_314\\Desktop\\score.txt"); 
	while (getline(source,textline)){
		cout<<textline<<"\n";
		sum += atof(textline.c_str());
		y+=pow(atof(textline.c_str()),2);
		count ++;
	}
	cout << "Number of data = "<<count<<"\n";
    cout << "Mean = "<<sum/count<<"\n";
    cout << "Standard deviation = "<<sqrt(y/count-pow(sum/count,2)) <<"\n";
}
