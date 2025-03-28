#ifndef _MOVIE_H
#define _MOVIE_H

#include <string>

class Movie
{
    private:
        std::string name;
        std::string rating;
        int watched;
    public:
        //constructor
        Movie(std::string name,std::string rating,int watched);
        //destructor
        ~Movie();


        // Getters and setters
        std::string Get_name() const
        {
            return name;
        }


        void Set_name(std::string name_val)
        {
           this-> name = name_val;
        }


        void Set_rating(std::string rating_val)
        {
            this-> rating = rating_val;
        }


        std::string Get_rating() const
        {
            return rating;
        }


        void Set_watched(int watched_val)
        {
           this-> watched = watched_val;
        }

        int Get_watched() const
        {
             return watched;
        }





        void increament_watched(){ watched++;}
        void display();
};
#endif
       

