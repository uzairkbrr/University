#include <iostream>
#include <vector>
using namespace std;

void game(vector<string> &friends) {
    if (friends.size() == 1) {
        cout << "Winner: " << friends[0] << endl;
        return;
    }

    int random_index = rand() % friends.size();
    cout << "Eliminated: " << friends[random_index] << endl;
    friends.erase(friends.begin() + random_index);

    game(friends);
}

int main() {

    vector<string> friends = {"Uzair", "Uzm", "Muhammad", "Shaheer"};
    game(friends);

    return 0;
}