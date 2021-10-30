var p: string;
    i: integer;
    begin
      readln(p);
      for i:=1 to length(p) do begin
        if (p[i]='a')or(p[i]='b') then
        begin
      if (p[length(p)]='a')or(p[length(p)]='b') then begin
        insert('a',p,length(p)+1);
      writeln(p);
      break;
      end;
      end;
    end;
    end.