#pragma once
#include <string>
#include <iostream>

using namespace std;

class Song {
private:
    string title;
    string artist;
    string audioFilePath; // link to song on any storage platform
    
public:
    Song(string t, string a, string f) {
        title = t;
        artist = a;
        audioFilePath = f;
    }
    
    string getTitle() { 
        return title; 
    }
    string getArtist() { 
        return artist;      
    }
    string getAudioFilePath() { 
        return audioFilePath;  
    }
};