// 7-11-17 Alejandra Bonilla                                                    
// ejercicio calificacion                                                       

#include<iostream>
using namespace std;
int main(){

  float calif; //calificacion
  float e; //Examen
  float t; //Tareas
  float p; //Participacion
  cout<<"Para tener el promedio"<<endl;

    cout<<"Examen"<<endl;
    cin>>e;

    cout<<"Tarea"<<endl;
    cin>>t;

    cout<<"Participacion"<<endl;
    cin>>p;
  
  calif=(e*0.7)+(t*0.15)+(p*0.15);
  
  if(e<8){
    cout<<"promedio final\n"<<calif<<endl;
    }
  
  /*switch(e>=8){
       case't==0&&p==0': cout<<"promedio final\n"<<e<<endl;
       break;
       case't==0||p==0':{ calif=(e*0.85)+(t*0.15)+(p*0.15);
                                cout<<"promedio final\n"<<calif<<endl;}
        break;
       default: cout<<"Promedio final\n"<<calif<<endl;
  }*/
  if(e>=8){
  	if(t==0&&p==0){
  	cout<<"Promedio final\n"<<e<<endl;
  }
  	else{
  		if(t==0||p==0){
  			calif=(e*0.85)+(t*0.15)+(p*0.15);
  			cout<<"Promedio final\n"<<calif<<endl;
  	}
  		else{
  			if(t!=0||p!=0){
  			cout<<"Promedio final\n"<<calif<<endl;
  		}
  			}
  		}
  }

  return 0;
}
