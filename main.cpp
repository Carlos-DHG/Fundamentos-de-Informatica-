#include<iostream>
using namespace std;

int num;
void solicitarNum(){
	
	
	cout << "Digite un numero positivo...de 0 en adelante" << endl;
	cin >> num;
}

bool validar(){
	
	if(num < 0){
		return false;
	}
	return true;
	
}

int funcionar(){
	
	do{
		solicitarNum();
		
	    if(validar ()){
		cout << "Su num es valido"<< endl;
	    }else cout << "invalido" << endl;
	 ;
	}while ( validar ()== false);
	
	
}
string figuraFor(){
		string figura="";
		cout << "\nCon For"<< endl;
		for(int i=1;i<=num;i++){
			for(int j=1;j<=i;j++){
				figura+="*";
			}
			figura+="\n";
		}
		for(int i = num-1;i>=1;i--){
			for(int j=1;j<=i;j++){
				figura+="*";
			}
			figura+="\n";
		}
		return figura;
	}
void figuraWhile(){
	int i = 1;
	cout << "\nCon While"<< endl;
	while (i <= num){
		int j = 1;
			while(j <= i){
			cout << "*";
			j++;
		}
		cout << "\n";
		i++;
	}
	i = num-1;
	while(i >= 1){
		int j = 1;
		while(j <= i ){
			cout << "*";
			j++;
		}
		cout << "\n";
		i--;
	}
}		
int candlineas(){
	cout << "La canridad de lineas es: " << 2*num-1;
	return 0;
}
int main (int argc, char *argv[]) {
	int num;
	funcionar();
	cout << figuraFor();
	figuraWhile();
	candlineas();
	return 0;
}


