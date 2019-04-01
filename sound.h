//constants definition
#define RATE 16000 //sample per second
//data structures
struct WAVEHDR{
	char ChunkID[4];
	int ChunkSize;
	char Format[4];

	char SubchunkID[4];
	int Subchunk1Size;
	short AudioFormat;
	short NumChannels;
	int SampleRate;
	int ByteRate;
	short BlockAlign;
	short BitsperSample;

	char Subchunk2ID[4],
	int Subchunk2Size;

};
// function declaration
