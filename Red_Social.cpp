#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

using namespace std;

struct Usuario{
	string correo;
	string nombre;
	string apellido;
	string fNacimiento;
	string mensajes[10];
	string posteos[10];
};

int main() {
	Usuario usuarios[15];
	int indice = 0;
	int indiceMensajes = 0;
	int indicePosteos = 0;
	int salir = 0;
	int usuarioActual = -1;
	string para = "Para ";
	string mensaje;
	while(salir != 1){
		int opcion;
		int i = 0;
		cout<<"Ingrese una opcion\n";
		cout<<"Crear usuario[1]\n";
		cout<<"Autentificar[2]\n";
		cout<<"Enviar mensaje[3]\n";
		cout<<"Ver mensajes enviados[4]\n";
		cout<<"Agregar post al muro[5]";
		cout<<"Ver muro[6]\n";
		cout<<"Limpiar consola manual[7]\n";
		cout<<"Salir[8]\n";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Ingrese su nombre\n";
				cin>>usuarios[indice].nombre;
				cout<<"Ingrese su apellido\n";
				cin>>usuarios[indice].apellido;
				cout<<"Ingrese su correo\n";
				cin>>usuarios[indice].correo;
				cout<<"Ingrese su fecha de nacimiento\n";
				cin>>usuarios[indice].fNacimiento;
				indice+=1;
				system("CLS");
				break;
			case 2:{
				string correoIngresado;
				cout<<"Ingrese su correo\n";
				cin>>correoIngresado;
				
				for(i = 0;i < 15; i++){
					if(correoIngresado.compare(usuarios[i].correo)==0){
						usuarioActual = i;
						cout<<"Ingresado con exito\n";
						indiceMensajes = 0;
						indicePosteos = 0;
						break;
					}
				}
				break;
			}
			case 3:{
				string destinatario;
				if(usuarioActual<0){
					cout<<"No se ha ingresado un usuario\n";
					break;
				}
				cout<<"Ingrese nombre destinatario\n";
				cin>>destinatario;
				for(i = 0;i < 15; i++){
					if(destinatario.compare(usuarios[i].nombre)==0){
						usuarios[usuarioActual].mensajes[indiceMensajes] = para + destinatario + "\n";
						cout<<"Ingresado mensaje\n";
						cin>>mensaje;
						usuarios[usuarioActual].mensajes[indiceMensajes] += mensaje;
						indiceMensajes +=1;
						system("CLS");
						break;
					}else{
						
					}
				}
				break;
			}
			case 4:{
				if(usuarioActual<0){
					cout<<"No se ha ingresado un usuario\n";
					break;
				}
				for(i = 0;i < 10; i++){
					cout<<"[1] "<<usuarios[usuarioActual].mensajes[i]<<endl;
				}
				break;
			}
			case 5:{
				string titulo;
				string cuerpo;
				if(usuarioActual<0){
					cout<<"No se ha ingresado un usuario\n";
					break;
				}
				cout<<"Ingrese un titulo\n";
				cin>>titulo;
				cout<<"Ingrese el cuerpo del posteo";
				cin>>cuerpo;
				usuarios[usuarioActual].posteos[indicePosteos] = titulo + "\n" + cuerpo;
				indicePosteos += 1;
				system("CLS");
				break;
			}
			case 6:{
				if(usuarioActual<0){
					cout<<"No se ha ingresado un usuario\n";
					break;
				}
				for(i = 0;i < 10; i++){
					cout<<"[1] "<<usuarios[usuarioActual].posteos[i]<<endl;
				}
				break;
			}
			case 7:{
				system("CLS");
				break;
			}
			case 8:
				return 0;
				break;	
			default:
				system("CLS");
				break;
		}
	}
	return 0;
}


