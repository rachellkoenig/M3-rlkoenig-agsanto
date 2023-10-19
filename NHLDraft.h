//
// Created by Alexis Santo on 1/28/23.
//

#ifndef PROJECT1_NHLDRAFT_H
#define PROJECT1_NHLDRAFT_H

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using std:: cout, std:: endl, std::ifstream, std::ostream, std::string, std::vector;
using std::left, std:: setw;

class NHLDraft {
private:
    int overallPick, year, age, gamesPlayed, goals, assists, points, penaltyMinutes;
    int goalieWins, goalieLosses, goalieTiesOT;
    float goalsAgainstAverage, savePercentage;
    string team, name, position, nationality, amateurTeam, lastSeason;

public:
    // Constructors
    NHLDraft() {
    }
    NHLDraft(int overallPick, int year, string team, string name, int age, string position,
             string nationality, string amateurTeam, int gamesPlayed, int goals, int assists,
             int points, int penaltyMinutes, int goalieWins, int goalieLosses, int goalieTiesOT,
             float goalsAgainstAverage, float savePercentage, string lastSeason) {
        this->overallPick = overallPick;
        this->year = year;
        this->team = team;
        this->name = name;
        this->age = age;
        this->position = position;
        this->nationality = nationality;
        this->amateurTeam = amateurTeam;
        this->gamesPlayed = gamesPlayed;
        this->goals = goals;
        this->assists = assists;
        this->points = points;
        this->penaltyMinutes = penaltyMinutes;
        this->goalieWins = goalieWins;
        this->goalieLosses = goalieLosses;
        this->goalieTiesOT = goalieTiesOT;
        this->goalsAgainstAverage = goalsAgainstAverage;
        this->savePercentage = savePercentage;
        this->lastSeason = lastSeason;
    }

    // Getters
    int getOverallPick() const {
        return overallPick;
    }
    int getYear() const {
        return year;
    }
    string getTeam() const {
        return team;
    }
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    string getPosition() const {
        return position;
    }
    string getNationality() const {
        return nationality;
    }
    string getAmateurTeam() const {
        return amateurTeam;
    }
    int getGamesPlayed() const {
        return gamesPlayed;
    }
    int getGoals() const {
        return goals;
    }
    int getAssists() const {
        return assists;
    }
    int getPoints() const {
        return points;
    }
    int getPenaltyMinutes() const {
        return penaltyMinutes;
    }
    int getGoalieWins() const {
        return goalieWins;
    }
    int getGoalieLosses() const {
        return goalieLosses;
    }
    int getGoalieTiesOT() const {
        return goalieTiesOT;
    }
    float getGoalsAgainstAverage() const {
        return goalsAgainstAverage;
    }
    float getSavePercentage() const {
        return savePercentage;
    }
    string getLastSeason() const {
        return lastSeason;
    }

