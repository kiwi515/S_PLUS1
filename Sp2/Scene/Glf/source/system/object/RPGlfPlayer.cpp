const int TEAM_SIZE = 2;
const int RESO_MAX1 = 256;

const float NOT_SIMED = -9999.0f;

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

// sizeof math is just array count
// "index < (sizeof(_watch) / (sizeof(_watch[0])))"
void Standby();

// "index < TEAM_SIZE"
void Update();

// "index < TEAM_SIZE"
void Order();

// Was this supposed to say "not SIGNED"?
// "p != NOT_SIMED"
// "s._dist[prev+i] == NOT_SIMED"
// "n != NOT_SIMED"
// "s._dist[next - i] == NOT_SIMED"
void ClubSimulate();

// "_ball"
void ReplayStart();
void ReplayStop();
void ReplayShot();