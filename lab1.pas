
var a,b,c,x,s1,s2,s3,y: integer;
begin
  writeln('Введите трёхзначное число');
  readln(x);
  if (x<100) or (x>999) then writeln('Неправильное число')
  else begin
  a:=(x div 100);
  b:=((x div 10)-10*a);
  c:=(x mod 10);
  end;
  if (a=b)or(b=c) then writeln('Скучно получается')
    else begin
 writeln(a,b,c);
 writeln(a,c,b);
 writeln(b,c,a);
 writeln(b,a,c);
 writeln(c,a,b);
 writeln(c,b,a);
 y:=a+b+c;     
 s1:=max(a,max(b,c));
 s3:=min(a,min(b,c));
 s2:=y-s1-s3;
 writeln('Наибольшее из них:',s1,s2,s3);
      end;
      end.
      
    