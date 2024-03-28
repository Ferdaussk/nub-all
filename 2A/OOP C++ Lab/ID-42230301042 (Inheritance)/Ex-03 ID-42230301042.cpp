#include <iostream>
#include <string>
using namespace std;

class Tournament {
private:
    string name;

public:
    // Constructor with default parameter
    Tournament(string name = "Default") : name(name) {}

    // Setter for name
    void set_name(string name) {
        this->name = name;
    }

    // Getter for name
    string get_name() const {
        return name;
    }

    // Function to display details
    virtual string detail() {
        return "Tournament Name: " + name;
    }
};

class Cricket_Tournament : public Tournament {
private:
    int num_teams;
    string type;

public:
    // Constructor
    Cricket_Tournament(string name = "Default", int num_teams = 0, string type = "No type") : Tournament(name), num_teams(num_teams), type(type) {}

    // Function to display details
    string detail() override {
        return Tournament::detail() + "\nNumber of Teams: " + to_string(num_teams) + "\nType: " + type;
    }
};

class Tennis_Tournament : public Tournament {
private:
    int num_players;

public:
    // Constructor
    Tennis_Tournament(string name = "Default", int num_players = 0) : Tournament(name), num_players(num_players) {}

    // Function to display details
    string detail() override {
        return Tournament::detail() + " Number of Players: " + to_string(num_players);
    }
};

int main() {
    // Part 1
    cout << "Part 1" << endl;
    cout << "------" << endl;
    Cricket_Tournament ct1;
    cout << ct1.detail() << endl;

    // Part 2
    cout << "-----------------------" << endl;
    cout << "Part 2" << endl;
    cout << "-----------------------" << endl;
    Cricket_Tournament ct2("IPL", 10, "t20");
    cout << ct2.detail() << endl;

    // Part 3
    cout << "-----------------------" << endl;
    cout << "Part 3" << endl;
    Tennis_Tournament tt("Roland Garros", 128);
    cout << tt.detail() << endl;

    return 0;
}
