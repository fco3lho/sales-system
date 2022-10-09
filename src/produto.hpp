#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <iostream>
#include <string>
#include "fornecedor.hpp"

using namespace std;

class Produto
{
	private:
		string descricaoProduto;
		int idProduto;
		int quantidadeProduto;
		int numFornecedor;
		Fornecedor vetFornecedor[10];
		
	public:
		Produto();
		
		void setDescricaoProduto(string descricaoProduto);
		string getDescricaoProduto();
		
		void setIDProduto(int idProduto);
		int getIDProduto();
		
		void setQuantidadeProduto(int quantidadeProduto);
		int getQuantidadeProduto();
		
		void setFornecedor(Fornecedor f);
		Fornecedor getFornecedor(string idFornecedor);		
};
#endif
