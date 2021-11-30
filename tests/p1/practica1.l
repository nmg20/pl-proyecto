%{
unsigned chars=0, words=0, caps=0, low=0,  nums=0, phrase=0;
int new_phrase=0;
%}
word [^ \.\t\n\r]
ws [ \t\n\r]
%%
[a-z]+  {low++; words++; chars+=yyleng; new_phrase=1;}
[A-Z]+  {caps++; words++; chars+=yyleng; new_phrase=1;}
[0-9]+  {nums++; words++; chars+=yyleng; new_phrase=1;}
{word}+ {words++; chars+=yyleng; new_phrase=1;}
{ws}    {}
"." {
    if (new_phrase){
      phrase++;
      chars++;
      new_phrase=0;
    }
    else
      chars++;
  }
%%
int main(){ 
  yylex();
  printf("%d frases\n%d palabras\n%d palabras en mayúsculas\n", phrase, words, caps);
  printf("%d palabras en minúsculas\n%d números\n%d caracteres en total\n", low, nums, chars);
  return 0;
}