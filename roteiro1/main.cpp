#include "impl.cpp"
#include <memory>

int main() {
  auto connection = Roteiro::OracleConnection();

  auto servicoQuarto = Roteiro::ServicoQuartoImpl(connection);
  servicoQuarto.verificarQuarto();

  auto servicoReserva = Roteiro::ServicoReservaImpl(connection);
  servicoReserva.criaReserva();

  auto relatorioReserva = Roteiro::RelatorioReservaImpl(connection);
  relatorioReserva.gerarRelatorio();

  return 0;
}
