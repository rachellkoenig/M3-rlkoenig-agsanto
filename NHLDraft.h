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
using std::cout, std::endl, std::ifstream, std::left;
using std::ostream, std::setw, std::string, std::vector;

class NHLDraft {
private:
    // Fields
    int overallPick, year, age, gamesPlayed, goals, assists, points,
        penaltyMinutes, goalieWins, goalieLosses, goalieTiesOT;
    float goalsAgainstAverage, savePercentage;
    string team, name, position, nationality, amateurTeam, lastSeason;

public:
    // Constructors
    NHLDraft();
    NHLDraft(int overallPick, int year, string team, string name, int age, string position,
             string nationality, string amateurTeam, int gamesPlayed, int goals, int assists,
             int points, int penaltyMinutes, int goalieWins, int goalieLosses, int goalieTiesOT,
             float goalsAgainstAverage, float savePercentage, string lastSeason);

    // Getters
    int getOverallPick() const;
    int getYear() const;
    string getTeam() const;
    string getName() const;
    int getAge() const;
    string getPosition() const;
    string getNationality() const;
    string getAmateurTeam() const;
    int getGamesPlayed() const;
    int getGoals() const;
    int getAssists() const;
    int getPoints() const;
    int getPenaltyMinutes() const;
    int getGoalieWins() const;
    int getGoalieLosses() const;
    int getGoalieTiesOT() const;
    float getGoalsAgainstAverage() const;
    float getSavePercentage() const;
    string getLastSeason() const;

    // Setters
    void setOverallPick(int overallPick);
    void setYear(int year);
    void setTeam(string team);
    void setName(string name);
    void setAge(int age);
    void setPosition(string position);
    void setNationality(string nationality);
    void setAmateurTeam(string amateurTeam);
    void setGamesPlayed(int gamesPlayed);
    void setGoals(int goals);
    void setAssists(int assists);
    void setPoints(int points);
    void setPenaltyMinutes(int penaltyMinutes);
    void setGoalieWins(int goalieWins);
    void setGoalieLosses(int goalieLosses);
    void setGoalieTiesOT(int goalieTiesOT);
    void setGoalsAgainstAverage(float goalsAgainstAverage);
    void setSavePercentage(float savePercentage);
    void setLastSeason(string lastSeason);

    // Overloaded operators
    friend ostream& operator << (ostream& outs, const NHLDraft& draftPicks);
    friend bool operator == (const NHLDraft& lhs, const NHLDraft& rhs);
    friend bool operator < (const NHLDraft& lhs, const NHLDraft& rhs);
    friend bool operator > (const NHLDraft& lhs, const NHLDraft& rhs);
    friend bool operator <= (const NHLDraft& lhs, const NHLDraft& rhs);
    friend bool operator >= (const NHLDraft& lhs, const NHLDraft& rhs);
};

// Read data from csv file and populate a vector of NHLDraft objects
bool getDataFromFile(string filename, vector<NHLDraft>& draftPicks);

// Calculate average points per game for all players who have played in a game excluding goalies
float averagePointsPerGame(vector<NHLDraft>& draftPicks);

#endif //PROJECT1_NHLDRAFT_H