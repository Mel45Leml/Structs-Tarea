#include <stdio.h>
#include <string.h>

/*
  Iterar
   Meter arreglos
*/

struct info{
	char nombre[25];
	char apPaterno[25];
	char apMaterno[25];
};

struct academico{
	char numeroEmpleado[13];
	struct info datos_profesor;
}profesor[5];

struct alumnado{
	char numeroCuenta[13];
	char promedio[5];
	struct info datos_estudiante; //
}estudiante;

int main(void){
	int op, reg;

do{
	puts("¿Qué datos deseas registrar?");
	puts("1.-Profesorado");
	puts("2.-Alumnado");
	puts("3.-Salir");
	printf("Ingrese la opcion [1 2 3] :");

	scanf("%i", &op);
	if(op == 1){
		getchar();
		puts("¿Cuántos registros deseas ingresar?");
		scanf("%i", &reg);
		for (int i=0; i<reg; i++){
			puts("--------------------------");
			printf("\n\"Número de empleado:\"");
			fflush(stdin);
			fgets(profesor[i].numeroEmpleado,13,stdin);
			printf("Nombre: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor.nombre, 25, stdin);
			printf("Apellido Paterno: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor.apPaterno, 25, stdin);
			printf("Apellido Materno: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor.apMaterno, 25, stdin);
		} //Fin de For
	}else if(op == 2){
		getchar();
		printf("Número de cuenta del estudiante: ");
		fflush(stdin);
		fgets(estudiante.numeroCuenta,13,stdin);
				printf("Promedio: ");
		fflush(stdin);
		fgets(estudiante.promedio,5,stdin);
		printf("Nombre: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.nombre, 25, stdin);
		printf("Apellido Paterno: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.apPaterno, 25, stdin);
		printf("Apellido Materno: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.apMaterno, 25, stdin);
		//Se debe imprimir fuera del ciclo for y como un arreglo 
		//printf("\n\tID: %s \n\tpromedio: %s \n\tNombre:%s\n\tApellido Paterno: %s\n\tApellido Materno: %s", estudiante.numeroCuenta, estudiante.promedio, estudiante.datos_estudiante.nombre, estudiante.datos_estudiante.apPaterno, estudiante.datos_estudiante.apMaterno);   
	}else{
		printf("Dame una opción válida");
	}
}while (op != 3);
	puts("---------------------------");
	for (int i=0; i<reg; i++){
		printf("\n\tID: %s \tNombre:%s\tApellido Paterno: %s\tApellido Materno: %s", profesor[i].numeroEmpleado, profesor[i].datos_profesor.nombre, profesor[i].datos_profesor.apPaterno, profesor[i].datos_profesor.apMaterno);
		
	}
	puts("---------------------------");
	puts("Que tenga buen dia, vuelva pronto");
	}

