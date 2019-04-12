//constants definition
//#define DEBUG
#define RATE 16000 //sample per second
#define CMD "arecord -r16000 -c1 -f S16_LE -d1 -q test.wav"
#define PI 3.1415926
//data structures
struct WAVHDR{
	char ChunkID[4];
	int ChunkSize;
	char Format[4];

	char Subchunk1ID[4];
	int Subchunk1Size;
	short AudioFormat;
	short NumChannels;
	int SampleRate;
	int ByteRate;
	short BlockAlign;
	short BitsperSample;

	char Subchunk2ID[4];
	int Subchunk2Size;

};
// function declaration
void displayWAVHDR(struct WAVHDR h);
void displayWAVDATA(short []);
void testTone(int, int, float);