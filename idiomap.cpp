#include <bits/stdc++.h>
using namespace std;
string IdiomaP(string f);
int main(){
	string frase;
	cout<<"ingrese una frase :  ";
	getline(cin,frase);
	
	cout<<IdiomaP(frase);
	return 0;
}
string IdiomaP(string f){
	string aux;
	for(int i=0;i<f.size();i++){
		aux+=f[i];
		if(f[i]=='a'||f[i]=='e'||f[i]=='i'||f[i]=='o'||f[i]=='u'){
			aux+='p';
			aux+=f[i];
		}
	}
return aux;	
}