    // Setters
    void setOverallPick(int overallPick) {
        this->overallPick = overallPick;
    }
    void setYear(int year) {
        this->year = year;
    }
    void setTeam(string team) {
        this->team = team;
    }
    void setName(string name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setPosition(string position) {
        this->position = position;
    }
    void setNationality(string nationality) {
        this->nationality = nationality;
    }
    void setAmateurTeam(string amateurTeam) {
        this->amateurTeam = amateurTeam;
    }
    void setGamesPlayed(int gamesPlayed) {
        this->gamesPlayed = gamesPlayed;
    }
    void setGoals(int goals) {
        this->goals = goals;
    }
    void setAssists(int assists) {
        this->assists = assists;
    }
    void setPoints(int points) {
        this->points = points;
    }
    void setPenaltyMinutes(int penaltyMinutes) {
        this->penaltyMinutes = penaltyMinutes;
    }
    void setGoalieWins(int goalieWins) {
        this->goalieWins = goalieWins;
    }
    void setGoalieLosses(int goalieLosses) {
        this->goalieLosses = goalieLosses;
    }
    void setGoalieTiesOT(int goalieTiesOT) {
        this->goalieTiesOT = goalieTiesOT;
    }
    void setGoalsAgainstAverage(float goalsAgainstAverage) {
        this->goalsAgainstAverage = goalsAgainstAverage;
    }
    void setSavePercentage(float savePercentage) {
        this->savePercentage = savePercentage;
    }
    void setLastSeason(string lastSeason) {
        this->lastSeason = lastSeason;
    }

    // Overloaded << operator
    friend ostream& operator << (ostream& outs, const NHLDraft& draftPicks) {
        outs << left << setw(4) << draftPicks.getOverallPick();
        outs << setw(6) << draftPicks.getYear();
        outs << setw(23) << draftPicks.getTeam();
        outs << setw(26) << draftPicks.getName();
        outs << setw(4) << draftPicks.getAge();
        outs << setw(6) << draftPicks.getPosition();
        outs << setw(4) << draftPicks.getNationality();
        outs << setw(40) << draftPicks.getAmateurTeam();
        outs << setw(6) << draftPicks.getGamesPlayed();
        outs << setw(5) << draftPicks.getGoals();
        outs << setw(6) << draftPicks.getAssists();
        outs << setw(6) << draftPicks.getPoints();
        outs << setw(6) << draftPicks.getPenaltyMinutes();
        outs << setw(5) << draftPicks.getGoalieWins();
        outs << setw(5) << draftPicks.getGoalieLosses();
        outs << setw(5) << draftPicks.getGoalieTiesOT();
        outs << setw(6) << draftPicks.getGoalsAgainstAverage();
        outs << setw(7) << draftPicks.getSavePercentage();
        outs << setw(7) << draftPicks.getLastSeason();
        return outs;
    }

    // Overloaded == operator
    friend bool operator == (const NHLDraft& lhs, const NHLDraft& rhs) {
        // Compare the players' names to determine equality
        return lhs.name == rhs.name;
    }

    // Overloaded < operator
    friend bool operator < (const NHLDraft& lhs, const NHLDraft& rhs) {
        return lhs.overallPick < rhs.overallPick;
    }

    // Overloaded > operator
    friend bool operator > (const NHLDraft& lhs, const NHLDraft& rhs) {
        return lhs.overallPick > rhs.overallPick;
    }

    // Overloaded <= operator
    friend bool operator <= (const NHLDraft& lhs, const NHLDraft& rhs) {
        return lhs.overallPick <= rhs.overallPick;
    }

    // Overloaded >= operator
    friend bool operator >= (const NHLDraft& lhs, const NHLDraft& rhs) {
        return lhs.overallPick >= rhs.overallPick;
    }
};

// Read data from csv file and populate a vector of NHLDraft objects
void getDataFromFile(string filename, vector<NHLDraft>& draftPicks) {
    // Create a file handler object
    ifstream inFile;
    // Open the file
    inFile.open(filename);
    // String to store csv file header
    string header;
    // Check if file can be read from
    if(inFile) {
        // Read a full line from the file into the header string
        getline(inFile, header);
    }

    // Declare variables to be read in
    int overallPick = -1, year = -1, age = -1, gamesPlayed = -1, goals = -1, assists = -1, points = -1;
    int penaltyMinutes = -1, goalieWins = -1, goalieLosses = -1, goalieTiesOT = -1;
    float goalsAgainstAverage = -1.0, savePercentage = -1.0;
    string team = "", name = "", position = "", nationality = "", amateurTeam = "", lastSeason = "";
    char comma;

    // While file is in a good state to be read from
    // and we're not at the end of the file
    while (inFile && inFile.peek() != EOF) {
        // Overall Pick
        inFile >> overallPick >> comma;

        // Year
        inFile >> year >> comma;

        // Team
        getline(inFile, team, ',');

        // Name
        getline(inFile, name, ',');

        // Age
        inFile >> age >> comma;

        // Position
        getline(inFile, position, ',');

        // Nationality
        getline(inFile, nationality, ',');

        // Amateur Team
        getline(inFile, amateurTeam, ',');

        // Games Played
        inFile >> gamesPlayed;
        // Check if the file could be read
        if (!inFile) {
            // There was no gamesPlayed, set a default value
            gamesPlayed = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goals
        inFile >> goals;
        // Check if the file could be read
        if (!inFile) {
            // There was no goals, set a default value
            goals = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Assists
        inFile >> assists;
        // Check if the file could be read
        if (!inFile) {
            // There was no assists, set a default value
            assists = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Points
        inFile >> points;
        // Check if the file could be read
        if (!inFile) {
            // There was no points, set a default value
            points = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Penalty Minutes
        inFile >> penaltyMinutes;
        // Check if the file could be read
        if (!inFile) {
            // There was no penaltyMinutes, set a default value
            penaltyMinutes = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goalie Wins
        inFile >> goalieWins;
        // Check if the file could be read
        if (!inFile) {
            // There was no goalieWins, set a default value
            goalieWins = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goalie Losses
        inFile >> goalieLosses;
        // Check if the file could be read
        if (!inFile) {
            // There was no goalieLosses, set a default value
            goalieLosses = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goalie Ties and OT
        inFile >> goalieTiesOT;
        // Check if the file could be read
        if (!inFile) {
            // There was no goalieTiesOT, set a default value
            goalieTiesOT = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goals Against Average
        inFile >> goalsAgainstAverage;
        // Check if the file could be read
        if (!inFile) {
            // There was no goalsAgainstAverage, set a default value
            goalsAgainstAverage = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Save Percentage
        inFile >> savePercentage;
        // Check if the file could be read
        if (!inFile) {
            // There was no savePercentage, set a default value
            savePercentage = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Last Season
        getline(inFile, lastSeason, '\r');

        // Create an NHLDraft object and add it to the vector
        draftPicks.push_back(NHLDraft(overallPick, year, team, name, age, position, nationality, amateurTeam,
                                      gamesPlayed, goals, assists, points, penaltyMinutes,
                                      goalieWins, goalieLosses, goalieTiesOT, goalsAgainstAverage,
                                      savePercentage, lastSeason));
    }
    // Close the file
    inFile.close();
}

// Calculate average points per game for all players excluding goalies
float averagePointsPerGame(vector<NHLDraft>& draftPicks) {
    // Holds the points per game of a specific player
    float pointsPerGame = 0.0;
    // Holds the sum of all players' points per game
    float totalPtsPerGame = 0.0;
    // Holds the number of skaters factoring into the average
    int skaters = 0;

    int i = 0;
    // Iterate through vector
    while (i < draftPicks.size()) {
        // Check if player is a goalie or has not played in an NHL game
        if (draftPicks[i].getPosition() == "G" || draftPicks[i].getGamesPlayed() == 0) {
            i++;
        }
        else {
            // Calculate a single skater's points per game
            pointsPerGame = (float)draftPicks[i].getPoints() / draftPicks[i].getGamesPlayed();
            // Add that skater's points per game to the total
            totalPtsPerGame += pointsPerGame;
            // Increment skaters and i
            skaters++;
            i++;
        }
    }
    // Calculate and return the average points per game
    return totalPtsPerGame / skaters;
}

#endif //PROJECT1_NHLDRAFT_H
