/*
Veiculo (codveiculo, marca, modelo, placa, ano, km, codprop)
    Codprop referencia Proprietário (codprop)

Proprietário (codProp, nome, endereço, telefone, codcid)
    Codcid referencia cidade(codcid)

Cidade(codcid, nome, UF)

Serviço(codserv, descrição, valorbase)

Manutenção(codveículo, codserv, valor, data)
    Codveiculo referencia Veiculo (codveiculo)
    Codserv referencia Serviço (codserv)
*/

/*
  2- Defina os comandos da linguagem SQL necessários para a criação das
  tabelas Manutenção e Serviço. Considere que a tabela cidade já foi criada anteriormente.
*/
  CREATE TABLE servico
  (
    codserv INT NOT NULL,
    descricao VARCHAR(200),
    valorbase DECIMAL(12,2) NOT NULL
      CONSTRAINT pk_servico
    PRIMARY KEY (codserv)
  );

  CREATE TABLE manutencao
  (
    codveiculo INT NOT NULL,
    codserv INT NOT NULL,
    valor VARCHAR(12,2) NOT NULL,
    data DATE NOT NULL,
      CONSTRAINT fk_veiculo
    FOREIGN KEY (codveiculo) REFERENCES veiculo (codveiculo),
      CONSTRAINT fk_servico
    FOREIGN KEY (codserv) REFERENCES servico (codserv)
  );

-- 3 Defina a sintaxe SQL para resolver as seguintes questões:

-- a) Listar o código do veículo, descrição do serviço e valor da manutenção mais cara (valor mais alto).
SELECT m.codveiculo, s.descricao, m.valor
FROM manutencao m, servico s
WHERE m.codserv = s.codserv AND m.valor = (SELECT MAX(valor) FROM manutencao WHERE codserv = m.codserv)

-- b) Atualizar o valor das manutenções concedendo desconto de 10 % para as manutenções realizadas no dia “02/07/2019.
UPDATE manutencao
SET valor = (valor-((valor/100)*10))
WHERE data = '2019-07-02';

-- c) Listar a placa do veículo juntamente com o seu proprietário para todos os automóveis do ano de 2019.
SELECT placa, proprietário
FROM veiculo
WHERE ano = 2019;

-- d) Mostrar a marca, modelo e quilometragem do veículo mais velho.
SELECT marca, modelo, km
FROM veiculo
WHERE ano = (SELECT MIN(ano) FROM veiculo);

-- e) Listar todos os nomes dos proprietários que  são da cidade cujo nome é “Porto Alegre”.
SELECT p.nome
FROM proprietário p, cidade c
WHERE p.codcid = c.codcid AND c.nome = 'Porto Alegre';

-- f) Listar todas as manutenções  (descrição do serviço e data) realizadas para o serviço de código(codserv) 20.
SELECT s.descricao, m.data
FROM manutenção m, servico s
WHERE m.codserv = 20 AND m.codserv = s.codserv;

-- g) Listar todos os veículos(placa, marca e modelo) de proprietários que moram em ”Torres.
SELECT placa, marca, modelo
FROM veiculo v, proprietário p, cidade c
WHERE v.codProp = p.codProp and p.codcid = c.codcid and c.nome = 'Torres';
