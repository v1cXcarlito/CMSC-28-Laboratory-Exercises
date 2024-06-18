#include <iostream>
#include <string>
#include <list>
#include "Movie.h"

using namespace std;

int main(){
  cout<< "This program is about creating information about a movie with its corresponding details from user input" << endl;
  cout << "\nProgrammed by: Carl Raymund Suello" << endl;

  string title;
  string synopsis;
  string mprating;
  string genre;


  Movie movie1;

  //Inputting the movie title
  cout<< "\nEnter the movie title: " << endl;
  //uses the getline() function to read a string from an input
  getline(cin, title);
  //Setting the movie title using setTitle
  movie1.setTitle(title);

  //Inputting the movie synopsis
  cout<< "Enter the synopsis: " << endl;
  getline(cin, synopsis);
  movie1.setSynopsis(synopsis);

  //Inputting the movie mpaarating
  cout<< "Enter the MPAA rating: " << endl;
  getline(cin, mprating);
  movie1.setMpaaRating(mprating);

  int choice; // Declare choice outside the loop

  //Adding the genres and terminates if the condition is met 
   do {
    
    cout << "Describe the suitable genre: "<< endl;
    getline(cin, genre);
    movie1.insertGenre(genre);

    cout << "Press '0' if done or '1' add more genre" << endl;
    cin >> choice;
    cin.ignore();

    if(!choice){//Condition to break from the loop
      break;
    }
  } while(1);

  //Adding the details for the object directors
  cout << "\nDirector's Name: " << endl;

  Person directors;

  string fn,ln,gendr;

  
do {
    cout << "Enter first name: " <<endl;
    getline(cin, fn);
    // Sets the fname in class Person
    directors.setFname(fn);

    cout << "Enter last name: " <<endl;
    getline(cin, ln);
    // Sets the lname in class Person
    directors.setLname(ln);

    cout << "Enter gender: "  <<endl;
    getline(cin, gendr);
    // Sets gender in class Person
    directors.setGender(gendr);

    // Adds the object to the list in class Movie
    movie1.insertDirector(directors);

    cout << "Press '0' if done or '1' to add more Directors" << endl;
    cin >> choice;
    cin.ignore();

    if(!choice){ //Condition to break from the loop
      break;
    }
  } while(1);

  //Adding details for object actors

  cout << "\nActors/Actresses Name: " << endl;

  Person actors;

  string fname,lname,gender;
  
  do{
        cout << "Enter first name: " <<endl;
        getline(cin, fname);
        // Sets the fname in class Person
        actors.setFname(fname);

        cout << "Enter last name: " <<endl;
        getline(cin, lname);
        // Sets the lname in class Person
        actors.setLname(lname);

        cout << "Enter gender: " <<endl;
        getline(cin, gender);
        // Sets gender in class Person
        actors.setGender(gender);

        // Adds the object to the list in class Movie
        movie1.insertActor(actors);

    cout << "Press '0' if done or '1' to add more Actors" << endl;
    cin >> choice;
    cin.ignore();

    if(!choice){//Condition to break from the loop
      break;
    }
    
}while(1);

   
    cout << "\nABOUT THE MOVIE\n" << endl;

    cout << "\nMovie title: " << movie1.getTitle() << endl;
    cout << "\nSynopsis: " << movie1.getSynopsis() << endl;
    cout << "\nMPAA Rating: " << movie1.getMpaaRating() << endl;

    cout << "\nGenre/s: "  <<endl;
    
    list<string> genres = movie1.getGenre();
    
    for (string g : genres){
        cout << g << endl;
    }
    
    cout << "\nDirector/s: " << endl;
    
    list<Person> direk = movie1.getDirectors();
  
    for(Person d : direk){
        cout << d.getFullname() << endl;
    }

   
    cout << "\nActors/Actresses: " << endl;
    list<Person> act = movie1.getActors();
    
    for(Person a : act){
        cout << a.getFullname() << endl;
    }

  return 0;
}


  

