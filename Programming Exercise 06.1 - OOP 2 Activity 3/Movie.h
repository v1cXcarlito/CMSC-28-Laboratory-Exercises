#include <iostream>
#include <string>
#include <list>
#include "Person.h"

using std::string;
using std::list;

/*The class movie contains the title, synopsis, mpaarating, genre, directors, and actors
  Movie class acquired the Person class which contains the anticipated lists of genre, directors and actors.*/
class Movie:private Person{
  private:
    string title;
    string synopsis;
    string mpaaRating;
    list<string> genre;
    list<Person> directors;
    list<Person> actors;
  
  public:
    Movie():Person(){}

    //sets the title of the movie
    void setTitle(string ttl){
      title=ttl;
    }

    //sets the title of the movie and returns it
    string getTitle(){
      return title;
    }

    //sets the title of the movie
    void setSynopsis(string synp){
      synopsis= synp;
    }

    //gets synopsis of the movie and returns it
    string getSynopsis(){
      return synopsis;
    }

    //sets the rating of the movie
    void setMpaaRating(string mprating){
      mpaaRating=mprating;
    }

    //gets the rating and returns it
    string getMpaaRating(){
      return mpaaRating;
    }

    //sets the rating of the movie
    //push_back function allows us to insert elements for gender, actors, directors
    
    void insertGenre(string genr){
        genre.push_back(genr);
    }

    //gets the genre and returns it.
    list<string> getGenre(){
      return genre;
    }

    void insertDirector(Person direk){
        directors.push_back(direk);
    }

    list<Person> getDirectors(){
      return directors;
    }

    void insertActor(Person acthor){
        actors.push_back(acthor);
    }

    list<Person> getActors(){
      return actors;
    }
};