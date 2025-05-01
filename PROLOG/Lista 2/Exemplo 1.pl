%imc(nome, peso, altura).

imc(joao, 105, 1.78).
imc(jose, 82, 1.85).
imc(antonio, 98, 1.70).
imc(maria, 62, 1.69).

%?- imc(joao, P, A), I is P/A^2.
    imc(joao, _, A1), imc(jose, _, A2), A1>A2.COMPARA ALTURA
    imc(jose, P1, _), imc(antonio, P2, _), P1=:=P2. COMPARA PESO
    imc(maria,_,A1), imc(antonio, _, A2), A1=/=A2. COMPARA altura
    imc(maria,P1,_), imc(joao,P2,_), P1<P2. COMPARA PESO
