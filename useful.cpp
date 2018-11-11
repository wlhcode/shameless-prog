#include<bits/stdc++.h>
using namespace std;
string s;
void sandbox(){
	s.clear();
	cout<<"welcome to sandbox"<<endl;
	cout<<"enter clear to clear screen"<<endl;
	cout<<"enter return to return to menu"<<endl;
	cout<<endl;
	while(getline(cin,s)){
		if(s=="return") return;
		if(s=="clear"){
			system("CLS");
			return sandbox();
		} 
		s.clear();
	}
}
void notepad(){
	s.clear();
	cout<<"welcome to notepad"<<endl;
	cout<<"enter return to finish"<<endl;
	cout<<endl;
	ofstream out;
	out.open("gen_text.txt");
	while(getline(cin,s)){
		if(s=="return"){
			out.close();
			return;
		}
		out<<s<<endl;
		s.clear();
	}
}
void simple_calc(){
	s.clear();
	cout<<"enter any valid phrase: ";
	getline(cin,s);
	cout<<"error: system_out_of_range: return -2,147,483,648"<<endl;
	cout<<endl<<"enter return to return to menu"<<endl;
	while(getline(cin,s)){
		if(s=="return") return;
		s.clear();
	}
}
void bmi(){
	s.clear();
	cout<<"enter your name: ";
	getline(cin,s);
	if(s=="lck"||s=="LCK"||s=="Brian Lee"||s=="Lee Cheuk Kit"||s=="Brian"||s=="Brain"||s=="brian"||s=="brian lee"){
		cout<<endl<<"hi "<<s<<","<<endl;
		cout<<"your bmi is 32.9"<<endl;
	}
	else{
		cout<<endl<<"hi "<<s<<","<<endl;
		cout<<"you are normal"<<endl;
	}
	cout<<endl<<"enter return to return to menu"<<endl;
	while(getline(cin,s)){
		if(s=="return") return;
		s.clear();
	}
}
int main(){
	repeat:
	system("CLS");
	s.clear();
	cout<<"shameless self-claimed useful prog"<<endl<<endl;
	cout<<"enter mode:"<<endl;
	cout<<"sandbox"<<endl;
	cout<<"notepad"<<endl;
	cout<<"simple_calc"<<endl;
	cout<<"bmi"<<endl;
	cout<<"storage_killer"<<endl;
	cout<<"ctrl+z"<<endl;
	cout<<endl<<"enter choice: ";
	getline(cin,s);
	if(s=="shameless"){
		cout<<endl<<"yes"<<endl;
		cout<<endl<<"input return to get this work"<<endl;
		s.clear();
		while(getline(cin,s)){
			if(s=="return") break;
			s.clear();
		}
	}
	else{
		system("CLS");
		if(s=="sandbox") sandbox();
		if(s=="notepad") notepad();
		if(s=="simple_calc") simple_calc();
		if(s=="bmi") bmi();
		if(s=="storage_killer"){
			cout<<"generating file to kill storage"<<endl;
			ofstream out("storage");
			double byte=0,kb=0,mb_mod00=0,mb00=0;
			while(true){
				out<<"Hello World!"<<endl;
				byte+=14;
				if(byte>1024){
					kb++;
					byte-=1024;
				}
				if(kb>1024){
					mb_mod00++;
					kb-=1024;
				}
				if(mb_mod00>=100){
					mb00++;
					mb_mod00-=100;
					cout<<"killed "<<mb00<<"00 mib of storage"<<endl;
				}
			}
			out.close();
		}
		s.clear();
	}
	goto repeat;
}
