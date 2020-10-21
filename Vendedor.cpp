#include <string>
#include "Vendedor.hpp"

namespace Funcionario{ 

  Vendedor::Vendedor(std::string nome,double salarioHora, double quotaMensalVendas){
    this->nome = nome;
    this->salarioHora = salarioHora;
    this->quotaMensalVendas = quotaMensalVendas;
  }
	double Vendedor::quotaTotalAnual() {
	  return quotaMensalVendas * TOTAL_MESES;
  }
}
