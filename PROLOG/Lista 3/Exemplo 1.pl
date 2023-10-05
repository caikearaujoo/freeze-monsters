progenitor(maria, josé). 
progenitor(joão, josé).
 progenitor(joão, ana). 
progenitor(josé, júlia). 
progenitor(josé, íris). 
progenitor(íris, jorge).

antepassado(X,Y):- progenitor(X,Y).

antepassado(X,Y):- progenitor(X,Z), antepassado(Z,Y).
