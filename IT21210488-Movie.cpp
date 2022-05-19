//IT21210488
//Kumara K.D.A.N
//MLB_WE_01.01_10

#include "Movie.h"
#include <cstring>

Movie::Movie() {
movieId = 0;
strcpy_s(movieName, "");
strcpy_s(movieGenre, "");
movieReleasedYear = 0;
strcpy_s(movieCompany, "");
movieTicketPrice = 0.00;
movieRating = 0;
numofmovieAvailableTheaters=0;
strcpy_s(movieLanguage, "");
}
Movie::Movie(int M_movieId, char *M_movieName, char *M_movieGenre, int M_movieReleasedYear, 
char *M_movieCompany, double M_movieTicketPrice, int M_movieRating,int M_numofmovieAvailableTheaters, char *M_movieLanguage) {
movieId = M_movieId;
strcpy_s(movieName,M_movieName);
strcpy_s(movieGenre,M_movieGenre);
movieReleasedYear = M_movieReleasedYear;
strcpy_s(movieCompany, M_movieCompany);
movieTicketPrice = M_movieTicketPrice;
movieRating = M_movieRating;
numofmovieAvailableTheaters=M_numofmovieAvailableTheaters
strcpy_s(movieLanguage,M_movieLanguage);
}
void Movie::addMovie()
{
}
void Movie::removeMovie()
{
}
void Movie::updateMovie()
{
}
void Movie::checkAvailability()
{
}
void Movie::MovieDetails()
{
}
Movie::~Movie()
{
}

