ultimo([X], X).
ultimo([_|Y], Z):- ultimo(Y, Z).
