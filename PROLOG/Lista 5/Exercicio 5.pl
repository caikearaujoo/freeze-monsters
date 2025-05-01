retornaElemento(0, Elem, [Elem|_]).

retornaElemento(N, Elem, [_|Y]):- 
    N1 is N-1,				
    retornaElemento(N1, Elem, Y).
