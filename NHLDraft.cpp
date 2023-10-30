#include "NHLDraft.h"
using namespace std;

NHLDraft::NHLDraft() {
    overallPick = -1;
    year = -1;
    team = "";
    name = "";
    age = -1;
    position = "";
    nationality = "";
    amateurTeam = "";
    gamesPlayed = -1;
    goals = -1;
    assists = -1;
    points = -1;
    penaltyMinutes = -1;
    goalieWins = -1.0;
    goalieLosses = -1.0;
    goalieTiesOT = -1.0;
    goalsAgainstAverage = -1.0;
    savePercentage = -1.0;
    lastSeason = "";
}

NHLDraft::NHLDraft(int overallPick, int year, string team, string name, int age, string position,
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

int NHLDraft::getOverallPick() const {
    return overallPick;
}

int NHLDraft::getYear() const {
    return year;
}

string NHLDraft::getTeam() const {
    return team;
}

string NHLDraft::getName() const {
    return name;
}

int NHLDraft::getAge() const {
    return age;
}

string NHLDraft::getPosition() const {
    return position;
}

string NHLDraft::getNationality() const {
    return nationality;
}

string NHLDraft::getAmateurTeam() const {
    return amateurTeam;
}

int NHLDraft::getGamesPlayed() const {
    return gamesPlayed;
}

int NHLDraft::getGoals() const {
    return goals;
}

int NHLDraft::getAssists() const {
    return assists;
}

int NHLDraft::getPoints() const {
    return points;
}

int NHLDraft::getPenaltyMinutes() const {
    return penaltyMinutes;
}

int NHLDraft::getGoalieWins() const {
    return goalieWins;
}

int NHLDraft::getGoalieLosses() const {
    return goalieLosses;
}

int NHLDraft::getGoalieTiesOT() const {
    return goalieTiesOT;
}

float NHLDraft::getGoalsAgainstAverage() const {
    return goalsAgainstAverage;
}

float NHLDraft::getSavePercentage() const {
    return savePercentage;
}

string NHLDraft::getLastSeason() const {
    return lastSeason;
}

void NHLDraft::setOverallPick(int overallPick) {
    this->overallPick = overallPick;
}

void NHLDraft::setYear(int year) {
    this->year = year;
}

void NHLDraft::setTeam(string team) {
    this->team = team;
}

void NHLDraft::setName(string name) {
    this->name = name;
}

void NHLDraft::setAge(int age) {
    this->age = age;
}

void NHLDraft::setPosition(string position) {
    this->position = position;
}

void NHLDraft::setNationality(string nationality) {
    this->nationality = nationality;
}

void NHLDraft::setAmateurTeam(string amateurTeam) {
    this->amateurTeam = amateurTeam;
}

void NHLDraft::setGamesPlayed(int gamesPlayed) {
    this->gamesPlayed = gamesPlayed;
}

void NHLDraft::setGoals(int goals) {
    this->goals = goals;
}

void NHLDraft::setAssists(int assists) {
    this->assists = assists;
}

void NHLDraft::setPoints(int points) {
    this->points = points;
}

void NHLDraft::setPenaltyMinutes(int penaltyMinutes) {
    this->penaltyMinutes = penaltyMinutes;
}

void NHLDraft::setGoalieWins(int goalieWins) {
    this->goalieWins = goalieWins;
}

void NHLDraft::setGoalieLosses(int goalieLosses) {
    this->goalieLosses = goalieLosses;
}

void NHLDraft::setGoalieTiesOT(int goalieTiesOT) {
    this->goalieTiesOT = goalieTiesOT;
}

void NHLDraft::setGoalsAgainstAverage(float goalsAgainstAverage) {
    this->goalsAgainstAverage = goalsAgainstAverage;
}

void NHLDraft::setSavePercentage(float savePercentage) {
    this->savePercentage = savePercentage;
}

void NHLDraft::setLastSeason(string lastSeason) {
    this->lastSeason = lastSeason;
}

ostream& operator << (ostream& outs, const NHLDraft& player) {
    outs << left << setw(4) << player.getOverallPick();
    outs << setw(6) << player.getYear();
    outs << setw(23) << player.getTeam();
    outs << setw(26) << player.getName();
    outs << setw(4) << player.getAge();
    outs << setw(6) << player.getPosition();
    outs << setw(4) << player.getNationality();
    outs << setw(40) << player.getAmateurTeam();
    outs << setw(6) << player.getGamesPlayed();
    outs << setw(5) << player.getGoals();
    outs << setw(6) << player.getAssists();
    outs << setw(6) << player.getPoints();
    outs << setw(6) << player.getPenaltyMinutes();
    outs << setw(5) << player.getGoalieWins();
    outs << setw(5) << player.getGoalieLosses();
    outs << setw(5) << player.getGoalieTiesOT();
    outs << setw(6) << player.getGoalsAgainstAverage();
    outs << setw(7) << player.getSavePercentage();
    outs << setw(7) << player.getLastSeason();
    return outs;
}

bool operator == (const NHLDraft& lhs, const NHLDraft& rhs) {
    return lhs.name == rhs.name;
}

bool operator < (const NHLDraft& lhs, const NHLDraft& rhs) {
    return lhs.overallPick < rhs.overallPick;
}

bool operator > (const NHLDraft& lhs, const NHLDraft& rhs) {
    return lhs.overallPick > rhs.overallPick;
}

bool operator <= (const NHLDraft& lhs, const NHLDraft& rhs) {
    return lhs.overallPick <= rhs.overallPick;
}

bool operator >= (const NHLDraft& lhs, const NHLDraft& rhs) {
    return lhs.overallPick >= rhs.overallPick;
}

bool getDataFromFile(string filename, vector<NHLDraft>& draftPicks) {
    // Open the file
    ifstream inFile(filename);

    // If the file is in a good state, read in the file header
    string header;
    if (inFile) {
        getline(inFile, header);
    } else {
        // Else, the file is in a bad state
        return false;
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
            // There was no value for gamesPlayed, set a default value
            gamesPlayed = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goals
        inFile >> goals;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for goals, set a default value
            goals = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Assists
        inFile >> assists;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for assists, set a default value
            assists = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Points
        inFile >> points;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for points, set a default value
            points = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Penalty Minutes
        inFile >> penaltyMinutes;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for penaltyMinutes, set a default value
            penaltyMinutes = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goalie Wins
        inFile >> goalieWins;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for goalieWins, set a default value
            goalieWins = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goalie Losses
        inFile >> goalieLosses;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for goalieLosses, set a default value
            goalieLosses = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goalie Ties and OT
        inFile >> goalieTiesOT;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for goalieTiesOT, set a default value
            goalieTiesOT = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Goals Against Average
        inFile >> goalsAgainstAverage;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for goalsAgainstAverage, set a default value
            goalsAgainstAverage = 0;
            // Clear the file stream
            inFile.clear();
        }
        inFile >> comma;

        // Save Percentage
        inFile >> savePercentage;
        // Check if the file could be read
        if (!inFile) {
            // There was no value for savePercentage, set a default value
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
    return true;
}

float averagePointsPerGame(vector<NHLDraft>& draftPicks) {
    // Points per game of an individual skater, the sum of all skaters' points per game
    float pointsPerGame, totalPtsPerGame = 0.0;
    // The number of skaters (valid players) factoring into the average
    int skaters = 0;

    for (const NHLDraft& player : draftPicks) {
        // If player is not a goalie and has played in an NHL game
        if (player.getPosition() != "G" && player.getGamesPlayed() != 0) {
            // Calculate the player's points per game
            pointsPerGame = (float)player.getPoints() / player.getGamesPlayed();
            // Add the player's points per game to the total
            totalPtsPerGame += pointsPerGame;
            // Increment skaters
            skaters++;
        }
    }
    // Calculate and return the average points per game
    return totalPtsPerGame / skaters;
}