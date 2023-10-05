mdc(X,X,X).

mdc(X,Y,Z):- X<Y, Y1 is Y-X, mdc(X,Y1,Z).

mdc(X,Y,Z):- X>Y, mdc(Y,X,Z).
