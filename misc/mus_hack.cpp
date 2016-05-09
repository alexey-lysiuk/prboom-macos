
// Missing definitions from SDL/i_sound.c

#ifdef HAVE_OWN_MUSIC

extern "C"
{

int mus_fluidsynth_chorus;
int mus_fluidsynth_reverb;
int mus_fluidsynth_gain; // NSM  fine tune fluidsynth output level
int mus_opl_gain; // NSM  fine tune OPL output level

int use_experimental_music = -1;

};

#endif // HAVE_OWN_MUSIC
