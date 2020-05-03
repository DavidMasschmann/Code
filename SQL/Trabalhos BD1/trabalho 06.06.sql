CREATE TABLE Fornecedores
(
  CodFornecedor INT NOT NULL,
  Nome VARCHAR(50) NOT NULL,
  CONSTRAINT PrimaryKey_Fornecedores
    PRIMARY KEY (CodFornecedor)
);
CREATE TABLE Pedidos
(
  CodPedido INT NOT NULL,
  DataPedido DATE NOT NULL,
  CodFornecedor INT NOT NULL,
  CONSTRAINT PrimaryKey_Pedidos
    PRIMARY KEY (CodPedido),
  CONSTRAINT ForeignKey_Pedidos
    F     OREIGN KEY (CodFornecedor)
    REFERENCES Fornecedores (CodFornecedor)
);
CREATE TABLE Produtos
(
  CodProduto INT NOT NULL,
  ValorUnitario DECIMAL (3,3) NOT NULL,
  CONSTRAINT PrimaryKey_Produtos
    PRIMARY KEY (CodProduto)
);
CREATE TABLE Produtos_Pedidos
(
  CodProduto INT NOT NULL,
  CodPedido INT NOT NULL,
  CONSTRAINT ForeignKey_PP
    FOREIGN KEY (CodProduto)
    REFERENCES Produtos (CodProduto),
  CONSTRAINT ForeignKey2_PP
    FOREIGN KEY (CodPedido)
    REFERENCES Pedidos (CodPedido)
);
CREATE TABLE Pessoas
(
  CodPessoa INT NOT NULL,
  Nome VARCHAR(50) NOT NULL,
  CONSTRAINT PrimaryKey_Pessoas
    PRIMARY KEY (CodPessoa)
);
CREATE TABLE Funcionarios
(
  ValorSalario DECIMAL(3,3) NOT NULL,
  CodPessoa INT NOT NULL,
  CONSTRAINT ForeignKey_Funcionarios
    FOREIGN KEY (CodPessoa)
    REFERENCES Pessoas (CodPessoa)
);
CREATE TABLE Carrinhos
(
  CodCarrinho INT NOT NULL,
  CONSTRAINT PrimaryKey_Carrinhos
    PRIMARY KEY (CodCarrinho)
);
CREATE TABLE Clientes
(
  CodPessoa INT NOT NULL,
  CONSTRAINT PrimaryKey2_Clientes
  PRIMARY KEY (CodPessoa),
  CONSTRAINT ForeignKey2_Clientes
  FOREIGN KEY (CodPessoa)
  REFERENCES Pessoas (CodPessoa)
);
CREATE TABLE Compras
(
  CodCompra INT NOT NULL,
  DataCompra DATE NOT NULL,
  ValorTotal DECIMAL(3,3) NOT NULL,
  CodCarrinho INT NOT NULL,
  CodCliente INT NOT NULL,

  CONSTRAINT ForeignKey_Compras
    FOREIGN KEY (CodCarrinho)
    REFERENCES Carrinhos (CodCarrinho),
  CONSTRAINT ForeignKey2_Compras
    FOREIGN KEY (CodCliente)
    REFERENCES Clientes (CodPessoa)
);
CREATE TABLE Produtos_Carrinhos
(
  CodProduto INT NOT NULL,
  CodCarrinho INT NOT NULL,
  CONSTRAINT ForeignKey_PC
    FOREIGN KEY (CodProduto)
    REFERENCES Produtos (CodProduto),
  CONSTRAINT ForeignKey2_PC
    FOREIGN KEY (CodCarrinho)
    REFERENCES Carrinhos (CodCarrinho)
);
