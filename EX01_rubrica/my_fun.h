#ifndef MY_FUN_H_INCLUDED
#define MY_FUN_H_INCLUDED

struct s_book {
  int id;
  char titolo[20];
  char autore[20];
  int anno;
};

//libri inseriti
int libri_inseriti;

//stampa menu di riepilogo
void help();
//inserisce un record
void inserisce_record(struct s_book[], int*);
void stampa_record(struct s_book[], int);

#endif // MY_FUN_H_INCLUDED
