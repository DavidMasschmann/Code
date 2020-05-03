SELECT a.nome, c.idcurso, c.nome, p.nome, m.data_entrada
FROM aluno a, curso c, professor p, matricula m
WHERE a.idaluno = m.idaluno AND m.data_entrada BETWEEN '2019-01-01' AND '2019-06-27';