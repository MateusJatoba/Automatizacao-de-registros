#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int mes[12][3] = {{0 , 0 , 0},
					  {0 , 0 , 0}, 
					  {0 , 0 , 0},
					  {0 , 0 , 0}, 
					  {0 , 0 , 0}, 
					  {0 , 0 , 0}, 
					  {0 , 0 , 0}, 
					  {0 , 0 , 0}, 
					  {0 , 0 , 0}, 
					  {0 , 0 , 0}, 
					  {0 , 0 , 0}, 
					  {0 , 0 , 0}};
					  
	int mesChamado, chamadosRecebidos, chamadosAtendidos, continua, index;
	continua = 1;
	while(continua){
		
		cout << "Insira o m�s: ";
		cin >> mesChamado;
		
		
		if(mesChamado < 1 || mesChamado > 12){
			cout << "" << endl;
			cout << "m�s inv�lido" << endl;
			cout << "" << endl;
		}
		
		else{
			cout << "Insira os Chamados Recebidos nesse respectivo m�s: ";
			cin >> chamadosRecebidos;
			mes[mesChamado - 1][1] = chamadosRecebidos;
			
			cout << "Insira os Chamados Atendidos nesse respectivo m�s: ";
			cin >> chamadosAtendidos;
			
			mes[mesChamado - 1][2] = chamadosAtendidos;
			
		}
		
		if(mesChamado < 1 || mesChamado > 12){
			continua = false;
		}
		
		else{
			cout << "" << endl;
			cout << "Deseja continuar a opera��o ? [1] - Sim ; [2] - N�o: ";
			cin >> continua;
			cout << "" << endl;
			if(continua == 1){
				continua = true;
			}
			else if (continua == 2){
				continua = false;
			}
			
			else{
				cout << "Opera��o encerrada automaticamente!! " << endl;
				cout << "" << endl;
				continua = false;
			}
		}
		
		
	}

	cout << "Digite [0] se quiser ver os dados referentes a todos os meses, ou um n�mero de 1 a 12, se desejar ver dados de um m�s espec�fico: ";
	cin >> index;
	cout << "" << endl;
	
	if(index < 0 || index > 12){
		cout << "" << endl;
		cout << "[ERROR]" << endl;
		cout << "" << endl;
	}
	
	else{
		switch(index){
			case 0: 
				index = 1;
				cout << "m�s | " << "Chamados Recebidos | " << "Chamados Atendidos |" << endl;
				cout << "-----------------------------------------------" << endl;
				while(index <= 12){
					
					cout << setw(3) << right << index << " |";
					cout << setw(19) << right << mes[index - 1][1] << " |";
					cout << setw(19) << right << mes[index - 1][2] << " |" << endl;
					cout << "-----------------------------------------------" << endl;
					index ++;
				}
				break;
	
			
			default:
				cout << "m�s | " << "Chamados Recebidos | " << "Chamados Atendidos |" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << setw(3) << right << index << " |";
				cout << setw(19) << right << mes[index - 1][1] << " |";
				cout << setw(19) << right << mes[index - 1][2] << " |" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "" << endl;
				break;
		}
	}
		
	
}
