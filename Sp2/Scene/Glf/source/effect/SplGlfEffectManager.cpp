// This file is likely unique to WSC, as evidenced by its "Spl" prefix,
// however I have included it here as there may be a similar implementation in OGWS;
// in which case, we have a good name for it.

// "UnregisterResource is Failed. i = %d"
void Exit();

// "RegisterResourceFromMemory is Failed. i = %d name:%s"
void Setup();

void Create();
// "id < (sizeof(s_info) / (sizeof(s_info[0])))"
void Play();