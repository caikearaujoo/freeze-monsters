{-
--(1)
['a', 'b', 'c'] --lista de string

('a', 'b', 'c')--tupla

[(False, '0'), (True, '1')]--lista de tupla

([False, True], ['0', '1'])--tupla de listas

[tail, init, reverse]--uso de palavras reservadas

--(2)
second xs = head (tail xs) --Retorna o segundo elemento de uma lista

pair x y = (x,y) --Forma um par ordenado com os numeros x y

palindrome xs = reverse xs == xs --Vai ser verdade se a string xs for igual a ela revertida
-}
--(3)

ultimo::[Int]->Int
ultimo(h:t) = ((h:t) !! (length(h:t)-1))

ultimo1::[Int]->Int
ultimo1[h] = h
ultimo1(h:t) = ultimo1 t

ultimo2::[Int]->Int
ultimo2(h:t) = head(reverse(h:t))

--(4)

type Aluno = (Integer, [Char], Double)
type Curso = [Aluno]

getNota:: Aluno->Double
getNota(_, _, nota) = nota

maiorNota::Curso->[Char]
maiorNota[] = ""
maiorNota[h] = getNome h
maiorNota(a1:a2:tail)
   |getNota a1 > getNota a2 = maiorNota(a1:t)
   |otherwise = maiorNota(a2:t)

insereAluno:: Aluno->Curso->Curso
insereAluno a [] = [a]
insereAluno a (h:t)
   |a == h = (h:t)
   |otherwise = h : insereAluno a t
