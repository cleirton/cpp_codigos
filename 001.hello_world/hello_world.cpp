// incluindo a lib iostream
#include <iostream>

/*
	namespace é como se fosse um grupo
	aqui temos diversas funções, classes e afins
	para usar uma função de um determinado grupo ou namespace
	é preciso especificar da seguinte forma:

	<namespace>::<função>

	para a função cout por exemplo, precisariamos fazer std::cout

	com a diretiva using namespace, não há a necessidade de especificar

	uma boa prática é especificar apenas as funções que serão utilizadas
	como por exemplo:
	using std::cout
	using std::endl
*/
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
	/*
		para que a função main receba argumentos do terminal
		é preciso que se especifique dois argumentos:

		1. um argumento do tipo int, que representa a quantidade de argumentos passados
		2. um array de string, com os argumentos que foram passados

		a quantidade de argumentos é sempre 1 + quantidade de argumentos passados no terminal
		já que o primeiro argumento é o local do próprio programa
	*/

	// cout - saida de dados para o terminal
	cout << "001.hello_world.cpp" << endl;

	cout << "Numero de argumentos: " << argc << endl;

	for(int i = 0; i < argc; i++) {
		cout << "argumento " << (i+1) << ": " << argv[i] << endl;
	}

	cout << "Fim do programa." << endl;
	return 0;
}
