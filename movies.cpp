#include <iostream>
#include "movies.h"

//Constructor
Movies::Movies() {}

//Destructor
Movies::~Movies() {}

bool Movies::add_movie(std::string name,std::string rating,int watched)
{
    for(auto& itr : movies)
    {
        if( itr.Get_name() == name)
                {
                  return false;
                }
    }
    Movie movie (name,rating,watched);
    movies.push_back(movie);
    return true;
}


bool Movies::increament_watched(std::string name)
{
    for(auto& itr : movies )
    {
        if(itr.Get_name() == name)
        {
           itr. increament_watched();
            return true;
        }
    }

        return false;
}

void Movies::display()
{
    if(movies.size() == 0)
    {
        std::cout <<" Sorry, no movies to display please add movies!!\n"<<std::endl;
    }
    else
    {
    std::cout <<"===========================================================\n"<<std::endl;
    for( auto& movie : movies)
    {
        movie.display();
    }
    std::cout <<"===========================================================\n"<<std::endl;
    }
}


