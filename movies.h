#ifndef _MOVIES_H
#define _MOVIES_H
#include <vector>
#include <string>
#include "movie.h"

class Movies
{
    private:
        std::vector<Movie> movies;

    public:
        Movies();
        ~Movies();



        bool add_movie(std::string name, std::string rating, int watched);

        bool increament_watched(std::string name);

        void display();

 
};
#endif



