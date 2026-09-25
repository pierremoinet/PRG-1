/* --------------------------- 
Laboratoire : 02
Auteur(s) : Pierre Moinet
Date : 25.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */

#include <iostream>
#include <math.h>
using namespace std;
int main() {

    const float length_1 = 6;
    const float dx = 3;
    float dy = 10 - length_1;
    float length_2 = sqrt(dx*dx + dy*dy);
    const float speed_1 = 5;
    const float speed_2 = 2;

    float time_on_l1 = length_1 / speed_1;
    float time_on_l2 = length_2 / speed_2;
    float time_total = time_on_l1 + time_on_l2;

    cout << "Temps total de voyage du robot : " << time_total << "heure(s)" << endl;


    return EXIT_SUCCESS;

}
