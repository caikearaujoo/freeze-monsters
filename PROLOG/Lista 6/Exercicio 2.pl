imprimeAte(0):- write('0 ').
imprimeAte(N):- 
    N1 is N-1,
    imprimeAte(N1),
    write(N), write(' ').
