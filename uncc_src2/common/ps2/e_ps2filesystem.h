// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_PS2_E_PS2FILESYSTEM_H
#define C__EOR_SRC2_COMMON_PS2_E_PS2FILESYSTEM_H

typedef __sFILE FILE;

struct EPs2FileSystem : EFileSystem {
private:
	char m_pszHostIPAddress[16];
	
public:
	EPs2FileSystem& operator=();
	EPs2FileSystem();
	EPs2FileSystem();
	/* vtable[1] */ virtual EPs2FileSystem(EPs2FileSystem*, int, void);
	/* vtable[6] */ virtual bool Init(DeviceType eDefaultType);
	void SetHostIPAddress(char *pszHostIPAddress);
	char* GetHostIPAddress();
};

extern __vtbl_ptr_type EPs2FileSystem virtual table[8];

void EPs2FileSystem::~EPs2FileSystem(int __in_chrg);
FILE* fopen(char *path, char *mode);
int fclose(FILE *stream);
unsigned int fread(void *ptr, unsigned int size, unsigned int nmemb, FILE *stream);
unsigned int fwrite(void *ptr, unsigned int size, unsigned int nmemb, FILE *stream);
int fseek(FILE *stream, long int offset, int origin);
long int ftell(FILE *stream);
char* fgets(char *string, int count, FILE *stream);

#endif // C__EOR_SRC2_COMMON_PS2_E_PS2FILESYSTEM_H
