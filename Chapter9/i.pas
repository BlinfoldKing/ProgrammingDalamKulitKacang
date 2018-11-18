var
    n: Integer;


function get_fib(n: Integer): Integer;
    begin
        if (n <= 1) then
            get_fib := n
        else
            get_fib := get_fib(n - 1) + get_fib(n - 2);
    end;

Begin
    readln(n);
    writeln(get_fib(n));
End.
