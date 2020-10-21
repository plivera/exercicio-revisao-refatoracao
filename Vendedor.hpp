#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"
#include <iostream>
#include <string>

namespace Funcionario {
  class Vendedor : public Empregado {
    private:
      static constexpr int TOTAL_MESES = 12;//quantidade de meses no ano.
    public:
      std::string nome;  
	    int projetos;
      Vendedor(std::string nome,double salarioHora, double quotaMensalVendas);//construtor
      double quotaTotalAnual();
  };
}
#endif
