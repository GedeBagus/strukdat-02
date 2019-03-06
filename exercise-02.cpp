/*
Nama Program	: exercise-02
Nama			: Gede Bagus Darmagita
NPM				: 140810180068
Deskriptif		: Menginput room, seat, dan movie title menggunakan stuct
Tahun			: 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main (){
	Theater CCM;
	CCM.room = 7;
	strcpy (CCM.seat, "J9 " );
	strcpy (CCM.movieTitle, "Adit & Jarwo " );
	cout << CCM.room << endl; //output room
	cout << CCM.seat << endl; // output seat
	cout << CCM.movieTitle << endl; // output movietitle
}
