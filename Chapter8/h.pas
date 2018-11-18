var
    key: Array[0..9] of String = (
        'nol',
        'satu',
        'dua',
        'tiga',
        'empat',
        'lima',
        'enam',
        'tujuh',
        'delapan',
        'sembilan'
    );
    n: Integer;

Begin
    readln(n);
    writeln(key[n]);
End.

