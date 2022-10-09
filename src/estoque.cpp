#include <iostream>
#include <string>
#include "estoque.hpp"
using namespace std;

Estoque::Estoque()
{
	enderecoGalpao = "";
	for(int i = 0; i < 100; i++)
	{
		produtoEstoque[i].setIDProduto(0);
		produtoEstoque[i].setDescricaoProduto("0");
		numProduto = 0;
	}
}


void Estoque::setEnderecoGalpao(string enderecoGalpao)
{
	this->enderecoGalpao = enderecoGalpao;
}

string Estoque::getEnderecoGalpao()
{
	return this->enderecoGalpao;
}

void Estoque::setNumProduto(int numProduto)
{
	this->numProduto = numProduto;
}

int Estoque::getNumProduto()
{
	return this->numProduto;
}

//
//
//

void Estoque::setProduto(Produto p)
{
	if(numProduto < 100)
	{
		produtoEstoque[numProduto] = p;
		numProduto = numProduto + 1;
		setNumProduto(numProduto);
		
		if(numProduto == 100)
		{
			cout << "Máximo de produtos atingidos." << endl;
		}
	}
}


Produto Estoque::getProduto(int idProduto)
{
	Produto x;
	Produto y;	
	y.setIDProduto(0);
	
	for(int i = 0; i < 100; i++)
	{
		x = produtoEstoque[i];
		
		if(idProduto == produtoEstoque[i].getIDProduto())
		{
			cout << endl << "Produto ID: " << produtoEstoque[i].getIDProduto() << endl;
			cout << "Descrição do produto: " << produtoEstoque[i].getDescricaoProduto() << endl;
			cout << "Quantidade do produto: " << produtoEstoque[i].getQuantidadeProduto() << endl;
			return x;
		}
	}
	return y;
}

//
//
//

Produto Estoque::getImprimirProdutoMenos10()
{
	Produto y;
	y.setIDProduto(0);
	int z = 0;
	
	cout << endl << "	PRODUTO COM MENOS DO QUE 10 ITENS NO ESTOQUE" << endl << endl;
	
	for(int i = 0; i < 100; i++)
	{
		if(produtoEstoque[i].getQuantidadeProduto() < 10 && produtoEstoque[i].getIDProduto() != 0)
		{
			cout << "Produto ID: " << produtoEstoque[i].getIDProduto() << endl;
			cout << "Descrição do produto: " << produtoEstoque[i].getDescricaoProduto() << endl;
			cout << "Quantidade do produto: " << produtoEstoque[i].getQuantidadeProduto() << endl;
			z = z + 1;
		}
	}
	
	if(z == 0)
	{
		cout << "Não há nenhum produto com menos do que 10 itens no estoque." << endl;
	}
	
	return y;
}


Produto Estoque::imprimirLista()
{
	Produto y;
	y.setIDProduto(0);
	
	cout << endl << "	LISTA DE PRODUTOS NO ESTOQUE" << endl << endl;
	
	if(produtoEstoque[0].getIDProduto() == 0)
	{
		cout << "Não há produtos no estoque." << endl;
		return y;
	}
	
	for(int i = 0; i < 100; i++)
	{
		if(produtoEstoque[i].getIDProduto() != 0)
		{
			cout << endl << "Produto ID: " << produtoEstoque[i].getIDProduto() << endl;
			cout << "Descrição do produto: " << produtoEstoque[i].getDescricaoProduto() << endl;
			cout << "Quantidade do produto: " << produtoEstoque[i].getQuantidadeProduto() << endl;
		}
	}
	
	cout << endl;
	
	return y;
}


void Estoque::menu()
{
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "	MENU" << endl << endl;
	cout << "Para cadastrar um novo produto no estoque, digite 1." << endl;
	cout << "Para imprimir um produto com menos do que 10 itens no estoque, digite 2." << endl;
	cout << "Para imprimir a lista de produtos no estoque, digite 3." << endl;
	cout << "Para finalizar o programa, digite 4." << endl;
	cout << "-----------------------------------------------------------------------------" << endl << endl;
}
