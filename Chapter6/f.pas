var
    s: String;

function space_remover(s: String): String;
    var 
        res: String;
        i: Integer;
    Begin
        res := '';
        for i:= 1 to length(s) do
            if not((s[i] = ' ') or (s[i] = '_')) then
                res := res + s[i];
        space_remover := res;
    End;

Begin
    readln(s);
    writeln(space_remover(s));
End.
