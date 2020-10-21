#include <string>
#include "Engenheiro.hpp"

namespace Funcionario{
  Engenheiro::Engenheiro(std::string nome,double salarioHora,int projetos){
    this-> nome = nome;
    this->salarioHora = salarioHora;
    this->projetos = projetos;
  }
}
