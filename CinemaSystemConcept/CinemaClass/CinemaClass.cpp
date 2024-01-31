using namespace std;
#include <iostream>
#include"Screening.h"
#include"Room.h"
#include"Cinema.h"

int main()
{
    Screening sc1("Star Wars", 10);
    Screening sc2("The Godfather", 30);

    vector<Screening> screenings;

    screenings.push_back(sc1);
    screenings.push_back(sc2);

    Room room1("Room 8", 80, screenings);
    Room room2("Hall 9", 90, screenings);
    room1.print();

    Screening sc3("Indiana Jhones", 40);
    Screening sc4("10 years BTS", 100);

    vector<Screening> otherScreenings;
    otherScreenings.push_back(sc3);
    otherScreenings.push_back(sc4);
    Room room3("Hall 10", 100, otherScreenings);
    room3.print();

    Screening sc5("Lord of The Rings", 55);
    room3.addScreening(sc5);
    room3.print();

    vector<Room> rooms;
    rooms.push_back(room1);
    rooms.push_back(room2);
    rooms.push_back(room3);

    Cinema cinema("Arena", "Sofia", rooms);
    cinema.print();


    string movieName;
    getline(cin, movieName);

    
    for (int i = 0; i < rooms.size(); i++) { // is for rooms 
  //    Room r = rooms.at(i); // current room
  //    vector<Screening> scr = r.getScreeningList(); // projection in the current hall

        for (int j = 0; j < rooms.at(i).getScreeningList().size(); j++) { // is for projection vector 
  //          Screening scrobj = scr.at(j);
  //          string currentMovieName = scrobj.getMovieName();  // movie name from screening object

            if (movieName == rooms.at(i).getScreeningList().at(j).getMovieName()) {
                cout << " We found projection " << rooms.at(i).getScreeningList().at(j).getMovieName() << endl;
                rooms.at(i).getScreeningList().at(j).print();
                rooms.at(i).print();
                
            }
        }
    }

    return 0;
}

