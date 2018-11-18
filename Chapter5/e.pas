var
    i, n: Integer;

Begin
    readln(n);

    for i := 1 to n do begin
        if (i mod 3 = 0) or (i mod 5 = 0) then begin
            if (i mod 3 = 0) then
                write('Fizz');
            if (i mod 5 = 0) then
                write('Buzz');
        end else 
            write(i);

        write(' ');
    end;

    writeln;
End.

