exibe([]):- nl.
exibe([X|Y]):- write(X), nl, exibe(Y).

membro(X, [X|_]).
membro(X,[_|Y]):- membro(X,Y).

anexa([], B, B).
anexa([X|A], B, [X|C]):- anexa(A,B,C).

consecutivos(X,Y,[X,Y|_]).
consecutivos(X,Y,[_|Calda]):- consecutivos(X,Y,Calda).
