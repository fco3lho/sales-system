#include <iostream>
#include <string>
#include "produto.hpp"

using namespace std;

Produto::Produto()
{
	idProduto = 0;
	quantidadeProduto = 0;
	descricaoProduto = "";
	numFornecedor = 0;
	
	for(int i = 0; i < 10; i++)
	{
		vetFornecedor[i].setIDFornecedor("0");
		vetFornecedor[i].setNomeFornecedor("0");
	}
}

void Produto::setDescricaoProduto(string descricaoProduto)
{
	this->descricaoProduto = descricaoProduto;
}

string Produto::getDescricaoProduto()
{
	return this->descricaoProduto;
}


void Produto::setIDProduto(int idProduto)
{
	this->idProduto = idProduto;
}

int Produto::getIDProduto()
{
	return this->idProduto;
}


void Produto::setQuantidadeProduto(int quantidadeProduto)
{
	this->quantidadeProduto = quantidadeProduto;
}

int Produto::getQuantidadeProduto()
{
	return this->quantidadeProduto;
}


void Produto::setFornecedor(Fornecedor f)
{
	vetFornecedor[numFornecedor] = f;
	numFornecedor = numFornecedor + 1;
}

Fornecedor Produto::getFornecedor(string idFornecedor)
{
	Fornecedor x;
	Fornecedor y;
	
	for(int i = 0; i < 10; i++)
	{
		x = vetFornecedor[i];
		y.setIDFornecedor(0);
		
		if(x.getIDFornecedor() == idFornecedor)
		{
			cout << "Fornecedor ID: " << idFornecedor << endl;
			cout << "ID " << idFornecedor << " - Nome: " << vetFornecedor[i].getNomeFornecedor() << endl;
			cout << "ID " << idFornecedor << " - Endereço: " << vetFornecedor[i].getEnderecoFornecedor() << endl;
			i = 0;
			return x;
		}
	}
	return y;
}
