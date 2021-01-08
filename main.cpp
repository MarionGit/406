#include <iostream>
#include <fstream>
#include<unordered_set>

///N'arrivant pas à télécharger la liste j'ai créer un fichier "words.txt" avec trois mots: bonjour, aurevoir, revoir

int main()
{
    std::fstream dictionnaire;
    std::string line, mot;
    std::unordered_set<std::string> table;
    
    ///afficher mots
    dictionnaire.open("words.txt");
    if (dictionnaire.is_open())
    {
        while (getline(dictionnaire,line))
        {
          std::cout<<line<<std::endl;
          table.insert(line);
        }

        dictionnaire.close();
    }
    else{
        std::cout<<"dico non trouve"<<std::endl;
        break;
    }
    std::cout<<"saisir mot"<<std::endl;
    std::cin>>mot;
    
    ///Trouve ou pas
    if (table.find (mot)==table.end())
    {
        std::cout<<"mot pas trouve"<<std::endl;
    }
    else{
        std::cout<<"mot trouve"<<std::endl;
    }
    return 0;
}
