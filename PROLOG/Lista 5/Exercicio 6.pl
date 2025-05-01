retiraElemento(_, [], []).

retiraElemento(Elem, [Elem|Y], Resto) :- 
    retiraElemento(Elem, Y, Resto).

retiraElemento(Elem, [X|Y], [X|Resto]) :- 
    X \= Elem, 
    retiraElemento(Elem, Y, Resto).
