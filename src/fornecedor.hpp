#ifndef FORNECEDOR_HPP
#define FORNECEDOR_HPP
#include <iostream>
#include <string>

using namespace std;

class Fornecedor
{
	private:
		string idFornecedor;
		string nomeFornecedor;
		string enderecoFornecedor;
		int numFornecedor;		
		
	public:
		Fornecedor();
	
		void setIDFornecedor(string idFornecedor);
		string getIDFornecedor();
		
		void setNomeFornecedor(string nomeFornecedor);
		string getNomeFornecedor();
		
		void setEnderecoFornecedor(string enderecoFornecedor);
		string getEnderecoFornecedor();		
};
#endif
