#include "impl.cpp"
#include <memory>

int main() {
  std::unique_ptr<Roteiro::DatabaseConnection> connection =
      std::make_unique<Roteiro::MysqlConnection>();

  std::unique_ptr<Roteiro::ServicoQuarto> servicoQuarto =
      std::make_unique<Roteiro::ServicoQuartoImpl>(*connection);
  servicoQuarto->verificarQuarto();

  std::unique_ptr<Roteiro::ServicoReserva> servicoReserva =
      std::make_unique<Roteiro::ServicoReservaImpl>(*connection);
  servicoReserva->criaReserva();

  std::unique_ptr<Roteiro::RelatorioReserva> relatorioReserva =
      std::make_unique<Roteiro::RelatorioReservaImpl>(*connection);
  relatorioReserva->gerarRelatorio();

  return 0;
}
