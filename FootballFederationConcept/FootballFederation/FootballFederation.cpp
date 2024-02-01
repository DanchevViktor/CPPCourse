#include <iostream>
#include"User.h"
#include"Player.h"
#include"Team.h"
#include "Referee.h"

int main()
{

    User user1("Viktor", "12344");
    
    Player player1("Viktor", "Forward",27,6 );
    Player player2("Ivan", "Defence",23,5 );
    Player player3("Qnkko", "Goalkeeper",22,1 );
    Player player4("Stoqn", "Forward",28,7 );
    Player player5("Metodi", "Defence",20,13 );
    Player player6("Petko", "Half",25,2 );
    Player player7("Stanoi", "Defence",26,8 );
    Player player8("Andrei", "LeftWing",27,9 );

    vector<Player> players;
    vector <Player>players2;
    Team team1 ("Liverpool", "Kaleto", "Sofia", "Nikolay",players);
    Team team2("Barcelona", "Ivan Rakovski", "Sliven", "Georgi", players2);

    
    team1.addPlayers(player1);
    team1.addPlayers(player2);
    team1.addPlayers(player3);
    team1.addPlayers(player4);

    team2.addPlayers(player5);
    team2.addPlayers(player6);
    team2.addPlayers(player7);
    team2.addPlayers(player8);
    
    
    team1.updatetWins(5);
    team1.updatetWins(5);
    cout << team1.getWins();

    Referee ref1;
    ref1.setUserName("Valeri");
    ref1.setPassword("123456");

   
    Match match1(1, "22.02.2024", "18:00", "VasilL Levski", "Sofia", team1, team2,ref1);
    match1.setDate("12.02.2025");
    ref1.addRedCard("Viktor", 1);
    
    cout << match1.getDate();
    
    return 0;
}

