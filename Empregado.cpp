#include <string>
#include "Empregado.hpp"

namespace Funcionario {
  double Empregado::pagamentoMes (double horasTrabalhadas) {
    double tempo = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORARIO_TRABALHO) {
        double x = horasTrabalhadas - HORARIO_TRABALHO;
        tempo += x / 2;
      }
	  return tempo * salarioHora;
  }
}
