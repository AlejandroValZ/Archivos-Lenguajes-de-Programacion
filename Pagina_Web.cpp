#include<iostream>
#include<string>
#include<fstream>
#include<cString>
#include<stdlib.h>

using namespace std;

class Plantilla{
	private:
		string titulo;
		string imagenEncabezado;
		string texto;
		string url;
		string nombreUrl;
	public:
		Plantilla();
		void setTitulo(string ti){
			titulo = ti;
		}
		string getTiulo(){
			return titulo;
		}
		void setImagen(string im){
			imagenEncabezado = im;
		}
		string getImagen(){
			return imagenEncabezado;
		}
		void setTexto(string te){
			texto = te;
		}
		string getTexto(){
			return texto;
		}
		void setUrl(string u){
			url = u;
		}
		string getUrl(){
			return url;
		}
		void setnombreUrl(string nU){
			nombreUrl = nU;
		}
		string getnombreUrl(){
			return nombreUrl;
		}
		string construirPlantilla();
};

Plantilla::Plantilla(){
			
}

string Plantilla::construirPlantilla(){
	string lineas[12];
	string plantilla;
	
	lineas[0] ="<!DOCTYPE html>\n";
	lineas[1] ="<head>\n";
	lineas[2] ="	<title>Document</title>\n";
	lineas[3] ="</head>\n";
	lineas[4] ="<body>\n";
	lineas[5] ="	<img src='"+ getImagen() +"'>\n";
	lineas[6] ="	<h1>"+ getTiulo() +"</h1>\n";
	lineas[7] ="	<p>"+ getTexto() +"</p>\n";
	lineas[8] ="	<a href='"+ getUrl() +"'>"+ getnombreUrl() +"</a>\n";
	lineas[10] ="</body>\n";
	lineas[11] ="</html>";
	
	int i = 0;
	for(i = 0;i < 12;i++){
		plantilla+=lineas[i];
	}
	
	return plantilla;
}

int main() {
	Plantilla p1;
	int salir = 0;
	
	while(salir != 1){
		int opcion;
		int i = 0;
		cout<<"Ingrese una opcion\n";
		cout<<"Agregar imagen de encabezado[1]\n";
		cout<<"Agregar un titulo[2]\n";
		cout<<"Agregar linea de texto[3]\n";
		cout<<"Agregar un url[4]\n";
		cout<<"Guardar archivo html[5]\n";
		cout<<"Salir[6]\n";
		cin>>opcion;
		
		switch(opcion){
			case 1:{
				string urlIm;
				cout<<"Ingrese el url completo de la imgen\n";
				cin>>urlIm;
				p1.setImagen(urlIm);
				system("CLS");
				break;
			}
			case 2:{
				string tit;
				cout<<"Escriba un titulo\n";
				cin>>tit;
				p1.setTitulo(tit);
				system("CLS");
				break;
			}
			case 3:{
				string text;
				cout<<"Escriba el texto\n";
				cin>>text;
				p1.setTexto(text);
				system("CLS");
				break;
			}
			case 4:{
				string url;
				string nUrl;
				cout<<"Escriba el nombre de la pagina\n";
				cin>>nUrl;
				p1.setnombreUrl(nUrl);
				cout<<"Escriba el url\n";
				cin>>url;
				p1.setUrl(url);
				system("CLS");
				break;
			}
			case 5:{
				ofstream MyFile("pagina.html");
				
				MyFile << p1.construirPlantilla();
				
				MyFile.close();
				
				cout<<"Archivo guardado exitosamente\n";
				cout<<"Puedo buscarlo por el nombre de 'archivo'";
				break;
			}
			case 6:{
				system("CLS");
				cout<<"Salida con exito";
				return 0;
				break;
			}
			default:
				system("CLS");
				break;
		}
	}
	
	return 0;
}

