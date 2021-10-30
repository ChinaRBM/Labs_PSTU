var p: string;
    x,i: integer;   
    begin
       readln(p);
       x:=length(p);
       for i:=1 to x-2 do
       begin
         if (p[i]='c') then begin
           delete(p,i,1);
           writeln(p);
           x:=x-1;
           end;
       end;
       for i:=1 to length(p) do
       begin
         if (p[i]='b')and(p[i+1]='b')
         then begin
           delete(p,i,2);
           insert('ddd',p,i);
           writeln(p);
           break;
           end;
       end;
    end.