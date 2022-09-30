/*
 ============================================================================
 Name        : ejercicio8-2.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/******************************************************************************

Ejercicio 8-2:

Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los
siguientes datos:

● idProducto (numerico)
● descripcion (alfanumérico)
● nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
● tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
● precio (numérico decimal)

Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:

1. ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio
disponible en el array.

2. BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista,
dejando espacio disponible para un nuevo producto.

3. MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o
el tipo.

4. LISTADO Productos.
5. LISTADO ordenado por precio.
6. LISTADO ordenado por descripción.
*******************************************************************************/
#include <stdio.h>
#define CANT_PROD 5

 typedef struct{

        int idProducto;
        char descripcion[1024];
        int nacionalidad;
        int tipo;
        float precio;
        int isEmpty;

    }producto;

int inicializarProductos(producto productos[], int len);
int buscarVacio(producto produtos[], int len);
int darAltaProducto(producto productos[], int len);
int buscarPorIdProducto(producto productos[], int len, int id);
int darBajaProducto(producto productos[], int len);
int listarProductos(producto productos[], int len);
int modificarProducto(producto productos[], int len);
void mostrarProducto(producto item);

int main()
{
	setbuf(stdout,NULL);


    int opcion;



    producto productos[CANT_PROD];

    inicializarProductos(productos, CANT_PROD);

    do{

		printf("\tBienvenido al Menu de APPLE\n\n"
			   "¿Que accion desea realizar?\n\n"
			   "1-ALTA\n"
			   "2-BAJA\n"
			   "3-MODIFICAR\n"
			   "4-Listar productos\n"
			   "5-LISTADO ordenado por precio\n"
               "6-LISTADO ordenado por descripción\n"
			   "7-Salir\n");

		        scanf("%d",&opcion);

		switch(opcion){

		case 1:
		    darAltaProducto(productos,CANT_PROD);
	    	printf("idProducto: %d \n", productos[0].idProducto);

			break;

		case 2:
		    darBajaProducto(productos,CANT_PROD);

			break;

		case 3:
		 modificarProducto( productos, CANT_PROD);

			break;

		case 4:
		    listarProductos(productos,CANT_PROD);

	    	printf("4");
			break;

		case 5:
			printf("5");
			break;

		case 6:
	    	printf("6");
		    break;

		case 7:
	    	printf("7");
		    break;
		}

	}while(opcion != 7);


    return 0;
}

int inicializarProductos(producto productos[], int len){

    int retorno = 0;

    if(productos != NULL && len > 0){

        for(int i = 0; i < len; i++){

            productos[i].isEmpty = 0; //0 vacio 1 lleno.
        }

        retorno = 1;
    }

    return retorno;
}

int buscarVacio(producto productos[], int len){

    int retorno = -1;

    if(productos != NULL && len > 0){

        for(int i = 0; i < len; i++){

            if(productos[i].isEmpty == 0){

                 retorno = i; //ya encontre vacio, break.
                 break;
            }

        }


    }

    return retorno;
}

int darAltaProducto(producto productos[], int len){

    int retorno = -1;
    int indice;
    producto auxProducto;

    if(productos != NULL && len > 0){

      indice = buscarVacio(productos, len);

        if(indice != -1){

            printf("Ingrese idProducto: \n");
            scanf("%d",&auxProducto.idProducto);

            printf("Ingrese descripcion: \n");
            scanf("%s",auxProducto.descripcion);

            printf("Ingrese nacionalidad: \n");
            scanf("%d",&auxProducto.nacionalidad);

            printf("Ingrese tipo: \n");
            scanf("%d",&auxProducto.tipo);

            printf("Ingrese precio: \n");
            scanf("%f",&auxProducto.precio);

            auxProducto.isEmpty = 1;
        }

        productos[indice] = auxProducto;

    }

    return retorno;
}

int buscarPorIdProducto(producto productos[], int len, int id){

    int retorno = -1;

    if(productos != NULL && len > 0 && id > 0){

        for(int i = 0; i < len; i++){

            if(productos[i].idProducto == id){

                 retorno = i; //ya encontre el id, break.
                 break;
            }

        }
    }

    return retorno;
}

int darBajaProducto(producto productos[], int len){

    int retorno = -1;
    int id;
    int indice;

    if(productos != NULL && len > 0){

        printf("\nQue id quiere dar de baja?: ");
        scanf("%d", &id);
        indice = buscarPorIdProducto(productos, len, id);

        if(indice != -1){
            productos[indice].isEmpty=0;
        }
    }

    return retorno;
}

int listarProductos(producto productos[], int len){
    int retorno=-1;
    if(productos!=NULL && len>0){
         for(int i=0;i<len;i++){
            if(productos[i].isEmpty == 1 ){
                mostrarProducto(productos[i]);
            }
        }
        retorno = 0;
    }

    return retorno;
}

void mostrarProducto(producto item){

    printf("\nprecio: %f", item.precio);
    printf("\n tipo: %d", item.tipo);
    printf("\nnacionalidad: %d", item.nacionalidad);
    printf("\ndescripcion: %s", item.descripcion);
    printf("\nid: %d", item.idProducto);
}
int modificarProducto(producto productos[], int len){

    int retorno = -1;
    int id;
    int indice;
    int opcion;


    if(productos != NULL && len > 0){

        printf("\nQue id quiere modificar: ");
        scanf("%d", &id);
        indice = buscarPorIdProducto(productos, len, id);

        if(indice != -1){

         printf("\ningrese 1 para modificar precio y 2 para modfcar tipo 3 para ambos: ");
        scanf("%d", &opcion);
            switch(opcion){
                case 1:
                    printf("Ingrese precio: \n");
                    scanf("%f",&productos[indice].precio);
                  break;

                case 2:
                        printf("Ingrese tipo: \n");
                        scanf("%d",&productos[indice].tipo);
                    break;

                case 3:
                        printf("Ingrese precio: \n");
                        scanf("%f",&productos[indice].precio);
                        printf("Ingrese tipo: \n");
                        scanf("%d",&productos[indice].tipo);
                    break;


            }

        }
    }

    return retorno;
}
