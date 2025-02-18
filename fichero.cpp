#include<stdio.h>
#define NPRODUCT 3
//ficheros binarios
int main(){
	struct Producto{
		int cod;
		char nombre[10];
		float precio;
	};
	struct Producto misProductos[NPRODUCT];
	int cont=0;
	for(cont=0;cont<NPRODUCT;cont++){
		printf("\ncodigo %d:",cont+1);
		scanf("%d",&misProductos[cont].cod);
		printf("\nnombre del producto %d:",cont+1);
		scanf("%s",misProductos[cont].nombre);
		printf("\nprecio %d:",cont+1);
		scanf("%f",&misProductos[cont].precio);
	}
	printf("\n CONTENIDO DE LA ESTRUCTURA: ");
	for(cont=0;cont<NPRODUCT;cont++){
		printf("\n%d\t%s\t%.2f",misProductos[cont].cod,misProductos[cont].nombre,misProductos[cont].precio);
	}
	FILE *fichero;
	fichero=fopen("misproductos.mer","wb");
	fwrite(misProductos,sizeof(struct Producto)*NPRODUCT,1,fichero);
	//fwrite(origen, tamanio, 1, destino)
	fclose(fichero);
	return 0;}