// Modifie un étudiant
void modifierEtudiant(Etudiant *etudiants[], int nombre) {
    char matricule[15];
    printf("Matricule de l'etudiant a modifier: ");
    scanf("%s", matricule);
    
    for (int i = 0; i < nombre; i++) {
        if (strcmp(etudiants[i]->matricule, matricule) == 0) {
            printf("Que modifier? (1-Nom 2-Prenom 3-Date 4-Departement 5-Region 6-Filiere): ");
            int choix;
            scanf("%d", &choix);
            
            switch(choix) {
                case 1:
                    printf("Nouveau nom: ");
                    scanf("%s", etudiants[i]->nom);
                    break;
                case 2:
                    printf("Nouveau prenom: ");
                    scanf("%s", etudiants[i]->prenom);
                    break;
                case 3:
                    printf("Nouvelle date:\n");
                    do {
                        printf("  Jour (1-31): ");
                        scanf("%d", &etudiants[i]->jour);
                    } while (etudiants[i]->jour < 1 || etudiants[i]->jour > 31);
                    do {
                        printf("  Mois (1-12): ");
                        scanf("%d", &etudiants[i]->mois);
                    } while (etudiants[i]->mois < 1 || etudiants[i]->mois > 12);
                    do {
                        printf("  Annee (1900-2026): ");
                        scanf("%d", &etudiants[i]->annee);
                    } while (etudiants[i]->annee < 1900 || etudiants[i]->annee > 2026);
                    break;
                case 4:
                    printf("Nouveau departement: ");
                    scanf("%s", etudiants[i]->departement);
                    break;
                case 5:
                    printf("Nouvelle region: ");
                    scanf("%s", etudiants[i]->region);
                    break;
                case 6:
                    printf("Nouvelle filiere (1-5): ");
                    int f;
                    scanf("%d", &f);
                    if (f == 1) strcpy(etudiants[i]->filiere, "Reseau et Telecommunication");
                    else if (f == 2) strcpy(etudiants[i]->filiere, "Securite et Cryptographie");
                    else if (f == 3) strcpy(etudiants[i]->filiere, "Genie Logiciel");
                    else if (f == 4) strcpy(etudiants[i]->filiere, "Robotique et Systeme Embarque");
                    else if (f == 5) strcpy(etudiants[i]->filiere, "Data Science");
                    break;
                default:
                    printf("Choix invalide\n");
                    return;
            }
            printf("Modification reussie\n");
            return;
        }
    }
    printf("Etudiant non trouve\n");
}
