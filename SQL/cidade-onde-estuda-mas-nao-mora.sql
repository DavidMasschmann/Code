SELECT idaluno, a.nome, c.nome
FROM Aluno a, Cidade c
WHERE c.nome <> 'Torres';