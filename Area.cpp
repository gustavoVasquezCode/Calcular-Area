#include <iostream>
#include <stdlib.h>
#include <math.h>

class Area {
	public:
		int area;
		virtual void ingresarDatos(){};
		virtual void calcularArea(){};
};

class Cuadrado : public Area {
	private:
		int lado;
	public:
		void ingresarDatos(){
			std::cout << "Ingrese el lado del cuadrado: ";
			std::cin >> lado;
		}
		
		void calcularArea(){
			area = pow(lado, 2);
			std::cout << "\nEl area del cuadrado es: " << area << std::endl;
		}
};

class Triangulo : public Area {
	private:
		int base;
		int altura;
	public:
		void ingresarDatos(){
			std::cout << "\n\nIngrese la base: "; std::cin >> base;
			std::cout << "Ingrese la altura: "; std::cin >> altura;
		}
		
		void calcularArea(){
			area = (base * altura) / 2;
			std::cout << "\nEl area del triangulo es: " << area << std::endl;
		}
};


int main(void){
	Cuadrado *obj1 = new Cuadrado();
	Triangulo *obj2 = new Triangulo();
	
	obj1->ingresarDatos();
	obj1->calcularArea();
	
	obj2->ingresarDatos();
	obj2->calcularArea();
	
	system("pause > 0");
	return EXIT_SUCCESS;
}
