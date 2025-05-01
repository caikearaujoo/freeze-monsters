maximo(X, [X]).
maximo(X, [Y|Z]) :- maximo(X1,Z), 
                (Y > X1 -> X is Y ; X is X1).
