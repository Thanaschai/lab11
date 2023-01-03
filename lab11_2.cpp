#include<iostream>
#include<fstream>
#include<string>
using namespace std;

	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string t ;
	dest << "-------------------- BOOM ---------------------" << endl;  
	while (getline(source,t)){
		dest << t <<endl;
	}
	dest << "-------------------- HA!! ---------------------" ;
	
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ

    source.close();
    dest.close();
	return 0;
}
