/* --------------------------- 
Laboratoire : 02
Auteur(s) : Pierre Moinet
Date : 28.09.2026
But : Calcul du temps de trajet du robot
Remarque(s) : 
--------------------------- */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "Quelle distance le robot a t'il parcouru sur la route ? (en km)" << endl;
    float length_1;
    cin >> length_1;
    const int total_length = 10;
    const float dx = 3;
    float dy = (total_length - length_1);
    float length_2 = sqrt(dx * dx + dy * dy);
    const float speed_1 = 5;
    const float speed_2 = 2;

    float time_on_l1 = length_1 / speed_1;
    float time_on_l2 = length_2 / speed_2;
    float time_total = time_on_l1 + time_on_l2;


    cout << "Distance sur la route : " << length_1 << "km" << endl;
    cout << "Temps ecoule sur la route : " << time_on_l1 << "h" << endl;
    cout << "Distance Y restante : " << dy << "km" << endl;
    cout << "Distance X restante : " << dx << "km" << endl;
    cout << "Distance hypothenuse restante : " << length_2 << "km" << endl;
    cout << "Temps ecoule sur la terre : " << time_on_l2 << "h" << endl;
    cout << "Temps total de voyage du robot : " << time_total << "heure(s)" << endl;


    return EXIT_SUCCESS;
}
