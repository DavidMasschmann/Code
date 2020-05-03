/* 1-
  Categorias (codigo*, nome)
  Fornecedores (codigo* , nome)
  Produtos (codigo*, descricao, data_cadastro, valor_unitario, codigo_categoria)
    codigo_categoria references Categoria (codigo)
  Pedidos (codigo*, quantidade, valor_unitario, data, codigo_produtos, codigo_fornecedores)
    codigo_produtos references Produtos (codigo)
    codigo_fornecedores references Fornecedores (codigo)
*/
-- 2

CREATE TABLE Categorias
(
  ID INT NOT NULL,
  nome VARCHAR(50),
);

CREATE TABLE Fornecedores
(
  ID INT NOT NULL,
  nome VARCHAR(30),
);

CREATE TABLE Produtos
(
  ID INT NOT NULL,
  descricao VARCHAR(250),
  data_cadastro DATE NOT NULL,
  valor_unitario DECIMAL(5,2) NOT NULL,
  codigo_categoria INT NOT NULL,
    CONSTRAINT fk_categoria
  FOREIGN KEY (codigo_categoria) REFERENCES Categorias(ID),
);

CREATE TABLE Pedidos
(
  ID INT NOT NULL,
  quantidade INT NOT NULL,
  valor_unitario DECIMAL(5,2) NOT NULL,
  data DATE NOT NULL,
  codigo_produtos INT NOT NULL,
  codigo_fornecedores INT NOT NULL,
    CONSTRAINT fk_produtos
  FOREIGN KEY (codigo_produtos) REFERENCES Produtos(ID)
  ON DELETE RESTRICT,
    CONSTRAINT fk_fornecedores
  FOREIGN KEY (codigo_fornecedores) REFERENCES Fornecedores(ID)
  ON DELETE RESTRICT
);

--3
ALTER TABLE Fornecedores
    ADD COLUMN data_ultima_compra DATE NOT NULL,

--4
ALTER TABLE Pedidos
  ALTER COLUMN data RENAME TO data_pedido;

--5
ALTER TABLE Produtos
  DROP COLUMN data_cadastro;

--6
ALTER TABLE Produtos
  DROP CONSTRAINT fk_categoria;

ALTER TABLE Produtos
  ADD CONSTRAINT fk_categoria
  FOREIGN KEY (codigo_categoria) REFERENCES Categorias(ID)
  ON DELETE CASCADE
  ON UPDATE RESTRICT;

--7
ALTER TABLE Fornecedores
  ALTER COLUMN nome VARCHAR(50);

--8
DROP TABLE Fornecedores;
/*
  No meu esquema, a tabela Fornecedores não será apagada, pois a FK de Pedidos
  que referemcia Fornecedores tem a especificação "ON DELETE RESTRICT"
*/

--9
ALTER TABLE Pedidos
  ADD COLUMN numero_pedido VARCHAR(10) NOT NULL;
