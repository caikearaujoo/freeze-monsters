quadrado():-
    repeat,
    nl,
    write('Digite um numero para calcular seu quadrado ou "pare" para encerrar.'),nl,
    read(X),
    (X = 'pare'->  !;
    X1 is X*X,
    write('O numero digitado ao quadrado é: '),
    write(X1), nl, fail).
