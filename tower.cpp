#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare three vectors to represent the three towers
    vector<int> t[3];

    int p;
    // Get the number of rings to move from the user
    cout << "Please enter the number of rings to move: ";
    cin >> p;

    int from = 0;
    int to;
    // Determine the destination tower based on the parity of 'p'
    if (p % 2 == 1)
        to = 1;
    else
        to = 2;
    int customer = 1;
    int move = 0;

    // Initialize the towers with a sentinel value (p+1) and the rings from 'p' to 1
    t[0].push_back(p + 1);
    t[1].push_back(p + 1);
    t[2].push_back(p + 1);

    for (int i = p; i >= 1; --i)
        t[0].push_back(i);

    // Towers of Hanoi algorithm
    while (t[1].size() != p + 1) {
        cout << "\nMove #" << ++move << ": Transfer ring " << customer << " from tower " << char(from + 'A') << " to tower " << char(to + 'A');

        // Move the top ring from the 'from' tower to the 'to' tower
        t[to].push_back(t[from].back());
        t[from].pop_back();

        // Determine the next 'from' tower based on the rules of the Towers of Hanoi
        if (t[(to + 1) % 3].back() < t[(to + 2) % 3].back())
            from = (to + 1) % 3;
        else
            from = (to + 2) % 3;

        // Update the 'customer' variable to the ring on the new 'from' tower
        customer = t[from].back();

        // Determine the next 'to' tower based on the rules of the Towers of Hanoi
        if (p % 2 == 1) {
            if (customer % 2 == 1)
                to = (from + 1) % 3;
            else
                to = (from + 2) % 3;
        } else {
            if (customer % 2 == 1)
                to = (from + 2) % 3;
            else
                to = (from + 1) % 3;
        }
    }
    return 0;
}
