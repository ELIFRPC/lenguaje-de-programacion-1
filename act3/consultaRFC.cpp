#include <iostream>

#include <string>

//funcion primera vocal interna de la cadena de texto 
char primeraVocalInterna(const std::string& str) {
	for (size_t i = 1; i < str.length(); ++i) {
		char c = str[i];
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			return c;

	}
	return 'X'; // se usara si no hay vocal interna (x)
}
//funcion principal para calcular RFC
std::string calcularRFC(const std::string& nombre, const std::string& apellidoPaterno, const std::string& apellidoMaterno, const std::string& fechaNacimiento) {
	std::string rfc;

	// letra inicial y primera vocal del apellido paterno
	char letraInicial = apellidoPaterno[0];
		char  PrimeraVocalInterna = primeraVocalInterna(apellidoPaterno);

	// inicial del apellido materno o se usa una 'x' si no hay
	char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? apellidoMaterno[0] : 'X';

	// inicial del primer nombre o 'X' si no hay
	char inicialNombre = nombre[0];

	// obtencion de los dos ultimos digitos del año de fechaNacimiento
	std::string anio = fechaNacimiento.substr(2, 2);

	// obtencion del mes y del año de fechadeNacimiento
	std::string mes = fechaNacimiento.substr(5, 2);
	std::string dia = fechaNacimiento.substr(8, 2);

	// hechura del RFC

	rfc = letraInicial;
	rfc += PrimeraVocalInterna;
	rfc += inicialApellidoMaterno;
	rfc += inicialNombre;
	rfc += anio;
	rfc += mes;
	rfc += dia;
	return rfc;

}

int main() {
	std::string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;

	std::cout << "ingrese el nombre: ";
	std::getline(std::cin, nombre);

	std::cout << "ingrese el apellido paterno :";
	std::getline(std::cin, apellidoPaterno);

	std::cout << "ingrese el apellido materno: ";
	std::getline(std::cin, apellidoMaterno);

	std::cout << "ingrese la fecha de nacimiento (YYYY-MM-DD): ";
	std::getline(std::cin, fechaNacimiento);

	std::string rfc = calcularRFC(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);
	std::cout << "RFC SIN HOMOCLAVE ES: " << rfc << std::endl;

	return 0;

}