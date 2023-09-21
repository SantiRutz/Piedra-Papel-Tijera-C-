
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	
    int datoPh=0;
    int datoPpc=0;
    int n=0;
    int puntosPh=0;
    int puntosPpc=0;
    
    srand(time(NULL));
    datoPpc= 1 + rand()%(3);
    
    system("color 09");
    
    cout<<"Digite n rondas: "; cin>>n;
    
    for(int i=0; i<n; i++){
    	cout<<"Ronda "<<i+1<<" "<<endl;
    	
    	cout<<"Digite 1=Piedra, 2=Papel, 3=Tijera: "; cin>>datoPh;
 
        //Opciones del jugador;
        if(datoPh==1){
            cout<<"Jugadorx elije: Piedra"<<endl;
        }
        if(datoPh==2){
            cout<<"Jugadorx elije: Papel"<<endl;
        }
        if(datoPh==3){
            cout<<"Jugadorx elige: Tijera"<<endl;
        }
        //Opciones de la pc/Maquina;
        if(datoPpc==1){
            cout<<"Pc elije: Piedra"<<endl;
        }
        if(datoPpc==2){
            cout<<"Pc elije: Papel"<<endl;
        }
        if(datoPpc==3){
            cout<<"Pc elige: Tijera"<<endl;
        }
        //Veredicto;
   
        //Casos de empate;
        if(datoPh==datoPpc){
            cout<<"***Empatan***"<<endl;
            cout<<"\n";
        }
        //Casos de Piedra;
        if(datoPh==1 && datoPpc==2){
            cout<<"***Gana la PC***"<<endl;
            cout<<"\n";
            puntosPpc++;
        }
        if(datoPh==1 && datoPpc==3){
            cout<<"***Gana el/la Jugadorx***"<<endl;
            cout<<"\n";
            puntosPh++;
        }
        //Casos de Papel;
        if(datoPh==2 && datoPpc==3){
    	    cout<<"***Gana la PC***"<<endl;
    	    cout<<"\n";
    	    puntosPpc++;
	    }
        if(datoPh==2 && datoPpc==1){
    	    cout<<"***Gana el/la Jugadorx***"<<endl;
    	    cout<<"\n";
    	    puntosPh++;
	    }
        //Casos de Tijera;
        if(datoPh==3 && datoPpc==1){
    	    cout<<"***Gana la PC***"<<endl;
    	    cout<<"\n";
    	    puntosPpc++;
	    }
	    if(datoPh==3 && datoPpc==2){
		    cout<<"***Gana el/la Judadorx***"<<endl;
		    cout<<"\n";
		    puntosPh++;
	    }
	}
    //Veredicto final;
    if(puntosPh==puntosPpc){
    	cout<<"***Empatan***"<<endl;
    	cout<<"Jugadorx por "<<puntosPh<<" y la Pc "<<puntosPpc<<" "<<endl;
	}
    
    if(puntosPh>puntosPpc){
    	cout<<"***Gana el/la jugadorx***"<<endl;
    	cout<<"Jugadorx por "<<puntosPh<<" y la Pc "<<puntosPpc<<" "<<endl;
	}
	if(puntosPpc>puntosPh){
		cout<<"***Gana la PC***"<<endl;
		cout<<"Pc por "<<puntosPpc<<" y el/la jugadorx "<<puntosPh<<" "<<endl;
    }
	
    return 0;
}
