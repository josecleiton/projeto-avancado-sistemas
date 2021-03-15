#include "interfaces.hpp"
#include <iostream>

namespace Roteiro {
class MysqlConnection : public DatabaseConnection {
public:
  void connect() { std::cout << "Conectado ao banco MySQL" << '\n'; }
};

class ServicoQuartoImpl : public ServicoQuarto {
  DatabaseConnection &_connection;

public:
  ServicoQuartoImpl(DatabaseConnection &connection) : _connection(connection) {
    _connection.connect();
  }

  void verificarQuarto() {
    std::cout << "Lógica de negócio para o Serviço de Quarto" << '\n';
  }
};

class ServicoReservaImpl : public ServicoReserva {
  DatabaseConnection &_connection;

public:
  ServicoReservaImpl(DatabaseConnection &connection) : _connection(connection) {
    _connection.connect();
  }

  void criaReserva() {
    std::cout << "Lógica de negócio para Reserva do Quarto" << '\n';
  }
};

class RelatorioReservaImpl : public RelatorioReserva {
  DatabaseConnection &_connection;

public:
  RelatorioReservaImpl(DatabaseConnection &connection)
      : _connection(connection) {
    _connection.connect();
  }

  void gerarRelatorio() {
    std::cout << "Lógica de negócio para geração de Relatóio" << '\n';
  }
};

} // namespace Roteiro
