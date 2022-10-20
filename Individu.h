/**
 * @file Individu.h
 * @author Lopistéguy
 * @brief spécifie une classe individu en relation reciproque avec sa voiture
 * @version 0.6
 * @date 2022-10-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

class Individu
{
    // ATTRIBUTS
  public:
    string nom;         // Le nom de l'individu
    string prenom;      // Le prénom de l'individu
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
    // Constructeur
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H