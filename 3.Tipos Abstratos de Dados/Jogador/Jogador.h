#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED

class Jogador
{
  private:
    int pontuacao;
    int melhorClassificacao;
    int totalTitulos;
    
  public:
    Jogador(int p, int m, int t);
    ~Jogador();
    void setPontuacao(int p);
    void setMelhorClassificacao(int m);
    void setTotalTitulos(int n);
    void posicaoRanking(int ranking[], int n, int *pos);
};


#endif // JOGADOR_H_INCLUDED
