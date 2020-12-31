struct RPGlfModel
{
    // "_model"
    void GetJointNum();
    void GetJointIndex();
    void GetAnim();
    void SetDrawPriorityXlu();
    void ReplaceTexture();
    void SetColor();

    // "_model"
    // "!_model"
    void Setup();

    // "a"
    void RegistAnimation();
    void Play();
    void Stop();
    void Pause();
    void IsPlay();
    void IsExit();

    void *_model;
};