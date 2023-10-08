%soma dos primeiros n-valores inteiros:

soma(1,1).

soma(X,Y):- X>1,
    		X1 is X-1,
    		soma(X1, Y1),
    		Y is Y1+X.
