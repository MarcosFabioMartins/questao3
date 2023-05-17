//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UnitColors.h"

#include <System.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent *Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
   uint32_t cor_inicial = 0x00001A; // Cor inicial: Azul escuro
   uint32_t cor_final = 0xFF001A;   // Cor final: Vermelho escuro
   int passos = 3;                  // Número de passos para a transição

   TransitionColors(cor_inicial, cor_final, passos);
}

void __fastcall TForm1::TransitionColors(uint32_t cor_inicial, uint32_t cor_final, int passos)
{
   int red_inicial = (cor_inicial >> 16) & 0xFF; // Extrai o canal vermelho da cor inicial
   int red_final = (cor_final >> 16) & 0xFF;     // Extrai o canal vermelho da cor final

   int green_inicial = (cor_inicial >> 8) & 0xFF; // Extrai o canal verde da cor inicial
   int green_final = (cor_final >> 8) & 0xFF;     // Extrai o canal verde da cor final

   int blue_inicial = cor_inicial & 0xFF; // Extrai o canal azul da cor inicial
   int blue_final = cor_final & 0xFF;     // Extrai o canal azul da cor final

   for (int i = 0; i <= passos; i++)
   {
      int red_atual = red_inicial + ((red_final - red_inicial) * i / passos); // Calcula o valor atual do canal vermelho
      int green_atual =
          green_inicial + ((green_final - green_inicial) * i / passos); // Calcula o valor atual do canal verde
      int blue_atual = blue_inicial + ((blue_final - blue_inicial) * i / passos); // Calcula o valor atual do canal azul

      uint32_t cor_atual =
          (red_atual << 16) | (green_atual << 8) | blue_atual; // Combina os canais vermelho, verde e azul

      char cor_string[10];
      sprintf(cor_string, "0x%.6X", cor_atual); // Converte a cor atual para uma string formatada

      Memo1->Lines->Add(cor_string); // Adiciona a string da cor atual ao Memo1

      Sleep(1000); // Aguarda um segundo para visualizar a transição (necessário incluir a biblioteca <System.hpp>)

      Application->ProcessMessages(); // Processa as mensagens do aplicativo para evitar que ele fique sem resposta
   }
}

//---------------------------------------------------------------------------

