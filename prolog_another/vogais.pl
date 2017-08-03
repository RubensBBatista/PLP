isVogal(A,S) :-
    member(A,["a","e","i","o","u"]) -> S = A

getElement(I,[H|T],C) :- I == 0 -> C = isVogal(H,S); Z is I - 1, getElement(Z,T,C).



main :-
  read_line_to_codes(user_input, A2),
  string_to_atom(A2,A1),
  atom_number(A1,A),
  
