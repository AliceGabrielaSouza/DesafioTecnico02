#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    while(true){
        int escolha, resposta, dinheiro, musica;
        int conta_brinde = 0;
        int conta_brinde_musica = 0;
         cout << "Olá essa é a Cry Baby personagem criada pela cantora Melanie Martinez"<< endl;
         cout << "Digite 1 para saber mais sobre ela"<< endl;
         cout << "Digite 2 para saber mais sobre a entidades filantrópica que ela ajuda"<< endl;
         cout << "Digite 3 para saber mais sobre como ela ajuda essa entidades"<< endl;
         cin  >> escolha;
         
         switch(escolha){
            case 1:
            cout<<"Cry Baby foi criada no ep Dollhouse de 2016"<< endl;
            cout<<"Curiosidades: "<< endl;
            cout<<"O nome veio a partir do apelido que a cantora tinha na infância"<< endl;
            cout<<"A personagem debate causa importantes em todos os albúms"<< endl;
            cout<<"Nos albuns é possível ver desde do seu nascimento, sua vida, morte e reencarnação"<< endl;
            break;
            
            case 2:
            cout<<"A entidade filantrópica ajudada por ela é o Instituto Cactus"<< endl;
            cout<<"Uma entidade filantrópica e de direitos humanos, sem fins lucrativos, que atua de forma independente para ampliar o debate e os cuidados em prevenção de doenças e promoção de saúde mental no Brasil"<< endl;
            break;
            
            case 3:
            cout<<"Cry baby para ajudar a divulgação da entidade criou a musica Recess"<< endl;
            cout<<"em que a cantora debate sobre o assunto."<< endl;
            cout<<"Ela também criou uma campanha de incentivo que quem doasse pelo menos 100 reais, ou "<< endl;
            cout<<"escutasse a música pelo menos 50 vezes ou os dois, ganharia brindes"<< endl;
            cout<<"Você fez agumas dessas coisas? Se sim digite um número de 222 para cima para gerar a sua senha de retirada"<< endl; // 222 é o numero favorito da cantora
            cin >>resposta;
            for(int i=222; i<=resposta; i++){
            cout<<"QUE BOM SABER DISSO!!"<< endl;
            cout<<"Quantas reais vc doou? "<< endl;
            cin>>dinheiro;
            cout<<"Quantas vezes vc ouviu a música? "<< endl;
            cin>>musica;
            if(dinheiro>50){
                cout<<"Parabeéns!!!!!"<< endl;
                cout<<"Você ganha uma quantidade de brindes de acordo com a quantidade doada "<< endl;
                cout<<"Se vc doou de 50 a 100 reais ganha um brinde"<< endl;
                cout<<"Se vc doou de 100 a 200 reais ganha dois brindes" << endl;
                cout<<"Se vc doou de 300 a 400 reais ganha tres brinde" << endl;
                cout<<"Se vc doou acima de 500 reais ganha 6 brindes" << endl;
                do{
                    dinheiro -= 100;
                    conta_brinde++;
                  }while(dinheiro>100);
                cout<<"Você ganhou "<< conta_brinde << " brindes" <<endl;
                           }
               else if (dinheiro>50){
                cout<<"Parabeéns!!!!!"<< endl;
                cout<<"Você ganha uma quantidade de brindes de acordo com a quantidade de músicas ouvidas "<< endl;
                cout<<"Se vc ouviu de 50 a 100 vezes ganha um brinde"<< endl;
                cout<<"Se vc ouviu de 100 a 200 vezes ganha dois brindes" << endl;
                cout<<"Se vc ouviu de 300 a 400 vezes ganha tres brinde" << endl;
                cout<<"Se vc ouviu acima de 500 vezes ganha 6 brindes" << endl;
                do{
                    dinheiro -= 100;
                    conta_brinde_musica++;
                  }while(dinheiro>100);
                cout<<"Você ganhou "<< conta_brinde_musica << " brindes" <<endl;
                           }  
               int senha = i*2;
                cout<<"Sua senha para a retirada dos brindes é"<< senha << endl;
                resposta -=10000000;
            }      
            break;
                        }
    }
    
}