#include <iostream>
#include <fstream>

int main() {
	std::ofstream archivo("datos.txt"); // Abre el archivo "datos.txt" para escritura
	
	if (archivo.is_open()) {
		// Realizar operaciones de escritura en el archivo
		archivo << "AL  2da!" << std::endl;
		
		archivo.close(); // Cierra el archivo después de su uso
	} else {
		std::cout << "No se pudo abrir el archivo." << std::endl;
	}
	
	return 0;
}
