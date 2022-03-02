#include "Inc.h"

int main()
{
    printf("Greetings universe!\n");

    drwav wav;
    if (!drwav_init_file(&wav, "my_song.wav", NULL)) {
        // Error opening WAV file.
    }

    drwav_int32* pDecodedInterleavedPCMFrames = malloc(wav.totalPCMFrameCount * wav.channels * sizeof(drwav_int32));
    size_t numberOfSamplesActuallyDecoded = drwav_read_pcm_frames_s32(&wav, wav.totalPCMFrameCount, pDecodedInterleavedPCMFrames);

    drwav_uninit(&wav);
	return 0;
}