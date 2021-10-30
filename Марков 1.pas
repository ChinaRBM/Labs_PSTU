var p: string;
    i: integer;
begin
  readln(p); 
  if length(p)=0 then
    writeln('Пустое слово');
    for i:=1 to length(p) do
    begin
      if (p[i]='a')or(p[i]='b') then begin
  delete(p,1,1);
  writeln(p);
  break
  end
  else
    break
end;
end.
