#include <iostream>
#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    if(p1 == p2)
    return "Draw!";
    if((p1 == "rock" && p2 =="scissors") ||
       (p1 == "paper" && p2 == "rock") ||
       (p1 == "scissors" && p2 == "paper"))
        return "Player 1 won!";
    else
        return "Player 2 won";
}

