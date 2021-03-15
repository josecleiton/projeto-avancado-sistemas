#include "interfaces.hpp"
#include <iostream>

namespace Roteiro {

class MysqlConnection : public Connection {
public:
  void connect() { std::cout << "Conectado ao banco MySQL" << '\n'; }
};

class OracleConnection : public Connection {
public:
  void connect() { std::cout << "Conectado ao banco Oracle" << '\n'; }
};

class ServicoQuartoImpl : public ServicoQuarto {
  Connection &_connection;

public:
  ServicoQuartoImpl(Connection &connection) : _connection(connection) {
    _connection.connect();
  }

  void verificarQuarto() {
    std::cout << "Lógica de negócio para o Serviço de Quarto" << '\n';
  }
};

class ServicoReservaImpl : public ServicoReserva {
  Connection &_connection;

public:
  ServicoReservaImpl(Connection &connection) : _connection(connection) {
    _connection.connect();
  }

  void criaReserva() {
    std::cout << "Lógica de negócio para Reserva do Quarto" << '\n';
  }
};

class RelatorioReservaImpl : public RelatorioReserva {
  Connection &_connection;

public:
  RelatorioReservaImpl(Connection &connection) : _connection(connection) {
    _connection.connect();
  }

  void gerarRelatorio() {
    std::cout << "Lógica de negócio para geração de Relatóio" << '\n';
  }
};

} // namespace Roteiro
