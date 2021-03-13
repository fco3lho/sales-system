#include <iostream>
#include <string>
#include "fornecedor.hpp"

using namespace std;

Fornecedor::Fornecedor()
{
	idFornecedor = "";
	nomeFornecedor = "";
	enderecoFornecedor = "";
	numFornecedor = 0;
}

void Fornecedor::setIDFornecedor(string idFornecedor)
{
	this->idFornecedor = idFornecedor;
}

string Fornecedor::getIDFornecedor()
{
	return this->idFornecedor;
}

void Fornecedor::setNomeFornecedor(string nomeFornecedor)
{
	this->nomeFornecedor = nomeFornecedor;
}

string Fornecedor::getNomeFornecedor()
{
	return this->nomeFornecedor;
}

void Fornecedor::setEnderecoFornecedor(string enderecoFornecedor)
{
	this->enderecoFornecedor = enderecoFornecedor;
}

string Fornecedor::getEnderecoFornecedor()
{
	return this->enderecoFornecedor;
}
