//IT21210488
//Kumara K.D.A.N
//MLB_WE_01.01_10


#include"unregisteredCustomer.h"
#include "RegisteredCustomer.h"
#include "Booking.h"
#define SIZE 2
class Movie {
private:
int movieId;
char movieName[15];
char movieGenre[15];
int movieReleasedYear;
char movieCompany[15];
double movieTicketPrice;
int movieRating;
int numofmovieAvailableTheaters;
char movieLanguage[15];
//Class Relationship
Booking* booking[SIZE];
UnregisteredCustomer *unregisteredcustomer[SIZE];
RegisteredCustomer *registeredcustomer[SIZE];


public:
Movie();
Movie(int M_movieId, char *M_movieName, char *M_movieGenre, int M_movieReleasedYear, 
char *M_movieCompany, double M_movieTicketPrice, int M_movieRating,int M_numofmovieAvailableTheaters, char *M_movieLanguage);
void addMovie();
void removeMovie();
void updateMovie();
void checkAvailability();
void MovieDetails();
~Movie();
};

