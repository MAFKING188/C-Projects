#include <iostream>
#include "movies.h"

void increament_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);
//just a comment

//Another comment for testing


int main(void)
{
    Movies my_movies;

    add_movie(my_movies,"Movie1","PG-13",0);

    add_movie(my_movies,"Movie2","R",0);

    my_movies.display();

    increament_watched(my_movies,"Movie2");

    my_movies.display();

    increament_watched(my_movies,"XXX");

    add_movie(my_movies,"Movie2","R",0);
    add_movie(my_movies,"Movie3","PG-16",0);

    my_movies.display();

    increament_watched(my_movies,"Movie3");
    increament_watched(my_movies,"Movie2");

    my_movies.display();





return 0;
}

void increament_watched(Movies &movies, std::string name)
{
    if(movies.increament_watched(name))
    {
        
        std::cout << name <<" Watch increamented\n"<<std::endl;
      
    }
    else
    {
        
        std::cout << name <<" Watch not increamented\n"<<std::endl;
       
    }

}


void add_movie(Movies &movies, std::string name, std::string rating, int watched)
{
    if(movies.add_movie(name,rating,watched))
            {
                std::cout <<" "<<std::endl;    
            std::cout << name <<" has been added" <<std::endl;
            std::cout <<" " <<std::endl;
            }
            else
            {
            std::cout <<" " <<std::endl;
            std::cout << name << " has not been added " <<std::endl;
            std::cout <<" " <<std::endl;
            }
}





           
