%pot(B, E, P).

pot(1, _, 1).

pot(_, 0, 1).

pot(0, _, 0).

pot(X,1,X).

pot(B, E, P):-  E>0,
    			E1 is E-1,
    			pot(B,E1,P1),
    			P is P1*B.
