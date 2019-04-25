// Genere par SEDMA2.4 mercredi 24 avril 2019 AM 02:04:51
#include "es.h"

int main (void)
{
//Declaration des places et marquage initial
int p1G = 1;
int p2G = 0;
int p3G = 0;
int p4G = 0;
int p5G = 0;
int p6G = 0;
int p7G = 0;
int p8G = 0;
int p9G = 0;
int p10G = 0;
int p11G = 0;
int p12G = 0;
int p13G = 0;
int p14G = 0;
int p15G = 0;
int p16G = 0;
int p18G = 0;
int p19G = 0;
int p20G = 0;
int p21G = 0;
int p22G = 1;
int p23G = 0;
int BC4, BC5, CC1, CC2, CC3, CC4, DC1, EC4, EC5, EC6, EC7, P1, TC, TD;
int AigCD, AigB2T, AigDT, B5d, B4d, E4d, C2d, B5g, AigCT, B4g, C3d, C3g, D1d, E3d, AigB2D, C1d, E3g, C1g, C2g, E4g, E1g, D1g;
while (1) {
// lecture des entrées
BC4 = Entree(BC4);
BC5 = Entree(BC5);
CC1 = Entree(CC1);
CC2 = Entree(CC2);
CC3 = Entree(CC3);
CC4 = Entree(CC4);
DC1 = Entree(DC1);
EC4 = Entree(EC4);
EC5 = Entree(EC5);
EC6 = Entree(EC6);
EC7 = Entree(EC7);
P1 = Entree(P1);
TC = Entree(TC);
TD = Entree(TD);
//transition t1G
if ( (p1G >= 1) )
	if(CC4.BC4.P1)
	{
	  p1G -= 1; // Démarquage
	  p2G += 1;  p13G += 1; // Marquage
	}

//transition t2G
if ( (p2G >= 1)&&(p22G >= 1) )
	if(CC3)
	{
	  p2G -= 1;  p22G -= 1; // Démarquage
	  p3G += 1; // Marquage
	}

//transition t3G
if ( (p3G >= 1) )
	if(EC6)
	{
	  p3G -= 1; // Démarquage
	  p4G += 1; // Marquage
	}

//transition t4G
if ( (p4G >= 1) )
	if(EC7)
	{
	  p4G -= 1; // Démarquage
	  p5G += 1;  p22G += 1; // Marquage
	}

//transition t5G
if ( (p5G >= 1) )
	if(DC1)
	{
	  p5G -= 1; // Démarquage
	  p6G += 1; // Marquage
	}

//transition t6G
if ( (p6G >= 1) )
	if(EC7)
	{
	  p6G -= 1; // Démarquage
	  p7G += 1; // Marquage
	}

//transition t7G
if ( (p7G >= 1)&&(p22G >= 1) )
	if(EC6)
	{
	  p7G -= 1;  p22G -= 1; // Démarquage
	  p8G += 1; // Marquage
	}

//transition t8G
if ( (p8G >= 1) )
	if(EC5)
	{
	  p8G -= 1; // Démarquage
	  p9G += 1; // Marquage
	}

//transition t9G
if ( (p9G >= 1) )
	if(EC4)
	{
	  p9G -= 1; // Démarquage
	  p10G += 1;  p22G += 1; // Marquage
	}

//transition t10G
if ( (p10G >= 1) )
	if(BC4)
	{
	  p10G -= 1; // Démarquage
	  p11G += 1; // Marquage
	}

//transition t11G
if ( (p11G >= 1) )
	if(BC5)
	{
	  p11G -= 1; // Démarquage
	  p12G += 1; // Marquage
	}

//transition t12G
if ( (p12G >= 1) )
	if(TD)
	{
	  p12G -= 1; // Démarquage
	  p13G += 1; // Marquage
	}

//transition t13G
if ( (p13G >= 1) )
	if(BC4)
	{
	  p13G -= 1; // Démarquage
	  p14G += 1; // Marquage
	}

//transition t14G
if ( (p14G >= 1)&&(p22G >= 1) )
	if(EC4)
	{
	  p14G -= 1;  p22G -= 1; // Démarquage
	  p15G += 1; // Marquage
	}

//transition t15G
if ( (p15G >= 1) )
	if(EC5)
	{
	  p15G -= 1; // Démarquage
	  p16G += 1; // Marquage
	}

//transition t17G
if ( (p16G >= 1) )
	if(CC2)
	{
	  p16G -= 1; // Démarquage
	  p18G += 1;  p22G += 1; // Marquage
	}

//transition t18G
if ( (p18G >= 1) )
	if(CC1)
	{
	  p18G -= 1; // Démarquage
	  p19G += 1; // Marquage
	}

//transition t19G
if ( (p19G >= 1)&&(p22G >= 1) )
	if(CC2)
	{
	  p19G -= 1;  p22G -= 1; // Démarquage
	  p20G += 1; // Marquage
	}

//transition t20G
if ( (p20G >= 1) )
	if(CC3)
	{
	  p20G -= 1; // Démarquage
	  p21G += 1;  p22G += 1; // Marquage
	}

//transition t21G
if ( (p21G >= 1) )
	if(CC4)
	{
	  p21G -= 1; // Démarquage
	  p23G += 1; // Marquage
	}

//transition t22G
if ( (p23G >= 1) )
	if(TC)
	{
	  p23G -= 1; // Démarquage
	  p2G += 1; // Marquage
	}


// calcul des sorties
AigCD = p16G||p20G;
AigB2T = p14G;
AigDT = p5G||p6G;
B5d = p10G||p11G;
B4d = p10G;
E4d = p6G||p7G||p8G;
C2d = p8G||p20G;
B5g = p13G||p14G;
AigCT = p3G||p8G;
B4g = p14G;
C3d = p21G;
C3g = p2G||p3G;
D1d = p6G;
E3d = p8G||p9G||p10G;
AigB2D = p10G;
C1d = p19G||p20G;
E3g = p14G||p15G||p16G;
C1g = p18G;
C2g = p3G||p16G;
E4g = p3G||p4G||p5G;
E1g = p16G;
D1g = p5G;

// écriture sur les sorties
Sortie(AIGCD,AigCD);
Sortie(AIGB2T,AigB2T);
Sortie(AIGDT,AigDT);
Sortie(B5D,B5d);
Sortie(B4D,B4d);
Sortie(E4D,E4d);
Sortie(C2D,C2d);
Sortie(B5G,B5g);
Sortie(AIGCT,AigCT);
Sortie(B4G,B4g);
Sortie(C3D,C3d);
Sortie(C3G,C3g);
Sortie(D1D,D1d);
Sortie(E3D,E3d);
Sortie(AIGB2D,AigB2D);
Sortie(C1D,C1d);
Sortie(E3G,E3g);
Sortie(C1G,C1g);
Sortie(C2G,C2g);
Sortie(E4G,E4g);
Sortie(E1G,E1g);
Sortie(D1G,D1g);
} // fin while
Sortie(AIGCD,0);
Sortie(AIGB2T,0);
Sortie(AIGDT,0);
Sortie(B5D,0);
Sortie(B4D,0);
Sortie(E4D,0);
Sortie(C2D,0);
Sortie(B5G,0);
Sortie(AIGCT,0);
Sortie(B4G,0);
Sortie(C3D,0);
Sortie(C3G,0);
Sortie(D1D,0);
Sortie(E3D,0);
Sortie(AIGB2D,0);
Sortie(C1D,0);
Sortie(E3G,0);
Sortie(C1G,0);
Sortie(C2G,0);
Sortie(E4G,0);
Sortie(E1G,0);
Sortie(D1G,0);
return 0;

}//fin main
