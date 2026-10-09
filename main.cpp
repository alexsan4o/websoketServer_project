#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// TODO (why-ws): implement per the lesson description.

int main() {
    string line;
    int fl;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        //cout << "TODO" << "\n";
        if ((line.find("peer-to-peer") != string::npos) || (line.find("video") != string::npos))
            fl = 1;
        else if ((line.find("one-way") != string::npos) || (line.find("feed") != string::npos))
            fl = 2;
        else if ((line.find("chat") != string::npos) || (line.find("realtime") != string::npos) ||
                (line.find("game") != string::npos) || (line.find("collab") != string::npos) ||
                (line.find("bidirectional") != string::npos))
            fl = 3;
        else
            fl = 4;
        switch (fl) {
            case 1: {
                cout << "WEBRTC" << endl;
                break;
            }
            case 2: {
                cout << "SSE" << endl;
                break;
            }
            case 3: {
                cout << "WS" << endl;
                break;
            }
            case 4: {
                cout << "HTTP" << endl;
                break;
            }
        }
    }
}
