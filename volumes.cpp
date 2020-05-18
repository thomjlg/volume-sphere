#include"volumes.h"

/*
R: Calcule le volume d'une sph�re de rayon r
E: 1 r�el : le rayon de la sph�re
S: 1 r�el : le volume de la sphere
*/
float Volume_sphere(float r){
	//lexique local
	float vol;
	const float PI = 3.14159265;

	//algo local
	//debut
	vol = 4.0 / 3 * PI*r*r*r;
	return vol;
}


