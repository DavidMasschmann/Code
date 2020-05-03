/*
Esquema usado para exemplos:

Fornecedor (Fcod, Fnome, Status, Cidcod#, fone)
Cidade (Ccod, Cnome, uf)
Peca (Pcod, Pnome, Cor, Peso, Ccod#)
Projeto (PRcod, Jnome, Ccod#)
Fornecimento (Fcod#, Pcod#, PRcod#, Quantidade)
*/

--1 Criar todas as tabelas do esquema
CREATE TABLE Cidades
(
    CodCid INTEGER NOT NULL,
    Nome VARCHAR(50) NOT NULL,
    UF CHAR(2) NOT NULL,
      CONSTRAINT PK_Cidades
    PRIMARY KEY (CodCid)
);

CREATE TABLE Medicos
(
    CodMed INTEGER NOT NULL,
    Nome VARCHAR(50) NOT NULL,
    Endereco VARCHAR(50) NOT NULL,
    Telefone INTEGER NOT NULL,
    CRM INTEGER NOT NULL,
    CPF VARCHAR(15) NOT NULL,
    CodCid INTEGER NOT NULL,
      CONSTRAINT PK_Medicos
    PRIMARY KEY (CodMed),
      CONSTRAINT FK_Medicos
    FOREIGN KEY (CodCid)
    REFERENCES Cidades (CodCid)
);

CREATE TABLE Pacientes
(
    CodPac INTEGER NOT NULL,
    Nome VARCHAR(50) NOT NULL,
    Endereco VARCHAR(50) NOT NULL,
    Telefone INTEGER NOT NULL,
    CodCid INTEGER NOT NULL,
      CONSTRAINT PK_Pacientes
    PRIMARY KEY (CodPac),
      CONSTRAINT FK_Pacientes
    FOREIGN KEY (CodCid)
    REFERENCES Cidade (CodCid)
);

CREATE TABLE Consultas
(
    CodConsulta INTEGER NOT NULL,
    CodMed INTEGER NOT NULL,
    CodPac INTEGER NOT NULL,
    DataConsulta DATE NOT NULL,
    HoraConsulta TIME NOT NULL,
      CONSTRAINT PK_Consultas
    PRIMARY KEY (CodConsulta),
      CONSTRAINT FK_Consultas
    FOREIGN KEY (CodMed)
    REFERENCES Medicos (CodMed),
      CONSTRAINT FK2_Consultas
    FOREIGN KEY (CodPac)
    REFERENCES Pacientes (CodPac)
);
CREATE TABLE Medicamentos
(

    CodMedicamento INTEGER NOT NULL,
    Nome VARCHAR(50) NOT NULL,
    Composicao VARCHAR(100) NOT NULL,
    Preco DECIMAL(2,2) NOT NULL,
      CONSTRAINT PK_Medicamentos
    PRIMARY KEY (CodMedicamento)
);
CREATE TABLE Prescrições
(
    CodConsulta INTEGER NOT NULL,
    CodMedicamento INTEGER NOT NULL,
    Posologia VARCHAR(100) NOT NULL,
      CONSTRAINT FK_Prescricao
    FOREIGN KEY (CodConsulta)
    REFERENCES Consultas (CodConsulta),
      CONSTRAINT FK2_Prescricao
    FOREIGN KEY (CodMedicamento)
    REFERENCES Medicamentos (CodMedicamento)
);

--2 Inserir 3 registros em cada tabela
INSERT INTO Cidades (CodCid, Nome, UF)
VALUES (02, 'Porto Alegre', 'RS');

INSERT INTO Medicos (CodMed, Nome, Endereco)
VALUES (05, 'Pedro', 'Rua X');

INSERT INTO Pacientes (CodPac, Nome, Telefone)
VALUES (25, 'Maria', 51995451234);

INSERT INTO Consultas (CodConsulta, DataConsulta, HoraConsulta)
VALUES (34, '2019/06/02', '16:30:00');

INSERT INTO Medicamentos (CodMedicamento, Nome, Preco)
VALUES (57, 'Paracetamol', '7.50');

INSERT INTO Prescricoes (Posologia, CodConsulta, CodMedicamento)
VALUES ('1 comprimido ao dia.', 44, 21);

--3 Atualizar o preço do medicamento de código 1 em 20%
UPDATE Medicamentos
SET Preco = Preco+((Preco*20)/100)
WHERE CodMedicamento = 1;

--4 Excluir a cidade cujo código é 3
DELETE FROM Cidades
WHERE CodCid = 3;

--5 Listar os nomes das cidades do estado RS
SELECT Nome
FROM Cidades
WHERE UF = 'RS';

--6 Listar todos os nomes de medicamentos e preço
SELECT Nome, Preco
FROM Medicamentos;

--7 Listar o nome e telefone dos médicos da cidade de ‘Torres’
SELECT Nome, Telefone
FROM Medicos, Cidades
WHERE CodCid = 'Torres' AND Medicos.CodCid=Cidades.CodCid;

--8 Listar todos os nomes dos medicamentos, juntamente com a posologia, prescritos na consulta de código 1
SELECT Nome, Posologia
FROM Medicamentos, Prescricoes
WHERE CodConsulta = 1 AND Medicamentos.CodMedicamento=Prescricoes.CodMedicamento;

--9 Listar o nome e telefone de todos os pacientes que moram na cidade de nome ‘Capão da Canoa’
SELECT Nome, Telefone
FROM Pacientes, Cidades
WHERE CodCid = 'Capão da Canoa' AND Pacientes.CodCid=Cidades.CodCid;

--10 Listar os nomes dos pacientes que tem consulta marcada
SELECT Nome
FROM Pacientes, Consultas
WHERE Pacientes.CodPac=Consultas.CodPac;

--11 Listar todos os nomes e telefones das consultas marcadas para o dia ’07/05/2015’
SELECT Nome, Telefone, DataConsulta
FROM Pacientes, Consultas
WHERE DataConsulta='2015/05/07' AND Pacientes.CodPac=Consultas.CodPac;

--12 Mostrar a média de preços dos medicamentos
SELECT avg(Preco) AS Media
FROM Medicamentos;

--13 Mostrar o número total de consultas cadastradas
SELECT sum(CodConsulta) AS Total
FROM Consultas;

--14 Listar o nome do medicamento mais caro
SELECT max(Preco) AS ValorMaior
FROM Medicamentos;

--15 Listar os nomes dos medicamentos que tem preço acima da média
SELECT Nome
FROM Medicamentos
WHERE Preco > avg(Preco);

--16 Listar todas as consultas com nome do médico, nome do paciente, data e hora
SELECT CodConsulta, Medicos.Nome, Pacientes.Nome, DataConsulta, HoraConsulta
FROM Consultas, Medicos, Pacientes;
