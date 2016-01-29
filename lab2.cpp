#include <iostream>
#include <cstdlib>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

long  double factorial (double a);
double area ( double x1 ,double y1 ,double x2 ,double y2 ,double x3 ,double y3 ,double x4 ,double y4);

int main(int argc, char const *argv[]){
   
     double numF;
	cout << "ingreese el factorial";
	cin >> numF;
	double x1 , y1 ,x2 ,y2 , x3 , y3 ,x4 , y4;

	cout << "="<< factorial (numF) << endl;

    cout << "Ingrese x1 ";
    cin >> x1;
    cout << "Ingrese y1 ";
    cin  >> y1;
    cout << "Ingrese x2 ";
    cin >> x2;
    cout << "Ingrese y2 ";
    cin >> y2;
    cout << "Ingrese x3 ";
    cin >> x3;
    cout << "Ingrese y3 ";
    cin >> y3;
    cout << "Ingrese x4 ";
    cin >> x4;
    cout << "Ingrese y4 ";
    cin >> y4;
     cout<< "el area es: "<< area (x1 , y1 ,x2 ,y2 , x3 , y3 ,x4 , y4)<<endl;
	return 0;
}


long double factorial (double a){

	
   double factorial=1;
    for (int i=1 ; i<=a ; i++){
    	    factorial=i*factorial;
    }

	return factorial;
}

double area ( double x1 ,double y1 ,double x2 ,double y2 ,double x3 ,double y3 ,double x4 ,double y4){
    double area =0;
    //  dis es igual a distancia
    double dis1,dis2,dis3,dis4,dis5 ;
    // semi es igual semiperimetro 
    double semiP1,semip2;
    // peri es igual a perimetro
    double peri1, peri2;
    // altu es igual altura
    double altu1, altu2, altu3,altu4,altu5,altu6;

    dis1 = sqrt( pow ((x2-x1),2.0) + pow ((y2-y1),2.0));
    dis2 =   sqrt( pow ((x4-x2),2.0) + pow ((y4-y2),2.0));
    dis3 =  sqrt( pow ((x4-x3),2.0) + pow ((y4-y3),2.0));
    dis4 =  sqrt( pow ((x3-x1),2.0) + pow ((y3-y1),2.0));
    dis5 = sqrt( pow ((x1-x4),2.0) + pow ((y1-y4),2.0));

    cout<< dis1 << endl;
    cout<< dis2 << endl;
    cout<< dis3 << endl;
    cout<< dis4 << endl;
    cout<< dis5 << endl;

    cout << "triangulo 1 mide " << endl;
    cout << "lado1: "<<dis2<< endl;
    cout << "lado2: "<<dis1 << endl;
    cout << "lado3: "<< dis5 << endl;
    semiP1 = (dis1+dis2+dis5)/2;
    peri1 = (dis1+dis2+dis5);
    cout << "perimetro: "<< peri1<<endl ;
    cout << "semiperimetro: "<< semiP1 <<endl;
    altu1 = (2/dis2)* sqrt (semiP1*(semiP1-dis2)*(semiP1-dis1)*(semiP1-dis5));
    altu2 = (2/dis1)* sqrt (semiP1*(semiP1-dis2)*(semiP1-dis1)*(semiP1-dis5));
    altu3 = (2/dis5)* sqrt (semiP1*(semiP1-dis2)*(semiP1-dis1)*(semiP1-dis5));
    cout << "altura1: "<< altu1 <<endl;
    cout << "altura2: "<< altu2 <<endl;
    cout << "altura3: "<< altu3 <<endl;

    cout << "----------------------"<< endl;
    cout << "triangulo 2 mide " << endl;
    cout << "lado1: "<<dis3<< endl;
    cout << "lado2: "<<dis4 << endl;
    cout << "lado3: "<< dis5 << endl;
    semip2 = (dis3+dis4+dis5)/2;
    peri2 = (dis3+dis4+dis5);
    cout << "perimetro: "<< peri2<<endl ;
    cout <<"semiperimetro: "<<semip2 << endl;  
    altu5 = (2/dis2)* sqrt (semip2*(semip2-dis2)*(semip2-dis1)*(semip2-dis5));
    altu4 = (2/dis1)* sqrt (semip2*(semip2-dis2)*(semip2-dis1)*(semip2-dis5));
    altu6 = (2/dis5)* sqrt (semip2*(semip2-dis2)*(semip2-dis1)*(semip2-dis5));
    cout << "altura1: "<< altu4 <<endl;
    cout << "altura2: "<< altu5 <<endl;
    cout << "altura3: "<< altu6 <<endl;
    cout << "----------------------"<< endl;
   // revisar la formula de area esta es la formula de heron para sacar are de un triangulo solo sabiendo todos los lados 
   area = sqrt (semip2*(semip2-dis2)*(semip2-dis1)*(semip2-dis5)) + sqrt (semiP1*(semiP1-dis2)*(semiP1-dis1)*(semiP1-dis5));

    

    


	return area;
}