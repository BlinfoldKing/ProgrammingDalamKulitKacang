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

function reverse(s: String): String;
    var 
        res: String;
        i: Integer;
    Begin
        res := '';
        for i:= length(s) downto 1 do
            res := res + s[i];
        reverse := res;
    End;

function is_palindrome(s: String): Boolean;
    Begin
        is_palindrome := reverse(s) = s;
    End;




Begin
    readln(s);
    writeln(is_palindrome(space_remover(s)));
End.
