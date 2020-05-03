-- David Masschmann
CREATE TABLE colaboradores
(
  n_matricula INTEGER NOT NULL,
  nome VARCHAR (40) NOT NULL,
  email VARCHAR (40) NOT NULL,
  senha VARCHAR (15) NOT NULL,
  PRIMARY KEY (n_matricula)
);

CREATE TABLE projetos
(
  idProj INTEGER NOT NULL,
  nomeProj VARCHAR (40) NOT NULL,
  descricao VARCHAR (250) NOT NULL,
  estimativa INTEGER NOT NULL,
  colaboradorNum INTEGER NOT NULL,
  PRIMARY KEY (idProj),
    CONSTRAINT coordena
  FOREIGN KEY (colaboradorNum ) REFERENCES
  colaboradores (n_matricula)
);

CREATE TABLE colaboram
(
  n_matricula INTEGER NOT NULL,
  idProj INTEGER NOT NULL,
    CONSTRAINT colaborador
  FOREIGN KEY (n_matricula) REFERENCES
  colaboradores (n_matricula),
    CONSTRAINT projeto
  FOREIGN KEY (idProj) REFERENCES
  projetos (idProj)
);

CREATE TABLE departamentos
(
  idDepart INTEGER NOT NULL,
  nomeDepart VARCHAR (40) NOT NULL,
  PRIMARY KEY (idDepart)
);

CREATE TABLE comentarios
(
  data DATE NOT NULL,
  hora TIME NOT NULL,
  n_matricula INTEGER NOT NULL,
  idProj INTEGER NOT NULL,
    CONSTRAINT nColab
  FOREIGN KEY (n_matricula) REFERENCES
  colaboradores (n_matricula),
    CONSTRAINT idPRO
  FOREIGN KEY (idProj) REFERENCES
  projetos (idProj)
);

CREATE TABLE social
(
  idSocial INTEGER NOT NULL,
  publicoB VARCHAR(50) NOT NULL,
  idProj INTEGER NOT NULL,
  PRIMARY KEY (idSocial),
    CONSTRAINT idPRO_social
  FOREIGN KEY (idProj) REFERENCES
  projetos (idProj)
);

CREATE TABLE melhoria
(
  idMelhoria INTEGER NOT NULL,
  resultEspe VARCHAR(250) NOT NULL,
  idProj INTEGER NOT NULL,
  idDep INTEGER NOT NULL,
  PRIMARY KEY (idMelhoria),
    CONSTRAINT idDep_melhoria
  FOREIGN KEY (idDep) REFERENCES
  departamentos (idDepart),
    CONSTRAINT idPRO_melhoria
  FOREIGN KEY (idProj) REFERENCES
  projetos (idProj)
);
