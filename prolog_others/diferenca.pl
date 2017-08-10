diferenca([],_) :- write("").
diferenca([H|S],[R|T]) :- string_to_atom(H,A1),string_to_atom(R,A2),
    atom_number(A1,N1),atom_number(A2,N2),N is N1 - N2,
    write(N),nl,diferenca(S,T).

main :-
    read_line_to_codes(user_input,A1),
    string_to_atom(S1,A1),
    split_string(S1," ","",L1),
    read_line_to_codes(user_input,A2),
    string_to_atom(S2,A2),
    split_string(S2," ","",L2),
    diferenca(L1,L2).
