#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"
#include <iostream>
#include <string>

namespace Funcionario {
  class Engenheiro : public Empregado {
    public:
      std::string nome;  
	    int projetos;
      Engenheiro(std::string nome,double salarioHora,int projetos);//construtor
  };
}
#endif
