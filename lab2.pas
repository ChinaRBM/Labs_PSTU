var x,a,i: integer;
begin
  x:=random(1,100);
  writeln(x);
  writeln('Отгадайте число за 6 раз');
  writeln('Введите число');
  for i:=1 to 6 do begin
  readln(a);
  if x=a then begin  
  writeln('Угадал');
  break;
  end;
    if a>x then writeln('Меньше')
    else writeln('Больше')
  end;
  if (i=6)and(a<>x) then writeln('Не угадал');
end.
