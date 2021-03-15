namespace Roteiro {

class Connection {
public:
  virtual void connect() = 0;
};

class ServicoQuarto {
public:
  virtual void verificarQuarto() = 0;
};

class ServicoReserva {
public:
  virtual void criaReserva() = 0;
};

class RelatorioReserva {
public:
  virtual void gerarRelatorio() = 0;
};

} // namespace Roteiro
