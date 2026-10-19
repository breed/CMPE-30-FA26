#include "music.hpp"

Song::Song(std::string title, std::string artist, int year) : title(title), artist(artist) {
    setYear(year);
}

Song::~Song() {
    std::cout << "Song destructor called for: " << title << " by " << artist << std::endl;
}

std::string Song::operator ++(int) const {
    return artist;
}

int Song::operator ~() const {
    return year;
}

std::string Song::to_string() const {
    return title + " by " + artist + " (" + std::to_string(year) + ")";
}
