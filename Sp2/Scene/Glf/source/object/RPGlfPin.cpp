// This structure likely contains an RPGlfModel based on asserts.

const int RATIO_SIZE = 16;

// "_top" (size = word)
void SetFrameRatio(void *unk1, void *unk2); // _top = unk2->0xC
void GetScale(); // Unused assert

// "_top"
void GetMtx(void *unk1); // _top = unk1->0xC
void SetMtx(); // Unused assert

// "_top"
void GetPos(void *unk1); // _top = unk1->0xC
void SetPos(void *unk1, void *unk2); // _top = unk1->0xC

// "_top"
void GetAtt(void *unk1); // _top = unk1->0xC

// "vel < RATIO_SIZE"
// "_top"
void SetWind(void *unk1, void *unk2, unsigned int vel);