const int SIZE = 8;
const int RUMBLE_SIZE = 12;

class RPGlfClubManager
{
    // "index < SIZE"
    void Get();
    
    // "!_rumble"
    void ClubManager();
    // "type < RUMBLE_SIZE"
    void Vibration();

    // I think this is a pointer to a rumble string,
    // as the strings are right after this assert.
    char *_rumble;
};