var
    i, j, n: Integer;

Begin
    readln(n);

    for i := 1 to n do begin
        for j := 1 to i do begin
            write('*');
        end;
        writeln;
    end;

End.
