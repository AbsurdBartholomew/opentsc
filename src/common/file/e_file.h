/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

enum ErrorCode {
	ER_NONE = 0,
	ER_EOF = 1,
	ER_INVALID_HANDLE = 2,
	ER_INVALID_ARGUMENT = 3,
	ER_IO_FAULT = 4,
	ER_OUTOFMEMORY = 5,
	ER_ACCESS_DENIED = 6,
	ER_FILE_EXISTS = 7,
	ER_FILE_NOT_FOUND = 8,
	ER_DEVICE_NOT_FOUND = 9,
	ER_WRITE_PROTECT = 10,
	ER_TOO_MANY_OPEN_FILES = 11,
	ER_DEVICE_FULL = 12,
	ER_UNKNOWN = 13,

	_ER_COUNT
};

enum IOMode {
	IOM_READ = 1,
	IOM_WRITE = 2,
	IOM_READ_WRITE = 3,
	IOM_APPEND = 4,
	IOM_WRITE_APPEND = 6,
	IOM_READ_WRITE_APPEND = 7,
	IOM_UNSPECIFIED = 8
};

enum AccessMode {
	AM_RANDOM_ACCESS = 0,
	AM_SEQUENTIAL_SCAN = 1,
	AM_UNSPECIFIED = 2,

	_AM_COUNT
};

enum DeviceType {
	DT_DEFAULT = 0,
	DT_HD = 1,
	DT_HOST = 2,
	DT_DVD = 3,
	DT_USB_ETHERNET = 4,
	DT_USB_ETHERNET_BUFFERED = 5,
	DT_PIPE = 6,
	DT_UNSPECIFIED = 7,

	_DT_COUNT
};

enum SeekType {
	ST_SET = 0,
	ST_CURRENT = 1,
	ST_END = 2,
	ST_UNSPECIFIED = 3,
	_ST_COUNT = 4
};

class EFile {
public:
	/* vtable[2] */ virtual unsigned int Read() = 0;
	/* vtable[3] */ virtual unsigned int Write() = 0;
	/* vtable[4] */ virtual unsigned int Seek() = 0;
	/* vtable[5] */ virtual unsigned int Tell() = 0;
	/* vtable[6] */ virtual bool Flush() = 0;
	/* vtable[7] */ virtual ErrorCode GetLastError() = 0;
	/* vtable[8] */ virtual IOMode GetIOMode() = 0;
	/* vtable[9] */ virtual AccessMode GetAccessMode() = 0;
	/* vtable[10] */ virtual DeviceType GetDeviceType() = 0;
	/* vtable[11] */ virtual char* GetDrive() = 0;
	/* vtable[12] */ virtual char* GetPath() = 0;
	/* vtable[13] */ virtual char* GetName() = 0;
	/* vtable[14] */ virtual char* GetExt() = 0;
	/* vtable[15] */ virtual void* GetSystemHandle() = 0;
protected:
	/* vtable[16] */ virtual void Destroy() = 0;
};

extern void SplitPath(char *path, char *drive, char *dir, char *fname, char *ext);