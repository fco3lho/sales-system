#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP
#include <iostream>
#include "produto.hpp"
using namespace std;

class Estoque
{
	private:
		string enderecoGalpao;
		int numProduto;
		Produto produtoEstoque[100];
		
	public:
		Estoque();
		
		void setEnderecoGalpao(string enderecoGalpao);
		string getEnderecoGalpao();
		
		void setNumProduto(int numProduto);
		int getNumProduto();
		
		void setProduto(Produto p);
		Produto getProduto(int idProduto);
		
		Produto getImprimirProdutoMenos10();
		Produto imprimirLista();
		void menu();
		
};
#endif
