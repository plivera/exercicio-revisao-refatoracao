#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

namespace Funcionario {
  class Empregado {
    private:
      static constexpr int HORARIO_TRABALHO = 8;//quantidade padrao de horas trabalhadas.
    public:
      double salarioHora;  
      double quotaMensalVendas;
      double pagamentoMes(double horasTrabalhadas);
  };
}
#endif
