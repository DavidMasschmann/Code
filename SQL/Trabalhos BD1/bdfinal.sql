/*
Fornecedores (CodFornecedor, Nome)
Pedidos (CodPedido, DataPedido, CodFornecedor)
Produtos (CodProduto, ValorUnitario)
Produtos_Pedidos (CodProduto, CodPedido)
	CodPedido references Produtos (CodProduto)
	CodPedido references Pedidos (CodPedido)
Pessoas (CodPessoa, Nome)
Funcionarios (ValorSalario, CodPessoa)
	CodPessoa references Pessoas (CodPessoa)
Carrinhos (CodCarrinho) 
Clientes (Status, CodPessoa)
    CodPessoa references Pessoas (CodPessoa)  
Compras (CodCompra, DataCompra, ValorTotal, CodCarrinho, CodCliente)
	CodCarrinho references Carrinhos (CodCarrinho)	
	CodCliente references Clientes (CodPessoa)
Produtos_Carrinhos (CodProduto, CodCarrinho)
	CodProduto references Produtos (CodProduto)
	CodCarrinho references Carrinhos (CodCarrinho)
*/

/* Criação das tabelas */
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
    FOREIGN KEY (CodFornecedor)
        REFERENCES Fornecedores (CodFornecedor)
);
CREATE TABLE Produtos
(
    CodProduto INT NOT NULL,
    ValorUnitario DECIMAL (10,3) NOT NULL,
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
    ValorSalario DECIMAL(10,3) NOT NULL,
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
    StatusC VARCHAR(50) NOT NULL,
    CodPessoa INT NOT NULL,
    CONSTRAINT PrimaryKey_Clientes
    PRIMARY KEY (CodPessoa),
    CONSTRAINT ForeignKey_Clientes
    FOREIGN KEY (CodPessoa)
        REFERENCES Pessoas (CodPessoa)
);
CREATE TABLE Compras
(
    CodCompra INT NOT NULL,
    DataCompra DATE NOT NULL,
    ValorTotal DECIMAL(10,3) NOT NULL,
    CodCarrinho INT NOT NULL,
    CodCliente INT NOT NULL,
    CONSTRAINT PrimaryKey_Compras
    PRIMARY KEY (CodCompra),
    CONSTRAINT ForeignKey_Compras
    FOREIGN KEY (CodCarrinho)
        REFERENCES Carrinhos (CodCarrinho),
    ON UPDATE CASCADE,
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

/* Incluir dois campos em duas tabelas.*/
ALTER TABLE Pessoas
ADD Endereco VARCHAR(50) NOT NULL DEFAULT 0
ADD Telefone INT NOT NULL DEFAULT 0;

ALTER TABLE Produtos
ADD Nome VARCHAR(50) NOT NULL DEFAULT 0
ADD DataCadastro DATE NOT NULL DEFAULT 0;

/* Alterar o nome de dois campos.*/
ALTER TABLE Compras
RENAME COLUMN DataCompra TO DataC;

ALTER TABLE Pedidos
RENAME COLUMN DataPedido TO DataP;

/* Alterar o tipo de dado de dois campos.*/
ALTER TABLE Pedidos
ALTER COLUMN DataP DATETIME NOT NULL;

ALTER TABLE Compras
ALTER COLUMN DataC DATETIME NOT NULL;

/* Alterar o relacionamento de duas tabelas. Explicar o porquê.*/
ALTER TABLE Funcionarios
DROP CONSTRAINT ForeignKey_Funcionarios;

ALTER TABLE Funcionarios
ADD CONSTRAINT ForeignKey_Funcionarios
FOREIGN KEY (CodPessoa)
    REFERENCES Pessoas (CodPessoa)
ON DELETE RESTRICT;

ALTER TABLE Compras
DROP CONSTRAINT ForeignKey_Compras;

ALTER TABLE Compras
ADD CONSTRAINT ForeignKey_Compras
FOREIGN KEY (CodPessoa)
    REFERENCES Pessoas (CodPessoa)
ON DELETE CASCADE;

/* Popular todas as tabelas considerando as relações.*/
INSERT INTO Fornecedores (CodFornecedor, Nome)
VALUES (01, 'Joao');
INSERT INTO Fornecedores (CodFornecedor, Nome)
VALUES (02, 'Vanessa');
INSERT INTO Fornecedores (CodFornecedor, Nome)
VALUES (03, 'Larissa');

INSERT INTO Pedidos (CodPedido, DataP, CodFornecedor)
VALUES (01, '2019/05/13',01);
INSERT INTO Pedidos (CodPedido, DataP, CodFornecedor)
VALUES (02, '2019/05/17', 02);
INSERT INTO Pedidos (CodPedido, DataP, CodFornecedor)
VALUES (03, '2019/06/01', 02);

INSERT INTO Produtos (CodProduto, ValorUnitario, Nome, DataCadastro)
VALUES (01, 13.50, 'Roteador', '2019/06/02');
INSERT INTO Produtos (CodProduto, ValorUnitario, Nome, DataCadastro)
VALUES (02, 2.700, 'Smart TV', '2019/05/30');
INSERT INTO Produtos (CodProduto, ValorUnitario, Nome, DataCadastro)
VALUES (03, 85.00, 'Radio', '2019/05/31');

INSERT INTO Produtos_Pedidos (CodProduto, CodPedido)
VALUES (01, 03);
INSERT INTO Produtos_Pedidos (CodProduto, CodPedido)
VALUES (02, 01);
INSERT INTO Produtos_Pedidos (CodProduto, CodPedido)
VALUES (03, 01);

INSERT INTO Pessoas (CodPessoa, Nome, Endereco, Telefone)
VALUES (01, 'Julia', 'Rua Eureka', 5551987762334);
INSERT INTO Pessoas (CodPessoa, Nome, Endereco, Telefone)
VALUES (02, 'Pedro', 'Rua Nascente', 5551989875665);
INSERT INTO Pessoas (CodPessoa, Nome, Endereco, Telefone)
VALUES (03, 'Rafael', 'Rua Galfino', 5551997566543);

INSERT INTO Funcionarios (ValorSalario, CodPessoa)
VALUES (1.500, 01);
INSERT INTO Funcionarios (ValorSalario, CodPessoa)
VALUES (2.350, 02);
INSERT INTO Funcionarios (ValorSalario, CodPessoa)
VALUES (3.000, 03);

INSERT INTO Carrinhos (CodCarrinho)
VALUES (01);
INSERT INTO Carrinhos (CodCarrinho)
VALUES (02);
INSERT INTO Carrinhos (CodCarrinho)
VALUES (03);

INSERT INTO Clientes (StatusC, CodPessoa)
VALUES ('Bom cliente', 01);
INSERT INTO Clientes (StatusC, CodPessoa)
VALUES ('Paga atrasado', 02);
INSERT INTO Clientes (StatusC, CodPessoa)
VALUES ('Cliente aceitavel', 03);

INSERT INTO Compras (CodCompra, DataC, ValorTotal, CodCarrinho, CodCliente)
VALUES (01, '2019/05/14', 200.00, 02, 01);
INSERT INTO Compras (CodCompra, DataC, ValorTotal, CodCarrinho, CodCliente)
VALUES (02, '2019/05/19', 540.00, 01, 02);
INSERT INTO Compras (CodCompra, DataC, ValorTotal, CodCarrinho, CodCliente)
VALUES (03, '2019/05/22', 600.00, 03, 03);

INSERT INTO Produtos_Carrinhos (CodProduto, CodCarrinho)
VALUES (01, 03);
INSERT INTO Produtos_Carrinhos (CodProduto, CodCarrinho)
VALUES (03, 02);
INSERT INTO Produtos_Carrinhos (CodProduto, CodCarrinho)
VALUES (02, 01);

/* Fazer 5 updates*/
UPDATE Pessoas
SET Telefone = 5551998034554
WHERE CodPessoa = 01;

UPDATE Compras
SET DataC = '2019/04/29'
WHERE CodCompra = 02;

UPDATE Pessoas
SET Endereco = 'Rua Laurindo'
WHERE CodPessoa = 01;

UPDATE Funcionarios
SET ValorSalario = 3.550
WHERE CodPessoa = 01;

UPDATE Fornecedores
SET Nome = 'Shirley'
WHERE CodFornecedor = 02;

/*Fazer 5 deletes*/
DELETE FROM Fornecedores
WHERE CodFornecedor = 01;

DELETE FROM Pedidos
WHERE CodFornecedor = 01;

DELETE FROM Produtos
WHERE ValorUnitario >= 50 AND ValorUnitario <= 100;

DELETE FROM Pessoas
WHERE Nome = 'Joao';

DELETE FROM Funcionarios
WHERE CodFornecedor < 01;

/* Criar 10 consultas em cima modelagem*/
SELECT CodPedido, DataP
FROM Pedidos
WHERE CodPedido >= 2 AND CodPedido <= 3;

SELECT CodPedido, DataP
FROM Pedidos
WHERE DataP >= '2019/05/01' AND DataP <= '2019/05/31';

SELECT *
FROM Produtos
WHERE ValorUnitario < 50;

SELECT Nome, CodPessoa
FROM Pessoas
WHERE CodPessoa >=02 AND CodPessoa <= 03;

SELECT CodCompra, ValorTotal
FROM Compras
WHERE ValorTotal >= 500;

SELECT CodPedido, CodFornecedor
FROM Pedidos
WHERE CodFornecedor = 02;

SELECT Nome, CodFornecedor
FROM Fornecedores
WHERE CodFornecedor >1;

SELECT DataC, CodCompra
FROM Compras
WHERE DataC >= '2019/05/01';

SELECT StatusC, CodPessoa
FROM Clientes
WHERE CodPessoa = 02;

SELECT *
FROM Pessoas
WHERE Endereco = 'Rua Nascente';