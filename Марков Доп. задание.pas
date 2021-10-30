var p: string;
    a,b,i,j,m: integer;
    begin
      readln(p);
      a:=0;
      b:=0;
      for i:=1 to length(p) do
      begin
      if (p[i]='a')or(p[i]='b') then
        else break;
      end;
        for j:=1 to length(p) do
        begin
          if p[j]='a' then a:=a+1
          else begin
          if p[j]='b' then b:=b+1;
          end;
          end;
        for m:=1 to a do
          write('a');
        for m:=1 to b do
          write('b');
    end.