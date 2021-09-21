#ifndef FILA_H
#define FILA_H 

template < class F = int, int TM = 10>
class Fila 
{
public:
  Fila();
  
  bool empurra(const F &);
  bool fila(F &);

  bool isEmpty() const { return cont == TM; }
  bool isFull() const { return pos == TM;}
private:
  F pPtr[TM];
  int pos;
  int cont = 0;
};

template < class F, int TM >
Fila<F,TM>::Fila( )
{
  pos = 0;
}

template < class F, int TM >
bool Fila<F,TM>::empurra(const F &el)
{
  if (!isFull())
  {
    pPtr[pos++] = el;
    return true;
  }
  return false;
}

template < class F , int TM >
bool Fila<F,TM>::fila(F &el)
{
  if (!isEmpty())
  {
    el = pPtr[cont++];
    return true;
  }
  return false;
}

#endif
