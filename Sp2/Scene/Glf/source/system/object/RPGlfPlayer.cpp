const int TEAM_SIZE = 2;
const int RESO_MAX1 = 256;

// "index < TEAM_SIZE"
// WSC??
void GetSystemID(unsigned int index);

void GetOptionFlag();

// "_ball"
void GetBall();

// "_club"
void GetClub();

// "_index < TEAM_SIZE"
void GetAvatar();
void Update();

// "_swing" (param_2 + 0x83DC, word)
void GetSwing();

// "index < TEAM_SIZE"
void GetControlID();

// "order < RESO_MAX1"
void OrderToPower();

// "power <= 1.f"
void InitSimulate();

// Incomplete assert
void GetHolePar();

// "_entry == entry"
void Configure();

// Incomplete assert
void ChangeExpression();
void SetMii();

// "!_balloon"
// "!_marker" (The code after this assert references the Golf player marker BFRES)
void Setup();

// "_club"
void GetSwingFrame();

// "_ball"
void GetBallPos();