#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream source;
	ofstream dest("C:\\Users\\LaB_314\\Desktop\\cheerbook_coppy.txt");
	source.open("C:\\Users\\LaB_314\\Desktop\\cheerbook.txt");
	string textline;
	dest<<"--------------------- SOTUS ---------------------"<<"\n";
	bool havetext;
	havetext = getline(source,textline);
	while(havetext){
		dest << textline<<"\n";
		havetext = getline(source,textline);
	}
	dest<<"---------------------SOTUS ---------------------";
	source.close();
	dest.close();
	return 0;
}
