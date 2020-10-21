#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <iostream>

void Impressao_Engenheiro (Funcionario::Engenheiro perfil, double horario){
  std::cout << "Nome: " << perfil.nome << std::endl;
  std::cout << "Salario Mes: " << perfil.pagamentoMes(horario) << std::endl;
  std::cout << "Projetos: " << perfil.projetos << std::endl;
  std::cout << std::endl; 
}

void Impressao_Vendedor (Funcionario::Vendedor perfil, double horario){
  std::cout << "Nome: " << perfil.nome << std::endl;
  std::cout << "Salario Mes: " << perfil.pagamentoMes(horario) << std::endl;  
  std::cout << "Quota vendas: " << perfil.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}

int main() {

  Funcionario::Engenheiro eng1("Joao Snow",35,3);
  Impressao_Engenheiro(eng1, 9.5);
 
  Funcionario::Engenheiro eng2("Daniela Targaryen",30,1);
  Impressao_Engenheiro(eng2, 8);
  
  Funcionario::Engenheiro eng3("Bruno Stark",30,2);
  Impressao_Engenheiro(eng3, 8);
  
  Funcionario::Vendedor vend1("Tonho Lannister",20,5000);
  Impressao_Vendedor(vend1, 6);
  
  Funcionario::Vendedor vend2("Jose Mormont",25,3000);
  Impressao_Vendedor(vend2, 8);
	
  Funcionario::Vendedor vend3("Sonia Stark",30,4000);
  Impressao_Vendedor(vend3, 8);

  return 0;	
}
