imprimeIntercalado([H],[R]) :- string_concat(" ",R,R2),string_concat(H,R2,B),write(B).
imprimeIntercalado([H|S],[R|T]) :- string_concat(" ", R,R2),string_concat(H,R2,B),write(B),nl,
    imprimeIntercalado(S,T).

main :-
    read_line_to_codes(user_input,A1),
    string_to_atom(S1,A1),
    split_string(S1," ","",L1),
    read_line_to_codes(user_input,A2),
    string_to_atom(S2,A2),
    split_string(S2," ","",L2),
    imprimeIntercalado(L1,L2).
