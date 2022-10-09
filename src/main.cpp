#include <iostream>
#include <string>
#include "estoque.hpp"
using namespace std;

int main(){

	setlocale(LC_ALL, "portuguese");
		
	string descricaoProduto;
	int idProduto;
	int quantidadeProduto;
	int num = 0;
	
	Fornecedor f;
	Produto p;
	Estoque e;
	
	e.menu();
	
	while(num != 4)
	{	
		cout << "Opção: ";
		cin >> num;
		cin.ignore();
		
		if(num == 1)
		{
			cout << endl << "	CADASTRO DE PRODUTO" << endl << endl;
			cout << "ID Produto: ";
			cin >> idProduto;
			
			if(idProduto == 0)
			{
				cout << "ID Produto tem que ser diferente de zero (0)." << endl;
				cout << "Insira novamente, ID Produto: ";
				cin >> idProduto;
			}
			
			if(idProduto == p.getIDProduto())
			{
				cout << "ID Produto já cadastrado." << endl;
				cout << "Insira novamente, ID Produto: ";
				cin >> idProduto;
			}
			
			cin.ignore();			
			p.setIDProduto(idProduto);
	
			cout << "Quantidade do produto: ";
			cin >> quantidadeProduto;
			cin.ignore();
			p.setQuantidadeProduto(quantidadeProduto);
			
			cout << "Descrição do produto: ";
			getline(cin, descricaoProduto);
			p.setDescricaoProduto(descricaoProduto);
			
			e.setProduto(p);
			
			cout << endl << "Produto salvo!" << endl;
			cout << "---------------------------------------------------------------------------" << endl << endl;			
		}
		
		else if(num == 2)
		{
			e.getImprimirProdutoMenos10();
			cout << "---------------------------------------------------------------------------" << endl << endl;
		}
		
		else if(num == 3)
		{
			e.imprimirLista();
			cout << "---------------------------------------------------------------------------" << endl << endl;
		}
		
		else if(num == 4)
		{
			cout << endl << "Finalizando programa..." << endl;
		}
		
		else
		{
			cout << endl << "Opção inválida." << endl;
			cout << "-----------------------" << endl << endl;
		}
		
	}	

}
