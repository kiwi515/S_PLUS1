const int ATTR_SIZE = 20;

struct RPGlfFieldManager
{
    // "index < ATTR_SIZE"
    void GetFrictK();
    void GetReflectK();

    // "r" (The code seems to be verifying a singleton pointer)
    // "!_field"
    // "!_map"
    // "!_symbol"
    void SetupField();

    // "!_trees"
    void SetupTree();

    // "!_shots"
    // "!_shots && _shot_size != 0"
    // "!_tees"
    // "_tees"
    void SetupTee();

    // "!_waters"
    void SetupWater();

    // "!_sky"
    void SetupSky();

    // "!_sun"
    void SetupSun();

    // "!_ground"
    void SetupGround();

    // "!_effect"
    // "_effect"
    void SetupEffect();

    // "_field"
    void SetShadowColor();

    // "mm" (mm is some global object, likely a singleton too)
    void SetShadowLight();
    void SetupShadow();

    // "_shot"
    void GetTeePos(RPGlfFieldManager* self);
    void GetTeeDir(RPGlfFieldManager* self);

    // "id < _pole_size"
    void PoleStart(RPGlfFieldManager* self, unsigned int id);

    // "!_pins"
    // "!_pins && _pin_size != 0"
    // "_et_pins" (local call return value)
    void SetupPin(RPGlfFieldManager *self, unsigned int id);

    // "!_wind" (_wind is a member of unk2) (unk2 + 0x67C)
    void SetupWind(RPGlfFieldManager *self, int unk, void *unk2);

    // "_cups" (The control flow leads me to believe _cups is not a member of the field manager.)
    // "_et_cups" (See _et_pins.)
    void SetupCup();

    // "!_poles"
    // "_poles"
    // "_et_poles" (See _et_pins.)
    void SetupPole();

    // I think this is the WSC training game.
    // "!_bingo" (Unused assert)
    void SetupBingo();

    // "!_target" (References Target Practice models like SPL_GlfMato.)
    void SetupTarget();

    // "_cups && _pins"
    // "id < _cup_size && id < _pin_size"
    void ReplaceCup(RPGlfFieldManager *self, unsigned int id);

    // "_poles"
    // "id < _pole_size && id < _pole_size"
    void ReplacePole(int unk1, int unk2, int unk3, 
                    int unk4, RPGlfFieldManager* fMgr, 
                    unsigned int id, int unk7, int unk8);

private:
    void *_field;
    void *_map;
    void *_symbol;
    void *_trees;
    
    void *_shots;
    int _shot_size; // Length of array _shots
    
    void *_tees;
    void *_waters;
    void *_sky;
    void *_sun;
    void *_ground;
    void *_field;
    
    void *_shot;
    
    void *_poles; // Not referenced by assert, but the existence of _pole_size means this must exist.
    int _pole_size; // Length of array _poles
    
    void *_pins;
    int _pin_size; // Length of array _pins

    void *_target;

    void *_cups;
    int _cup_size; // Length of array _cups
};