var a,b,c,x: integer;
begin
  readln(x);
  if (x>999)or(x<100) then writeln('Неправильное число')
  else begin
  a:=(x div 100);
  b:=((x div 10)-10*a);
  c:=(x mod 10);
  end;
  if (a=b)and(b=c) then writeln('Скучно получается')
  else begin
    if (a=0) then
      writeln('Неправильное число')
    else begin
        if (a=0)and(b<>0)and(c<>0) then
          writeln('Числа, составленные из цифр x:',b,a,c,' ',b,c,a,' ',c,b,a,' ',c,a,b)
        else begin
         if (b=0)and(a<>0)and(c<>0) then
          writeln('Числа, составленные из цифр x:',a,b,c,' ',a,c,b,' ',c,b,a,' ',c,a,b)
          else begin
            if (c=0)and(b<>0)and(a<>0) then
          writeln('Числа, составленные из цифр x:',b,a,c,' ',b,c,a,' ',a,c,b,' ',a,b,c)
            else begin
              if (a=0)and(b=0)and(c<>0) then
          writeln('Числа, составленные из цифр x:',c,a,a)
              else begin
               if (a<>0)and(b=0)and(c=0) then
          writeln('Числа, составленные из цифр x:',a,b,b)
          else begin
            if (a=0)and(b<>0)and(c=0) then
          writeln('Числа, составленные из цифр x:',b,a,a)
            else begin
if (a=b)and(b<>c) then 
 writeln('Числа, составленные из цифр x:',a,a,c,' ',a,c,a,' ',c,a,a)
  else begin
    if (b=c)and(b<>a) then
     writeln('Числа, составленные из цифр x:',b,b,a,' ',b,a,b,' ',a,b,b) 
    else begin 
      if (a=c)and(a<>b) then
       writeln('Числа, составленные из цифр x:',a,a,b,' ',a,b,a,' ',b,a,a)
         else begin
          writeln('Числа, составленные из цифр x:',a,b,c,' ',a,c,b,' ',b,c,a,' ',b,a,c,' ',c,a,b,' ',c,b,a)
              end;
            end;
          end;
        end;
      end;
    end;
  end;
end;
if (a>b)and(b>=c)then
  writeln('Наибольшее число:',a,b,c)
  else begin
    if (b>a)and(a>=c)then
  writeln('Наибольшее число:',b,a,c)
    else begin
      if (c>a)and(a>=b)then
  writeln('Наибольшее число:',c,a,b)
  end;
end;
end;
end;
end;
end.