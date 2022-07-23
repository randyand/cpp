#include<iostream>
using namespace std;

extern void agregarproducto(string descripcion,int cantidad,double precio);
void productos(int opcion){				
    system("cls");
    int opcionProducto =0;
    switch (opcion)
				 {
        case 1:{
            cout<< "Bebidas Calientes." <<endl;
            cout<< "******************" <<endl;
            cout<< "1- Capuccino." <<endl;
            cout<< "2- Expresso." <<endl;
            cout<< endl;

            cout<< "Ingrese una opcion . " <<endl;
            cin>> opcionProducto;


                switch (opcionProducto)	{
				    case 1:{
                        agregarproducto("1 Capuccino  L.40.00 ",1,40);
                        cout<< endl; 
					    break;
    				        }
             	    case 2:{
                        agregarproducto("1 Expreso L.30.00 ",1,30);
                        cout<< endl; 
                        break;
           				    }
            
                    default:{
                        cout<< "Opcion no valida"<<endl;
				        break;
            		        }	
                break;
       	        }
            cout<< endl; 
            cout<< "producto agregado"<<endl;						
            
            break;
		    }

                    case 2:	{
		                cout<< "Bebidas frias." <<endl;
                        cout<< "******************" <<endl;
                        system("pause");


                    break;
                    }

                         case 3:	{
                                cout<< "Reposteria." <<endl;
                                cout<< "**********" <<endl;
                                system("pause");
                     break;
				    }	
                    break;	
                 }
                 return	;
		    }