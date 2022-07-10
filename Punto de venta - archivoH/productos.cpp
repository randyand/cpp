#include <iostream>
#include"menu.h"
#include"productos.h"
#include"factura.h"
using namespace std;


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
            cin>> opcionProducto;

                switch (opcionProducto)	{
				    case 1:{
                        agregarproducto("1 Capuccino - L.40.00",1,40);
                        cout<< endl; 
       				    cout<< "producto agregado"<<endl;
					    break;
    				        }
             	    case 2:{
                        agregarproducto("1 Expreso - L.30.00",1,30);
                        cout<< endl; 
        			    cout<< "producto agregado"<<endl;
                        break;
           				    }
            
                    default:{
                        cout<< "Opcion no valida"<<endl;
				        break;
            		        }							
                break;
       	        }
        
        break;
		}

                    case 2:	{
		                cout<< "Bebidas frias." <<endl;
                        cout<< "******************" <<endl;
                        cout<< "1- Cafe Mocca Helado." <<endl;
                        cout<< "2- Cafe con helado de vainilla." <<endl;
                        cout<< "3- Piña colada." <<endl;
                        cin>> opcionProducto;

                        switch (opcionProducto) 																													{
                        case 1:{
                            agregarproducto("1 Café Mocca Helado. - L.35.00",1,35);
                            cout<< endl; 
                            cout<< "producto agregado"<<endl;
                            break;
                            	}

                        case 2:{
                            agregarproducto("1 Café con helado de vainilla. - L.50.00",1,50);
                            cout<< endl; 
        	                cout<< "producto agregado"<<endl;
			                break;
            		        }
                        case 3:	{
                            agregarproducto("1 Piña colada. - L.60.00",1,60);
                            cout<< endl; 
                            cout<< "producto agregado"<<endl;

                            break;}
            
                            default:{
                            cout<< "Opcion no valida"<<endl;
                            break;
            		        }
                    break;
                    }
                break;
			    }

                         case 3:	{
                                cout<< "Reposteria." <<endl;
                                cout<< "**********" <<endl;
                                cout<< "1- Bizcocho de yogur." <<endl;
                                cout<< "2- muffins." <<endl;
                                cout<< "3- tarta de mermelada." <<endl;
                                cin>> opcionProducto;

                    switch (opcionProducto) {
                        case 1:{
                            agregarproducto("1 Bizcocho de yogur. - L.35.00",1,35);
                            cout<< endl; 
       	 	                cout<< "producto agregado"<<endl;
			                break;
            	            }
                         case 2:{
                            agregarproducto("1 muffins. - L.25.00",1,25);
                            cout<< endl; 
        	                cout<< "producto agregado"<<endl;
       		                break;
            		        }
                        case 3:{
                            agregarproducto("3 tarta mermelada. - L.45.00",1,45);
                            cout<< endl; 
        	                cout<< "producto agregado"<<endl;
       		                break;
            		        }
                        default:{
                            cout<< "Opcion no valida"<<endl;
                            break;
            		        }
                        break;
        		        }
                    break;
				    }	
                    break;	
                 }
                 return	;
		    }
			
																		



